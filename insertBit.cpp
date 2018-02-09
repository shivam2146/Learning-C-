#include<iostream>
using namespace std;
int insertbit(int n,int m,int j,int i){
  for(int k= i; k<=j; k++)
    n = (n & (~(1<<k)));
  int mask = m<< i;
  return n|mask ;
  //return ((mask1 & mask3 & mask2)&n);
}

int main(){
  int n = 1024;
  int n1= 1095;
  int m = 19;
  cout<<insertbit(n,m,6,2);

}
//10011      19
//10001000111   1095
//10000000011   2 to 6 cleared
//    1001100   76 i.e 19 shifted 2times to left
//10001001111
