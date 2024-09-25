#include <bits/stdc++.h>
using namespace std;
int main() {

    int** ptr;
    cout<<&ptr<<endl; // gives garbage random value

    cout<<endl;

    int** ptr2 = NULL;
    cout<<ptr2<<endl; // dereference is not possible

    


    return 0;
}