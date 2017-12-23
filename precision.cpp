#include<iostream>
using namespace std;
int main(){

double a = 4.223234232;
double b = 2323.0;

cout.precision(6);

cout<<"Normal values of floating point numbers\n a=";
cout<<a<<"\nb=\n"<<b;

cout<<"\n\n\nvalues using fixed\n"<<std::fixed;
cout<<a<<"\n"<<b;

cout<<"\n\n\nvalues using scientific\n"<<std::scientific;
cout<<a<<"\n"<<b;

cout<<"\n\n\nvalues using hexfloat\n"<<std::hexfloat;
cout<<a<<"\n"<<b;

cout<<"\n\n\nvalues using default float\n"<<std::defaultfloat;
cout<<a<<"\n"<<b;

return 0;
}
