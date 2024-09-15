#include <iostream>
using namespace std;
int main(){
    // taking input from the user

    int size = 5;
    int marks[size];

    for(int i=0; i<size; i++){
        cin>>marks[i];
    }
    cout<<endl;

    // loop : 0 to size-1

    for(int i=0; i<size; i++){
        cout<<marks[i]<<" ";
    }

    return 0;
}