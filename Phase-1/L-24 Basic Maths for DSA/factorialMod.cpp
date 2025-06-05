#include<iostream>
using namespace std;

int main() {
    int n = 212;
    int m = 1e9 + 7;

    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % m;
    }

    cout << fact;
}

