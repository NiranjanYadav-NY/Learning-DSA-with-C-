#include <iostream>
using namespace std;
int main(){

    // PROBLEM : verify whether the given number is a prime number

   
    int n;
    cin>>n;
    bool isPrime = true;

    for(int i=2; i<= n-1; i++){
        if(n%i==0){ // non prime no.
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<" PRIME "<<endl;
    }
    else{
        cout<<"NOT PRIME"<<endl;
    }

    // isPrime -> true -> prime
    //isPrime -> false -> not prime

return 0;
}