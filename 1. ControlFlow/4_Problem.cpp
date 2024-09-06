#include <iostream>
using namespace std;
int main(){

    // PROBLEM : Find if the character is uppercase or lowercase

    char ch;
    cout << "ENTER CHARACTER : ";
    cin>>ch;

    if(ch >= 'a' && ch<= 'z'){
    cout<<"lowercase"<<endl;

    }
    else {
    cout <<"uppercase"<<endl;
    }
    
    return 0;
}
