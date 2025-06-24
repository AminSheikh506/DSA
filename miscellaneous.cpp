#include <iostream>
using namespace std;

// Bitwise operators

int main(){
    int a = 4, b = 8;
    cout << (a & b) << endl; // returns 0 in decimal AND
    cout << (a | b) << endl; // returns 12 in decimal OR
    cout << (a ^ b) << endl; // returns 12 in decimal XOR
    cout << ~(a) << endl; // returns -5 in decimal NOT (2's complement)
    cout << ( 4 << 1) << endl; // returns 8 in decimal(left shift operator)
    cout << ( 10 << 2) << endl; // same 

    cout << ( 10 >> 1) << endl; // returns 5 in decimal(right shift operator)
    cout << ( 8 >> 2) << endl; // same returns 2
    
    /// Data Modifiers ///
    cout << sizeof(int) <<endl;
    cout << sizeof(long int) << endl;
    return 0;
}