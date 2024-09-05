#include <iostream>
using namespace std;
int main(){
 
    int n=45;

    if(n>=0){
        cout<<"n is positive"<<endl;
    }
    else{
        cout<<"n is negative"<<endl;
    }

    // example -> for voting:

    cout <<"lets see who is allowed to vote"<<endl;

    int m;
    cout<<"enter your age : ";
    cin>>m;

    if(m<18){
        cout<<"you are not eligible for voting yet"<<endl;
    }
    else{
        cout<<"you arr eligible for voting"<<endl;
    }

    

    return 0;
}