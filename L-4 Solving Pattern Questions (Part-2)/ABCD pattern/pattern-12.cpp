#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
 
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char ch='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }

    return 0;
}

// 5
// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E 