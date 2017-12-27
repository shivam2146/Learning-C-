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

  vector<int> vec2(10,5);
  vec2.push_back(6);
  vec2.push_back(54);
  vector<int>::reverse_iterator ri;
  cout<<"\ncontent of vec2 in reverse using reverse_iterator:\n";
  for(ri=vec2.rbegin();ri!= vec2.rend();ri++)  //returns a reverse iterator pointing to the last element in the vector (reverse beginning)
      cout<<*ri<<" ";                         // Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
  vec2.pop_back();
  cout<<"\nmax_size "<<vec2.max_size();
  cout<<"\ncapacity "<<vec2.capacity();
  cout<<"\nsize "<<vec2.size();
  cout<<"\nelement at pos 10 :"<<vec2.at(10);   //gives element at index 10
  cout<<"\nelement at front: "<<vec2.front();
  cout<<"\nelement at back: "<<vec2.back();
  return 0;
}
