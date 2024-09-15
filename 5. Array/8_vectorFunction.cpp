#include <iostream>
#include <vector>
using namespace std;
int main(){

    //size
    vector<char> vec = {'a', 'e', 'i', 'o', 'u'};
    cout<<"size = "<<vec.size()<<endl;

    //push_back - pushes an element at last
    vector<int> vect; //size is 0 for now-
    vect.push_back(2);
    vect.push_back(25);
    vect.push_back(21);
    cout<<"AFTER PUSH BACK : " << vect.size() << endl;

    for(int val:vect){
        cout<<val<<" ";
    }
    cout<<endl; 

    // pop_back - removes one element from the last index

    vect.pop_back();
    cout<<"AFTER POP BACK : "<< vect.size()<<endl;
   
    for(int val:vect){
        cout<<val<<" ";
    }
    cout<<endl; 

    //front - prints the value at index = 0 of vector 
    cout<<"FRONT : "<< vect.front() <<endl;

    // back - print the last value of vector
    cout<<"BACK : "<< vect.back() <<endl;
    
    // at - accessing a value at a particular index
    vector<int> v = {1, 2, 3, 4, 5};
    cout<<"AT - idx0 : "<< v.at(0)<<endl;
    cout<<"AT - idx1 : "<< v.at(1)<<endl;
    cout<<"AT - idx2 : "<< v.at(2)<<endl;
    cout<<"AT - idx3 : "<< v.at(3)<<endl;
    
    
    
    
    return 0;
}