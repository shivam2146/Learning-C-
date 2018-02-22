#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("a=%d\n b=%d",a,b);
  int x;
  //string s;
  //printf("input the string");
  //getline(cin,s);
  //printf("the string is:%c",s);

  
  //for i/o from a file
  freopen("input.txt","r",stdin);   //makes input.txt as standard input
  freopen("output.txt","w",stdout); //makes output.txt as standard output
  while(cin>>x)   //works until there is input
  cout<<x;
}
