#include<iostream>
using namespace std;
int main()
{
	unsigned int n=24;  // 24= 11000	
	unsigned int n1=16; // 16= 10000
	int c=0;
	
  c=n1&n;
	cout<<"n and n1 "<<c<<endl;
	
  c=n1|n;
	cout<<"n or n1 "<<c<<endl;
	
  c=n1^n;
	cout<<"n xor n1 "<<c<<endl;
	
  c=~n;
	cout<<"~n  "<<~n<<endl;
	
  c=n<<2;
	cout<<"n left shift 2 "<<c<<endl;
	
  c=n>>2;
	cout<<"n right shift 2 "<<c<<endl;
	
  return 0;
}
