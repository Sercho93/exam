#include <iostream>
using namespace std;

string case_check(string z)
{
  for(int i=0;i<z.size();i++)
  {
    if(z[i]>64 && z[i]<91) z[i]+=32;
  }
  return z;
}

bool isPalindrome(string z)
{
  string w,pal;
  w=case_check(z);
  pal=string(w.rbegin(),w.rend());
  if(w==pal) return true;
  else return false;
}

int main()
{
  string p;
  bool resp;
  cout<<"Escribe un grupo de caracteres (palabras o números):" << endl;
  getline(cin,p);
  resp=isPalindrome(p);
  if(resp) cout<<"TRUE"<<endl;
  else cout<<"FALSE"<<endl;
}
