#include<iostream>
using namespace std;
int main(){
    // PROBLEM : Find the sum of all the odd nos. from 1 to n

    cout<<"sum of all the odd numbers from 1 to ";
    int n;
    cin>>n;
    int oddsum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 !=0){
            oddsum += i;
        }
    }
    cout<<oddsum<<endl;
    return 0;
}