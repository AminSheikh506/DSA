#include<iostream>
#include<vector> // IMPORTANT / NEEDS TO INCLUDED
using namespace std;

void Reverse(vector <int>& vec, int size){
    int start = 0, end = size -1;
    while (start <= end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}

int veclinearsearc(vector <int> vec, int target){
        //Linear search on vector
        for(int i = 0; i < vec.size(); i++){
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    vector <char> alphas = {'a','b','c','d','e'}; // 0 size vector
    // initialized vector
    vector <int> nums1 = {1,2,3,8,22,66,0,23};
    // cout << nums1[0]<<endl;
    // cout << nums1[1]<<endl;
    // cout << nums1[2]<<endl;
    vector <int> vec;
    //using the for each loop to print the vector
    /*for(char val : alphas){
        cout << val << endl;
    }
    */
   //Vector functions/methods

    cout << "The size of vec is= " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "The size of the vec now is = " << vec.size() << endl;
    for ( int val: vec){
        cout << val << endl;
    }
    vec.pop_back();
    cout << "This is the element at the front = " <<vec.front() << endl;
    cout << "This is the element at the back = " <<vec.back() << endl;

    cout << vec.at(1) << endl;

    Reverse(nums1,3);
    for(int val: nums1){
        cout << val << endl;
    }

    cout << veclinearsearc(nums1,22)<< endl;
    return 0;
}