#include<iostream>
#include<vector>
#include<algorithm>       //for lowerbound upperbound and sort
using namespace std;
int main(){
    //modifiers for vectors
    vector<int> vec;
    vector<int> vec1;
    for(int i=0;i<6;i++)
      vec.push_back((i+5)*3);
    vector<int>::iterator ir;
    ir=vec.begin()+2;
    vec1.assign(ir,vec.end());    //using another vector's "iterator" to assign values to this one
    cout<<"\nsize of vec: "<<vec.size();
    cout<<"\nsize of vec1: "<<vec1.size();

    //using arrays to assign value to vectors
    vector<int> vec2;
    int arr[]={6,3,2,1,5};
    vec2.assign(arr,arr+3);    //assigns arr[0] to arr[2] to vec2
    cout<<"\nsize of vec2: "<<vec2.size();
    ir= vec2.begin();
    cout<<"\ncontent of vec2: \n";
    while(ir!= vec2.end()){
      cout<<*ir<<" ";
      ir++;
    }

    //assigning constant value to all elements of vector
    vector<int> vec3;
    vec3.assign(5,10); //5 elements with each having value 10
    cout<<"\nsize of vec3: "<<vec3.size();

    swap(vec2,vec3);   //swaps the ncontent  of vec2 and vec 3
    cout<<"\nsize of vec2 after swap: "<<vec2.size();
    cout<<"\nsize of vec3 after swap: "<<vec3.size();
    ir=vec2.begin()+3;
    vector<int>::iterator ir1= vec2.insert(ir,256);   //Adds element ‘256’ before the element referenced by iterator ‘ir’ and returns an iterator that points to the newly added element
    cout<<"\nvalue inserted in vec2: "<<*ir1;

    ir= vec2.begin()+1;
    vec2.insert(ir,5,32);  //Adds ‘5’ elements each with value ‘32’ before the element currently referenced by iterator ‘ir’ returns an iterator
    int arr1[]={5,95,12};
    ir= vec2.begin();
    vec2.insert(ir,arr1,arr1+3);  //adds elemnt from array in vec2 before ir and returns iterator
    ir= vec2.begin();

    vec2.erase(vec2.begin()+3);     //deletes element pointed by iterator passed and returns an iterator to the element followed by the deleted element
    vec2.erase(vec2.begin(),vec2.begin()+3);  //deletes first 3 elements


    cout<<"\ncontent of vec2 after insertion and erasing: ";    //32 32 32 32 32 10 10 256 10 10
    while(ir!= vec2.end()){
      cout<<*ir<<" ";
      ir++;
    }

    //upper and lower bound for vectors
    sort(vec2.begin(),vec2.end());      //10 10 10 10 32 32 32 32 32 256
    vector<int>::iterator lower,upper;
    lower= lower_bound(vec2.begin(),vec2.end(),32);  
    upper= upper_bound(vec2.begin(),vec2.end(),32);
    cout << "\nlower_bound for 32 at position " << (lower- vec2.begin());     //pos 4
    cout << "\nupper_bound for 32 at position " << (upper - vec2.begin()) ;   //pos 9
    return 0;
}
