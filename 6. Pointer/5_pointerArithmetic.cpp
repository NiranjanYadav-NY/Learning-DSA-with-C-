#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[] = {1,2,3,4,5};
    
    // increment/decrement
    int a = 10;
    int* ptr = &a;

    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl; // hexadecimal changes -> +4 bytes

    cout<<endl;

    //add/substract
     int b = 10;
    int* ptr2 = &a;

    cout<<ptr2<<endl;
    ptr2 = ptr2 + 2; // 2 int -> 8byte 
    cout<<ptr2<<endl; //+8

    cout<<endl;
    
    //compare

    int* ptrA;
    int* ptrB;

    cout<< (ptrA < ptrB) <<endl;

    return 0;
}