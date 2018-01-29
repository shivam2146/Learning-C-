#include<iostream>
using namespace std;

bool check(int x)
{
  return(x && !(x&(x-1)));
}
int main(){
  int n;
  printf("input no to check if it is power of two");
  scanf("%d",&n);
  if(check(n))
    printf("yes the no is power of two" );
  else
    printf("no it is not");
}
