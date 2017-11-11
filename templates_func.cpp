#include<iostream>
using namespace std;
template<class T,class U>   //can use keyword 'typename' instead of class
void func(T a,U b){
	cout << "\ntemplate generalisation\n"<<a<<b;
}
template<>
void func(char a,int b){
	cout<<"\ntemplate specialization\n"<<a<<b;
}

int main(){
	func(23,15);
	func('a',23);
	func<float,string>(3.06,"hello");
}
