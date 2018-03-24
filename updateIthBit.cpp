#include<iostream>
using namespace std;
int updateIthBit(int x, int i , bool val){
  int mask = ~(1 << i);
  int v = val ? 1: 0;
  return ((mask & x) | (v<<i) );
}

int main(){
  cout<<"update 3th bit of 31 with 0 we get: "<<updateIthBit(31,3,0)<<endl;
}
