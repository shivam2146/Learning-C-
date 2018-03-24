#include<iostream>
using namespace std;
int main(){
  string s="hey";
  string s1 = s+s;
  cout<<s1;
  cout<<s1.find("y");
  string s2 = s1.substr(2,4);
  cout<<s2;
}
