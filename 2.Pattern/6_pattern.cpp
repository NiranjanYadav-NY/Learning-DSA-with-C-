#include <iostream>
using namespace std;
int main(){

    // TRIANGLE PPATTERN PRINT 

    int n=3;
    int num =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}