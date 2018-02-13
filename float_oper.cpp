#include<bits/stdc++.h>
using namespace std;
bool compare(long double a, long double b){
  if(abs(a-b)< 1e-9)
    return true;
  else
    return false;
}
int main(){
  double x=0.3*3+0.1, y=0.799999999999989;
  cout<<"max size for float is: "<<FLT_MAX;
  cout<<"\nmax size for double is: "<<DBL_MAX;
  cout<<"\nmax size for long double is: "<<LDBL_MAX;

  cout<<"\nvalue of x: "<<x;    //sometimes it gives unexpected output due to precision errors
  printf("x:%.9f",x);         //to print with some set precision
  printf("compare result for x and y %d",compare(x,y));
}
