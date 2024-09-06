#include <iostream>
using namespace std;
int main(){
    // PROBLEM : find the sum of numbers from 1 to n

    cout<<"THE SUM OF NUMBERS FROM 1 TO ";
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum;


    // we can also use "break" to get out of the loop
    
    return 0;
}