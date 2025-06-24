#include <iostream>
using namespace std;
// sum of 2 numbers
int sum(int a, int b){
    int s = a + b;
    return s;
}


// min of 2 numbers
int min(int a, int b){// Parameters -> placeholders for values to be passed in
    if (a < b)
    {
        return a;
    } else {
        return b;
    }
   
}
// sum of n nums
 int sumN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
 }

// n!
int factn(int n){
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
       fact *= i;
    }
    return fact;
}
// sum of digits

int sumofdigits(int num){
    int digitsum =0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        num = num/10;
        digitsum += lastdigit;
    }
    return digitsum;
}

int nCr (int n, int r){
    int fact_n = factn(n);
    int factr = factn(r);
    int factnmr = factn(n-r);

    return fact_n/(factr * factnmr);
}

int main(){
    
    cout << sum(10,780)<< endl;
    cout << min(232312,123123)<< endl; // arguments -> actual values passed in

    cout<< sumN(99)<< endl;
    cout << factn(5)<< endl;

    cout << "The sum of all the digits in the num: " << sumofdigits(1232332) << endl;
    int n = 8, r =2;

    cout << nCr(8,2) << endl;

    return 0;
}