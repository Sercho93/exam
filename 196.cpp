#include <iostream>
using namespace std;
#include “BigIntegerLibrary.hh”
BigInteger swap(BigInteger val) {
BigInteger changed=0;
while(val>0) {
changed=(changed*10)+(val%10);
val=val/10;
}
return changed;
}

int LychrelConver(BigInteger val) {
BigInteger add;
int resp, tries=0;
if(val==swap(val)) {
resp=1; }
else {
add=val+swap(val);
while(tries!=30 && add!=swap(add)) {
add=add+swap(add);
tries=tries+1; }
if(tries==30) {
resp=2;
cout<<“Lychrel candidate is “<<” “<<val<<endl;
}
else {
resp=3; }
}
return resp;
}
int main() {
int high, low, lychrel, first, moreTries, resp;
BigInteger val;
lychrel= 0;
first = 0;
moreTries = 0;
cout<<“Give the lower bound of the range of numbers”<<endl;
cin>>low;
cout<<“Give the upper bound of the range of numbers”<<endl;
cin>>high;
for(int i=0; val!=high; i=i+1){
val=low+i;
if(LychrelConver(val)==1) {
first=first+1; }
else if(LychrelConver(val)==2){
lychrel=lychrel+1; }
else {
moreTries=moreTries+1; }
}
cout<<“Lychrel´s”<<” “<<lychrel<<endl;
cout<<“Natural palindrome”<<” “<<first<<endl;
cout<<“More tries palindromes”<<” “<<moreTries<<endl;
return 0;
}
