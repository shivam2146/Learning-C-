#include<iostream>
#include<vector>
using namespace std;
void func(vector< vector<int> > v){     //try to avoid this as copy of vector is made and it is costly in terms of memory as well as time
  cout<<v[1][3];
}
void func1(vector< vector<int> > &v){
  cout<<v[1][0];
}
int main(){
  vector< vector<int> > vec(2, vector<int>(3) );  //vector of size 2*3 filled with 0
  vector< vector<int> > vec1(2, vector<int>(3,-1) );    //here we create a 2d matrix of size 2*3 filled with -1
  vec[1].push_back(15);
  func(vec);
  func1(vec1);
  return 0;
}
