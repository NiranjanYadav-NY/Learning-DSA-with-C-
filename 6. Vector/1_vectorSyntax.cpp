#include <iostream>
#include <vector>
using namespace std;
int main(){ 

    vector<int> vec = {1,2,3};
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;

    vector<int> vecc(3,0);
    cout<<vecc[0]<<endl;
    cout<<vecc[1]<<endl;
    cout<<vecc[2]<<endl;

    //for each loop - generally used in vectors
    vector<char> val = {'a', 'e', 'i', 'o', 'u'};
    for(char i : val){
        cout<< i <<endl;
    }

    return 0;
}