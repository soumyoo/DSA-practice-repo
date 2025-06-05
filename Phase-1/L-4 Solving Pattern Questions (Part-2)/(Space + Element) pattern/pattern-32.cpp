#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int num1 = 1;
        while (num1 <= (n - row + 1)) {
            cout << num1;
            num1++;
        }

        int star = 1;
        while (star <= (2 * (row - 1))) {
            cout << "*";
            star++;
        }

        int num2 = n - row + 1;
        while (num2) {
            cout << num2;
            num2--;
        }

        cout << endl;
        row++;
    }

    return 0;
}

// 8
// 1234567887654321
// 1234567**7654321
// 123456****654321
// 12345******54321
// 1234********4321
// 123**********321
// 12************21
// 1**************1
