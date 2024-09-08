#include <iostream>
using namespace std;
int main(){
    // iniverted triangle pattern

    int n=4;
    int num =1;
    for(int i=0; i<n; i++){
        // spaces 
        for(int j=0; j<i; j++){ // backwards => i+1
        cout<< " ";
        }
        //nums
        for(int j=0; j<n-i; j++){
            cout<< (i+1)    ;
        }
    cout<<endl;
    }

    return 0;
}