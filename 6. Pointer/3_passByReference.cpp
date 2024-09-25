#include <bits/stdc++.h>
using namespace std;


void changeA(int* ptr){ // pass by reference using pointers
    *ptr = 30;
}

void changeB(int &c){ // pass by reference using alias
    c = 50;
}

int  main(){

    int a = 10;

    changeA(&a);
    cout<<"inside main function : "<<a<<endl;

    int c = 20;

    changeB(c);
    cout<<"inside main function : "<<c<<endl;

    return 0;
}