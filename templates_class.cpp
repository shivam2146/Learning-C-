#include<iostream>
using namespace std;


template<class T,class U=char>
class test{
	T mem1;
	U mem2;
  public:
	test(T a,U b);
	void display();
};

template<class T,class U>
test<T,U>::test(T a,U b){
	mem1 = a;
	mem2 = b;

}

template<class T,class U>
void test<T,U>::display(){
	cout << "members are: " << mem1 << " " << mem2;
}


int main(){
	test<int> obj(1,'a');
	obj.display();
	test<int,float> obj1(1,'a');  //takes a ascii value as float i.e 97
	obj1.display();

}
