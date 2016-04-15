// Sergio Zavaleta Cortés / A01631474
#include <iostream>
using namespace std;

int triangle(int x)
{
for (int i=1; i<=x; i++)
{
for (int j=1; j<i+1; j++)
cout << "T";
cout << endl;
}
for (int i=x-1; i>=1; i--)
{
for (int j=1; j<i+1; j++)
cout << "T";
cout << endl;
}
}

int main()
{
int y;
cout << "¿Cuál quieres que sea el largo del triángulo?" << endl;
cin >> y;
triangle(y);
}
