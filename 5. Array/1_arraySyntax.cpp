#include <iostream>
using namespace std;
int main(){

    int marks[5] = {97, 82, 34, 90, 78};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[3]<<endl;
    
    // 0 to size-1
    cout<<marks[5]<<endl;
    
    //size - 
    cout<<sizeof(marks)<<endl; //20
    
    //length - 
    cout<<sizeof(marks)/4 <<endl; //5
    
    return 0;
}