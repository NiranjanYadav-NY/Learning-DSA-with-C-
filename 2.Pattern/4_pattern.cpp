#include <iostream>
using namespace std;
int main(){
    //square character problem

    int n=3;
    char ch = 'A';
    for(int i=0;i<n;i++){
    //    char ch = 'A';
        for(int j=0;j<n;j++){
            cout << ch << " ";
            ch++;
        }
    cout<<endl;
    }
    return 0;
}