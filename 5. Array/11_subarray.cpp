#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT32_MIN;

    for(int st=0; st<n; st++){
        int currentSum=0;
        for(int end=st; end<n; end++){
            currentSum+=arr[end];
            maxSum = max(currentSum, maxSum);
       
        }
    }

    cout<<maxSum<<endl;
    return 0;
}