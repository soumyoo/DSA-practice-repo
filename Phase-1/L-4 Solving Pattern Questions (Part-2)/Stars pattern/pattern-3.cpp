#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n*n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j+i-1<<" ";
            j++;
        }
        cout<<endl;
        i=i+n;
        
    }

    return 0;
}

// 5
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 