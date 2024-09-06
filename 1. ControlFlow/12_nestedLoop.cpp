#include <iostream>
using namespace std;
int main(){
    // nested loops : loops inside loop

    for(int i =1; i<=5; i++){
        int m= 5;
        for(int i=1;i<=m;i++){
            cout<<"*"<<endl;
        }
        cout<< endl;
    }
    return 0;
}