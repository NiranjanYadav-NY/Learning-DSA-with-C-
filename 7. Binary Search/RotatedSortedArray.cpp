#include <iostream>
using namespace std;
int main(){

    cout<<"hello"<<endl;

    int arr[] = {3,4,5,6,7,0,1,2};
    int tar = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;    
    int st=0, end = n-1;


    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]==tar) cout<<mid<<endl;
    
        //left sort
        if(arr[mid]<=arr[mid]){
            if(arr[st]<=tar && tar<=arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }

        //right sorted
        else{
            if(arr[mid] <= tar && tar <= arr[end]){
            st =mid+1;
            }
            else {
                end = mid -1;
            }
        }
    
    }
    return 0;
}