#include<iostream>
using namespace std;
int clearBitsMsbThruI(int x, int i){
  int mask = (1 << i)-1;
  return(x & mask);
}
int clearBits0ThruI(int x,int i){
  int mask = (-1<< (i+1));
  return (x & mask);
}
int main(){
  int x = 31;
  cout<<"clear all bits in 31 from msb through 2:"<<clearBitsMsbThruI(x,2)<<endl;
  cout<<"clear all bits in 31 from 0 through 1 :"<<clearBits0ThruI(x,1)<<endl;
}


//11011
