#include<bits/stdc++.h>
using namespace std;
bool check_overflow(int a, int b){
  cout<<"value of INT32_MAX: "<<INT32_MAX;  //there are INT8_MAX and other variants for other int with 8 16 bit size
  cout<<"\nvalue of INT32_MIN: "<<INT32_MIN<<endl;
  if(a > INT32_MAX-b)   //online compilers allow for INT_MAX directly
    return true;
  else
    return false;
}
int main(){
  int n=2147483647,m=50;
  if(check_overflow(n,m))
    printf("overflow\n%d",(n+m));
  else
    printf("no overflow\n%d",(n+m));
}
