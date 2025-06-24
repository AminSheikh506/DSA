#include <iostream>
using namespace std;

int main()
{

    // pattern 1 square pattern

    int n = 4;
    // for (int i = 0 ; i < n; i++)
    // {
    //    for (int j = 0; j < n; j++)
    //    {
    //     cout << j;
    //    }
    //    cout << endl;
    // }

    /* Another square pattern  123
                               456
                               789
                               */
    //  int num = 1;
    //  char a = 'A';
    //  for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n;j++){
    //         cout << a << " ";
    //         a++;
    //         num++;
    //     }
    //     cout << endl;
    //  }

    // Triangle problem

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Part 2 triangle
    // char c = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < (i+1);j++){
    //         cout << c << " ";
    //     }
    //     cout << endl;
    //     c++;
    // }

    // Part 3 triangle

    // for (int i = 0; i < n; i++) {
    //     for (int j = 1; j <= (i + 1);j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // Part4 Reverse Triangle

    // for(int i = 0; i< n; i++){
    //  for (int j = (i +1); j > 0; j--){
    //     cout << j;
    //  }
    //  cout << endl;
    // }

    // Floyd's triangle pattern

    // int num = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j< (i+1); j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // CHaracter version of floyd's triangle

    // char a = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < (i + 1); j++){
    //         cout<< a << " ";
    //         a++;
    //     }
    //     cout << endl;
    // }

    // inverted triangle pattern
    // for (int i = 0; i < n; i++){
    //     // spaces
    //     for (int j = 0; j < i; j++){
    //         cout << " ";
    //     }
    //     // numbers
    //     for (int j = 0; j < (n-i);j++){
    //         cout << (i+1);
    //     }
    //     cout << endl;
    // }

    // Pyramid Pattern

    // for (int i = 0; i < n; i++){
    //     // spaces
    //     for (int j = 0; j < n-i-1; j++){
    //         cout << " ";
    //     }
    //     // num1
    //     for (int j = 1; j <= i+1; j++){
    //         cout << j;
    //     }
    //     // num2
    //     for (int j = i; j>0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }


// Hollow Diamond [Hard watch the video to learn again]

    // Top part
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";

        if (i != 0) {
            // spaces
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom part
    for (int i = 0; i < (n - 1); i++) {
        // spaces
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }

        cout << "*";

        if (i != n - 2) {
            // spaces
            for (int j = 0; j < 2 * (n-i) - 5; j++) {
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}