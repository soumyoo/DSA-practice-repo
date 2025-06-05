#include<iostream>
using namespace std;

int main(){
    int arr[3][4];

    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; //will take input row wise by default;
    //row wise input
    for (int i = 0; i < 3; i++)
    {;
        for (int j = 0; j < 4 ;j++)
        {
           cin>>arr[i][j];
        }
        
    }

    cout<<endl;

    for (int i = 0; i < 3; i++)
    {;
        for (int j = 0; j < 4 ;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}

// 1 2 3 4 5 6 7 8 9 10 11 12

// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 