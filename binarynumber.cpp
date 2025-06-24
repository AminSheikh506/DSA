#include <iostream>
using namespace std;

int decToBin( int decNum) {
    int ans = 0; // main answer
    int pow = 1; // power of 10, this is the 10th place, 1st place, 100th place,etc

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum /2;

        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int BinTodec (int binNum){
    int ans = 0, pow = 1;
    while (binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;

    }
    return ans;
}

int main() {
    int decNum = 197;
    cout << decToBin(decNum) << endl;

    int binNum = 11000101;
    cout << BinTodec(binNum) << endl;
    return 0;
}