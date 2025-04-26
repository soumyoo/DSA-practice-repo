#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space=1;
       while (space<=(row-1))
       {
        cout<<" ";
        space++;
       }

       int number=1;
       while (number<=(n-row+1))
       {
        cout<<row;
        number++;
       }
       cout<<endl;
       row++; 
    }
    return 0;
}

// 5
// 11111
//  2222
//   333
//    44
//     5