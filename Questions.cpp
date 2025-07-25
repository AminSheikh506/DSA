#include<iostream>
#include<vector>
using namespace std;

vector <int> Pairsum(vector <int> nums, int target){
    vector <int> ans; 
    //Pair sum problem , Brute force way
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j <nums.size();j++) {
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans; 

            }
        }
        
    }
    return ans; 

}
// Most optemised way
vector <int> OptemizedPairsum(vector <int> nums, int target){
    vector <int> ans;
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if(pairsum > target){
            j--;
        } 
        else if(pairsum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans; // empty if no pair found, still needs to return something
} 

// Majority element brute force
vector <int> MajorElement(vector <int> vec){
    for(int val: vec) {
        int freq = 0;
        for ( int el: vec){
            if ( el == val){
                freq++;
            }
        }
        if (freq > vec.size()/2){
            return {val}; // curly brackets to return as a vector not an int
        }
     }
     return {-1};
}
// Majority element sorting way optimised
vector <int> SortMajorityEl(vector <int> array){
    // sorting
    sort(array.begin(),array.end());
    //freq count
    int freq = 1,  ans = array[0];
    for(int i = 0; i < array.size(); i++){
        if(array[i] == array[i-1]){
            freq++;
        }else{
            freq = 1, ans = array[i];
        }
        if(freq > array.size()/2){
            return {ans};
        }
    }
    return {ans};
}

//Moore's voting algo, Most optimised
vector <int> MooreMajorityEl(vector <int> array){
    int freq = 0, ans = 0;
    for(int i = 0; i < array.size(); i++){
        if(freq == 0){
            ans = array[i];
        }if (ans == array[i]){
            freq++;
        }else {
            freq--;
        }
    }
    return {ans};
}
//Product of Array except self 
vector <int> ProOfArray (vector <int> &nums1){
    int n = nums1.size();
    vector <int> ansP(n,1);
    //brute force
    // for (int i = 0; i < n;i++){
    //     int prod = 1;
    //     for (int j = 0; j < n; j++)
    //     {
    //        if (i != j)
    //        {
    //         prod *= nums1[j];
    //        }
   
           
    //     }
    //             ansP [i] = prod;
    // }
   
    // return ansP;

    //optimal
    //prefix 
    for(int i = 1;i < n; i++){
        ansP[i] = ansP[i-1] * nums1[i-1];
    }
    //suffix
    int suffix = 1; //initializer
    for (int j = n-2; j >= 0 ; j--)
    {
        suffix *= nums1[j+1];
        ansP[j] *= suffix;
    }
    return ansP;
    
}

int main(){
    vector <int> nums = {2,7,11,15};
    int target = 9;

    vector <int> ans = OptemizedPairsum(nums,target);
    cout << ans[0]<< "," << ans[1]<< endl;

    vector <int> vec = {1,2,2,1,1,1};
    vector <int> ans2 = MajorElement(vec);
    vector <int> ans3 = SortMajorityEl(vec);
    vector <int> ans4 = MooreMajorityEl(vec);
    cout << "The majority element is : " << ans2[0 ] << endl; 
    cout << "The majority element is : " << ans3[0 ] << endl; 
    cout << "The majority element is : " << ans4[0 ] << endl; 

    vector <int> nums1 = {1,2,3,4};
    vector <int> ansP = ProOfArray(nums1);
    for(int val: ansP){
        cout << val << " ";
    }
    return 0;
}