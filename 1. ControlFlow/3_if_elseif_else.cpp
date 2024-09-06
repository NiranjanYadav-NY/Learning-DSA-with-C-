#include<iostream>
using namespace std;
int main(){

// using if, elseif and else in code -

    cout<<"Give a number upto 100 to check its grade: ";
    int num;
    cin>>num;

if(num>=90){
cout<<"Grade : A\n";
}

else if(num>=80 && num<90){
cout<<"Grade : B\n";
}

else{
cout<<"Grade : C\n";
}

return 0;
}