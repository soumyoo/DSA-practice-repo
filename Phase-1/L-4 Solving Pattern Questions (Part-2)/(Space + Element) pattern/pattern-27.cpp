#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space=1;
        while (space<=(n-row))
        {
            cout<<" ";
            space++;
        }
        
        int num=1;
        while (num<=row)
        {
            cout<<row;
            num++;
        }
        cout<<endl;

        row++;
        
    }
    
    return 0;
}

// 5
//     1
//    22
//   333
//  4444
// 55555