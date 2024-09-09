// calculate sum of numbers 1 to N

#include <iostream>
using namespace std;

double Nsum(double a){

    double sum =0;
    for(double i=1; i<=a; i++){
       sum += i;
    }

    return sum;

}

int main(){

    cout<< Nsum(3) << endl;
    cout<< Nsum(6) << endl;

    return 0;
}