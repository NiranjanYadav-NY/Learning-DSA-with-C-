#include <iostream>
using namespace std;
int main(){

    // square pattern using character
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
            cout << ch <<" " ;
            ch = ch + 1;
        }
        cout<<endl;
    }

    return 0;
}