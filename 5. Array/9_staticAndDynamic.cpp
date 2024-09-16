#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> vec;

    vec.push_back(20);
    vec.push_back(21);
    vec.push_back(22);

    cout<<vec.size()<<endl; //3
    cout<<vec.capacity()<<endl; //4

    vec.push_back(3);
    vec.push_back(32);
    vec.push_back(35);

    cout<<vec.size()<<endl; //6
    cout<<vec.capacity()<<endl; //4->8

    return 0 ;
}