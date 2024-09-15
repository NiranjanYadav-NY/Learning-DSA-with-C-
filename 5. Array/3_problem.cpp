#include <bits/stdc++.h>
using namespace std;
int main(){

    // PROBLEM: Find the Smallest/Largest in Array

    int nums[] = {12, 15, 17, -51, -18, 5};
    int size = 6; 

    int INT_MIN;   
    int smallest = INT_MAX;
    int largest = INT_MIN;


    /* 
    for(int i=0; i<size ; i++){
        if(nums[i]<smallest){
        smallest = nums[i]; 
       }
    }
    cout<<"smallest : "<<smallest <<endl; 
    */
     
    // another way to get the smallest and largest
    // min, max - returns with minimum and maximum

    for(int i=0; i<size; i++){
        smallest = min(nums[i], smallest);            
        largest = max(nums[i], largest);
    }
    cout<<"smallest : "<<smallest <<endl ;
    cout<<"largest : "<<largest<<endl; 
   
    return 0;
}