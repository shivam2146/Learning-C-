#include<iostream>
#include<math.h>
using namespace std;
bool check(int n,int i){
  return(n & (1<<i));
}
void gen_subset(int arr[],int n){
  for(int i=0; i< (1<<n);i++)
  {
    for(int j=0;j<n;j++){
      if(check(i,j))
        printf(" %d",arr[j]);
    }
    printf("\n");
  }
}

int main(){
  int arr[]={2,5,6};
  gen_subset(arr,3);
}
