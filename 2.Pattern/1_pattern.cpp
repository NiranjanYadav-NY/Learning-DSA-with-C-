#include <iostream>
using namespace std;
int main(){
    // square pattern

    int n=7; 

    for (int i=1; i <= n; i++){ // outer loop
        for(int j=1; j<=n; j++){// inner loop
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout << endl;

    int m=7;

    for(int k=1; k<=m; k++){
        for(int l=1; l<=m; l++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}