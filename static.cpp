#include<iostream>
using namespace std;

class Test{
	public:
		static int a;
		static void print(){
			cout<<a;  //static func can acess only static members
		}
		Test(){
			cout<<"\nconstructor called for object"<<++a;
		}
		~Test(){
			cout<<"\ndestructor called "<<a--;
		}
}; 
int Test::a=0;
int main(){
	int x=1,z=0;
	if(x==1){
		Test a;
	}
	if(z==0){
		static Test b;
		cout<<"\nvalue of static a ";
		Test::print(); 
		Test c;
	}
	cout<<"\nEnd of main";
	
}
