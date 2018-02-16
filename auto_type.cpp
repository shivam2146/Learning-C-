#include<iostream>
using namespace std;

char* func1(){
  return "sh";
}

template <typename A, typename B>
auto Min(A a, B b) -> decltype(a<b?a:b){
  return (a<b) ? a : b;
}


int main(){
  auto a= 1.2;  //automatically deduces type of variable at compile time
  auto b = &a;
  cout<<typeid(a).name()<<endl; //typeid is an operator used to determine dynamic type of object
  cout<<typeid(b).name()<<endl; //name returns shorthand name of the type

  decltype(func1()) x;    //decltype is operator which extracts the return type of expr given
  cout<<typeid(x).name()<<endl;

   cout<<Min(1.5,3.25);

}
