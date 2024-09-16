#include <iostream>
#include <vector>
using namespace std;
int main(){

    // PROBLEM : Print the unique number from given ->

    vector<int> num = {4,1,2,1,2};
    int ans = 0;

    for(int val : num){
        ans^=val;
    }
    cout<<ans;

    return 0;
}