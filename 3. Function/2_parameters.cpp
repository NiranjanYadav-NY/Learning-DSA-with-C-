#include <iostream>
using namespace std;

//  sum for 2 numbers

int sum(int a, int b){
    int s = a+b;
    return s;
}

// min of 2 nmbers

int min(int a, int b){ // int a, int b are known as parameters
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    cout<<sum(10,5)<<endl; // digits here 10,5 are called arguments
    cout<<min(15,3)<<endl; // digits here 15,3 are called arguments
    return 0;
}