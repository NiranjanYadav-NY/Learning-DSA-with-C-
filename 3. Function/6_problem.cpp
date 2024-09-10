// calculate sum of digits of a number

#include <iostream>
using namespace std;

int Digit(int num){
    int Dsum = 0;

    while(num>0){
            int lastDigit = num % 10;
            num/= 10;
            Dsum += lastDigit;
    }
   return Dsum;
}
int main(){

   cout << Digit (145)<<endl;
    return 0;
}