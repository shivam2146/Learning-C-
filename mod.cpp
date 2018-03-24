#include<bits/stdc++.h>
using namespace std;
//both of these work for -ve no as well
int mod(int a, int m){
  return(((a%m)+m)%m);
}
int mod1(int a, int m){
  int c = a%m;
  return(c<0? c+m : c);
}
int main(){
  int n= -125;
  int m=20;
  cout<<mod(n,m);
  cout<<mod1(n,m);
}
