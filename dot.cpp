#include <iostream>
using namespace std;

double dot_product(double list1[], double list2[], int num)
{
  double product=0;

  for (int i = 0; i < num; i++)

  {
    product=product+(list1[i]*list2[i]);
  }

return product;
}

int main ()
{
  int num;
  cout<<endl;
  cout<<"¿Cuántos número tendrá tu lista?"<<endl;
  cin>>num;

  double product, list1[num], list2[num];
  for (int i = 0; i < num; i++)
  {
  cout<<"Ingresa el "<<i+1<<"° valor de la primer lista: ";
  cin>>list1[i];
  }

  for (int i = 0; i < num; i++)
  {
  cout<<"Ingresa el "<<i+1<<"° valor de la segunda lista: ";
  cin>>list2[i];
  }

  product=dot_product(list1,list2,num);
  cout<<"El resultado es : "<<product;

return 0;
}
