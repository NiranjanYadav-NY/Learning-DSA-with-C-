#include <iostream>
using namespace std;
int main(){
    // bitwise &(AND) 
    int a=4, b=8, c=3, d=7;
    cout<<(a&b)<<endl; // 0

    // bitwise |(OR)
    cout<< (a|b) << endl; //12

    // bitwise ^(XOR)-> exclusive or
    cout<< (a^b) <<endl; // 12
    cout<< (c^d) <<endl; // 4 

    // bitwise << (LEFT SHIFT)
    cout<<(4<<1)<<endl; // 8
    cout<<(10<<2)<<endl; // 40

    // bitwise >> (RIGHT SHIFT)
    cout<<(10>>1)<<endl; //5
    cout<<(8>>2)<<endl; // 2
    return 0;
}