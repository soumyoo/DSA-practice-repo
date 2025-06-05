#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int increament=1;

    int i=1;
    while (i<=n)
    {
        int space=1;
        while (space<=(n-i))
        {
          cout<<" ";
          space++;
        }
        
        int num=1;
        while (num<=i)
        {
            cout<<increament;
            increament++;
            num++;
        }
        cout<<endl;
        i++;
        
    }
    


    return 0;
}

// 4
//    1
//   23
//  456
// 78910