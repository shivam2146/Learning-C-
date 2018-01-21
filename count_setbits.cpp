#include<iostream>
using namespace std;
int count(int n){
  int c=0;
  while(n){
    n= n&n-1;
    c++;
  }
  return c;
}

int main(){
  int n;
  printf("input no to count it's set bits: ");
  scanf("%d",&n);
  int c= count(n);
  printf("no of set bits: %d",c);
}
