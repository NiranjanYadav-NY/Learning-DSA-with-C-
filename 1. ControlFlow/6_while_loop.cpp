#include <iostream>
using namespace std;
int main(){

    // while loop - print 1 to n
    
    int count = 1;
    int n;
    cin>>n;

    while (count <= n) {
        cout<<count<<" ";
        count++;
    }

    return 0;
}