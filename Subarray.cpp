#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int n = 5;
    // int arr[5] ={1,2,3,4,5};

    // To print the subarrays
    // for(int st = 0; st < n; st++){ //The starting point
    //     for(int end = st; end < n; end++){ // The ending point
    //         for(int i = st; i <= end; i++){ // To print the array,starts from st and ends at end
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    
    // Brute force way to print the Max Subarry
    int arr1[] ={3,-4,5,4,-1,7,-8}; 
    int n = 7;   
    /* int maxsum = INT_MIN;
    for(int st = 0; st < n; st++){
        int currentsum = 0; // counter for current sum
        for(int end = st; end < n; end++ ){
            currentsum += arr1[end];
            maxsum = max(currentsum,maxsum);
        }
    }
    cout << maxsum << endl; */
    //Most optimised way -> Kadane's Algorithm
    int currsum = 0, maxsum = INT_MIN;
    for(int i = 0;i < n; i++){
        currsum += arr1[i];
        maxsum = max(currsum,maxsum);
        if (currsum < 0)
        {
            currsum = 0;    
        }
    }
    cout << "The most efficient way to find the max subarry = " << maxsum<< endl;
    return 0;
}