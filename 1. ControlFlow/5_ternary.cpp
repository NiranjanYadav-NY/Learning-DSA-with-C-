#include <iostream>
using namespace std;
int main(){

    // if we had to use "if and else" loop which basically
    // ends in 2-4 lines, we use ternary statenment

    // condition ? str1:str2;
    int n;
    cin>>n;
    cout<<(n>=0 ? "positive":"negative")<<endl;

    return 0;
}