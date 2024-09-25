#include <bits/stdc++.h>
using namespace std;
int main() {

    int a = 10;
    int* ptr = &a;

    float b = 100.25;
    float* ptr2 = &b;

    cout<<&a<<endl;
    cout<<ptr<<endl;

    cout<<&b<<endl;
    cout<<ptr2<<endl;

    // POINTER TO POINTER

    int** parPtr = &ptr;
    cout<<&ptr<<endl;
    cout<<parPtr<<endl;

    // * -> dereference operator
    
    cout<<endl;

    cout<<*(&a)<<endl;
    cout<<*(&b)<<endl;
    cout<<*(ptr)<<endl;
    
    cout<<endl;
    cout<<*(parPtr)<<endl;  
    cout<<**(parPtr)<<endl;

    return 0;
}