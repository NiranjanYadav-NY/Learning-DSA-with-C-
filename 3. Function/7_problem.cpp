// Calculate nCr binomial coefficient for n&r 
#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_nmr*fact_r);

}

int main(){
    int n=8, r=2;
    cout<<ncr(8, 2)<<endl;
}