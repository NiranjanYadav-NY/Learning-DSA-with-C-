

#include <iostream>
using namespace std;

// Calculate N factorial
int fac(int a){

    int multiply=1;
    for(int i=1; i<=a; i++){
        multiply = (multiply * i);
    }
    return multiply;
}

int main (){
    cout<<fac(6)<<endl;
    return 0;
}