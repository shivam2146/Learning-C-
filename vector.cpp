#include<iostream>
#include<vector>

using namespace std;

int main() {
  vector<int> vec(5);       //creates a vector of size 5 initilized with zeroes
  cout<<"\ninitial size of vector "<<vec.size()<<endl;            // remarks:size() is unsigned
  vec.push_back(25);             //pushes 25 at end of vector increasing size of vector by one
  for(int i=0;i<4;i++)
    vec.push_back(i*15);
  cout<<"size of vector after pushing values: "<<vec.size()<<endl;     //so total size of vector will be 10
  cout<<"values in v after insertion displayed using vec[i]: \n";
  for(int i=0;i<10;i++)
    cout<<vec[i]<<" ";

  vec.resize(15);               //vec size is changed to 15 remark: if vec grows initilized with zero in end
                                //if it shrinks then elements at last are deleted
  //using iterator to access values in vector
  cout<<"values in v after resizing displayed using iterator: \n";
  vector<int>::iterator v= vec.begin();       //begin( ) returns an iterator to the start of the vector.
  while(v != vec.end()){                      //function begin( ) returns an iterator to the start of the vector
    cout<<"\nvalue of v="<<*v;
    v++;
  }
  vec.clear();        //clears the whole vector i.e deletes all elements and resizes it to zero
  cout<<"\ncheck whether vec is empty or not after clear() is called::    ";
  if(vec.empty())                              //returns true if container is empty
    cout<<"yes ";
  else
    cout<<"no";

  vector<int> vec1;
  cout<<"\ncheck whether vec1 is empty or not::   ";
  if(vec1.empty())                              //returns true if container is empty
    cout<<"yes ";
  else
    cout<<"no";

    //ways of intialzing vectors
  vector<int> vec4(10,5);        //initilizes vector of size 10 with value 5 instead of 0
  vector<int> vec5(vec4);        //initilizes vector from another vector
  vector<int> vec6 = vec5;      //same as writing vec2(vec1)
  if(vec4==vec5)
    cout<<"\nyay vec4 and vec5 are same";
  if(vec5==vec6)
    cout<<"\nyay vec5 and vec6 are same";
  std::vector<string> v1(10,"something here");     //creates vector of size 10 all initilized with string something here
  cout<<"\nvalue at v1[2] of string vector:  "<<v[2];

  return 0;
}
