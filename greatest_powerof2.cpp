#include<iostream>
#include<math.h>
using namespace std;

int gre_power(int n){

  while((n & (n-1)) !=0){
    n = (n & (n-1));
  }
  return n;
}
//another method
int gre_power2(int n){
  int k= (int) log2(n);
  return (int)pow(2,k);
}

int main(){
  cout<<"\ngreatest power of 2 less than 98: "<< gre_power(98);
  cout<<"\ngreatest power of 2 less than 98: "<< gre_power2(98);
}
