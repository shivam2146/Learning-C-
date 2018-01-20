#include<iostream>
using namespace std;
bool check(int x,int i){
  return(x & (1<<i));
}
int main(){
  int n,i;
  printf("input no and i th bit position to check for set bit: ");
  scanf("%d %d",&n,&i);
  if(check(n,i))
    printf("yes the i th bit is set to 1 ");
  else
    printf("no");
}
