#include <iostream>
using namespace std;

// function definition or say to create a function
void printHello(){
    cout<<"hello ji hello";
} // here void is used since we dont get any return or it can be used in other way too

int printBye(){
    cout<<"Bye bro!";
    return 2;
}

int main(){

    //function call / invoke
    printHello();
    cout<<endl;
    printHello();
    cout<<endl;
    printBye();
    cout<<endl;
    cout<<printBye()<<endl; // 2 is also there cuz, its the return value
    return 0;
}