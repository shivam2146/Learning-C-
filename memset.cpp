#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char arr[]="the night is dark and full of terrors";
  printf("before memset :%s \n",arr);
  memset(arr,'-',9);
  printf("after memset : %s \n",arr);
}
