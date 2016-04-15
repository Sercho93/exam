// Sergio Zavaleta Cortés
#include <iostream>
using namespace std;
int f, f1=0, f2=1;
 long fibonacci (long n)
 {
 	 
 	 for (int t=1; t<n; t++)
 	 {
 	 f = f1 + f2;
	 f1 = f2;
	 f2 = f;
 	 }
 	 return f;
 }
 
 int main()
 {
 	 long n;
 	 cout << "Ingresa el número fibonacci: ";
 	 cin >> n;
 	 cout << "El número es: " << fibonacci(n) << endl;
 }
