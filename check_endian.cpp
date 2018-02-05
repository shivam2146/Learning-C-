#include<iostream>
using namespace std;
bool isLittleEndian(){
  int b= 1;
  char *c=  (char *) &b;
  return *c;
}
//check little endian using unions a liitle more elegant way
bool isLittleEndian1(){
  union {
    int n;
    char sbyte;
  }test;
  test.n=1;
  return test.sbyte;
}
int main(){
  bool a = isLittleEndian1();
  if(a == 1)
    cout<<"little endian";
  else if (a == 0)
    cout<<"big endian";
}
