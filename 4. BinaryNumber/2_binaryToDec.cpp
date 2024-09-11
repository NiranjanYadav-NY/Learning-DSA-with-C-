#include <iostream>
using namespace std;

int BinToDec(int binNum){
    int ans = 0, pow = 1;

    while(binNum>0){
        int rem = binNum%10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans; 

}

int main(){

    cout << BinToDec (101) <<endl;

    return 0;
}