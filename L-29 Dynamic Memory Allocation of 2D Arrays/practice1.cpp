#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int *brr=new int[n];
    // delete[] brr;

    int m,n;
    cout<<"Enter m and n ";
    cin>>m>>n;
    int ** arr=new int*[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete [] arr;    
}