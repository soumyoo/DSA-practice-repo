#include<iostream>
#include<climits>
using namespace std;

void printRowSum(int arr[][4],int row,int col){
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        cout<<"sum of the elements in row "<<i<<" is "<<sum<<endl;
    }
}

void largestRowSum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        if (sum>maxi)
        {
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"largest row sum is "<<maxi<<" at row "<<rowIndex<<endl;
}

void printColSum(int arr[][4],int row,int col){
    for (int i = 0; i < col; i++)
    {
        int sum=0;
        for (int j = 0; j < row; j++)
        {
            sum+=arr[j][i];
        }
        cout<<"sum of the elements in col "<<i<<" is "<<sum<<endl;
    }
    
}

void largestColSum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    int colIndex=-1;
    for (int i = 0; i < col; i++)
    {
        int sum=0;
        for (int j = 0; j < row; j++)
        {
            sum+=arr[j][i];
        }
       if (sum>maxi)
       {
            maxi=sum;
            colIndex=i;
       }
       
    }
    cout<<"largest col sum is "<<maxi<<" at col "<<colIndex<<endl;
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
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {;
        for (int j = 0; j < 4 ;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    printRowSum(arr,3,4);
    largestRowSum(arr,3,4);
    cout<<endl;
    printColSum(arr,3,4);
    largestColSum(arr,3,4);
}

// 1 2 3 4 5 6 7 8 9 10 11 12

// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 

// sum of the elements in row 0 is 10
// sum of the elements in row 1 is 26
// sum of the elements in row 2 is 42
// largest row sum is 42 at row 2

// sum of the elements in col 0 is 15
// sum of the elements in col 1 is 18
// sum of the elements in col 2 is 21
// sum of the elements in col 3 is 24
// largest col sum is 24 at col 3

