#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]==target)
            {
                return true;
            }   
        }
    }
    return false;
}

int main(){
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }  
    }
    for (int i = 0; i < 3; i++)
    {;
        for (int j = 0; j < 4 ;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Enter the target to search: ";
    int target;
    cin>>target;
    cout<<"Present or not?: "<<(bool)isPresent(arr,target,3,4)<<endl;
}

// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 

// Enter the target to search: 12
// Present or not?: 1




// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12

// Enter the target to search: 0
// Present or not?: 0