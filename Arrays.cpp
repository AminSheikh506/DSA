#include <iostream>
using namespace std;

//Reversing an array
void reverseArr(int arr[], int size){
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

//2nd question -WAF to calculate sum and product of all no in an array
void sumnproArray(int array[],int size){
     int sum = 0;
     int product = 1;
     for (int i = 0; i < size; i++)
     {
        sum += array[i];
        product *= array[i];
     }
     cout << "The sum is: " << sum << endl;
     cout << "The product is: " << product <<endl;
     return;
}
// 3rd question WAF to swap max and min value in an array
void swapmaxnmin(int array[],int size){
    int maxvalueIndex = 0;
    int minvalueIndex = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] > array[maxvalueIndex]) {
            maxvalueIndex = i;
        }
        if (array[i] < array[minvalueIndex]) {
            minvalueIndex = i;
        }
    }

    swap(array[maxvalueIndex],array[minvalueIndex]);
    //printing the array now
    for (int i = 0; i < size; i++)
    {
       cout << array[i] << " ";
    }
}

//WAF to print all the unique values in array (used gpt)
void unique(int array[], int size){
       for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << array[i] << " ";
        }
    }
    
}

//4print the intersection (used gpt)
void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    for (int i = 0; i < size1; i++) {
        // Avoid printing duplicates
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr1[k] == arr1[i]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted) continue;

        // Check if this element exists in arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}


int main(){

    //int size=5;
    //int marks[size];
    //double price[] = { 22.13, 121.00, 332.32,}; //no need of specifiying the size, this is also valid

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
  
    // To find the size of an array if not given,mostly given in another variable;
    // sizeof(array name)/sizeof(array type)

    // cout << sizeof(marks)/sizeof(int) << endl;
    
    // Loops on array
   /*
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
 
    for (int i = 0; i <size; i++)
    {
        cout << marks[i]<< endl;
    }

    */
   /*
   // Smallest array value

    int nums[6] = {5,15,22,1,-15,24};
    int size= 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            
        }
    //smallest = min(nums[i],smallest); // min function another way!
    largest = max(nums[i],largest);
    }
    
    cout << smallest << endl;
    cout << largest << endl;
    */

    // Reversing an Array
    // int arr[] = {4,2,7,8,1,2,5};
    // int sz = 7;

    // reverseArr(arr,7);
   
    //  for (int i = 0; i < sz; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //Array's hw
    // printing the index of the smallest value in an array

    // int arr[] = {5,622,-11,4,-3};
    // int size = 5;

    // int smallest = INT_MAX;
    // int counter = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //         counter = i;
    //     }
        
    // }
    // cout << counter << endl;

    int arr[] = {1,2,2,8,-5};
    int arr2[] = {1,2,44,242,1,55,-15};
    int sz = 5;
    int sz2 = 7;
     
    // sumnproArray(arr,sz);
    // swapmaxnmin(arr,sz);
    // unique(arr,sz);
    printIntersection(arr,5,arr2,7);
    return 0;
}