#include<iostream>
#include<algorithm>
using namespace std;

struct points{
  int x;
  int y;
  bool operator<(const points &p){      //to sort a user defined data type we need to define < operator for the DT
    if(x != p.x)
      return x < p.x;
    else
      return y <p.y;
  }
};

bool comp(string a, string b){    //func which sorts strings primarily by string length and secondarily by ascending order
  if(a.size() != b.size())
    return a.size() < b.size();
  else
    return a < b;

}
int main(){
  int arr[]={5,2,3,4,1,6,5};
  sort(arr,arr+7);
  for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
  string s[] ={"hank","karen","ben","bella"};
  sort(s,s+4,comp);
  for(int i=0;i<4;i++)
    cout<<s[i]<<"  ";
  points p[5]={{1,2},{1,4},{2,5},{5,6},{3,2}};
  sort(p,p+5);
  for(int i=0;i<5;i++)
    cout<<"\n"<<p[i].x<<" "<<p[i].y;
}
