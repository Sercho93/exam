#include <iostream>

int main()
{
float resp, m, a, f;
std::cout << "Este programa es acerca de la Segunda Ley de Newton." << std::endl;
std::cout << " " << std::endl;
std::cout << " " << std::endl;
std::cout << "Las leyes de Newton, también conocidas como leyes del movimiento de Newton, son tres principios a partir de los cuales se explican la mayor parte de los problemas planteados por la mecánica, en particular aquellos relativos al movimiento de los cuerpos, que revolucionaron los conceptos básicos de la física y el movimiento de los cuerpos en el universo." << std::endl;
std::cout << "  " << std::endl;
std::cout << " " << std::endl;
std::cout << "La Segunda Ley de Newton establece lo siguiente: La aceleración de un objeto es directamente proporcional a la fuerza neta que actúa sobre él e inversamente proporcional a su masa." << std::endl;
std::cout << "  " << std::endl;
std::cout << "  " << std::endl;
std::cout << "¿Qué deseas calcular? 1. Fuerza 2. Aceleración 3. Masa" << std::endl;
std::cin >> resp;
if (resp == 1) {
  std::cout << "Ingresa la masa: " << std::endl;
  std::cin >> m;
  std::cout << "Ingresa la aceleración: " << std::endl;
  std::cin >> a;
  f = m*a;
  std::cout << "La fuerza es: " << f << " N" <<std::endl;
}
else
{
  if (resp == 2) {
    std::cout << "Ingresa la fuerza: " << std::endl;
    std::cin >> f;
    std::cout << "Ingresa la masa: " << std::endl;
    std::cin >> m;
    a = f / m;
    std::cout << "La aceleración es: " << a << " m/s^2"<< std::endl;
  }
  else{
    if (resp == 3) {
      std::cout << "Ingresa la fuerza: " << std::endl;
      std::cin >> f;
      std::cout << "Ingresa la aceleración: " << std::endl;
      std::cin >> a;
      m = f / a;
      std::cout << "La masa es:" << m << " kg" << std::endl;
    }
  }
}
return 0;
}
