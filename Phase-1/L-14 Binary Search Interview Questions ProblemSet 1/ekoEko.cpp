#include<iostream>
#include<algorithm>
using namespace std;

bool(isPossible(int arr[],int N, int M, int mid)){
    int ChopedLen=0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i]>mid)
        {
            ChopedLen=ChopedLen+(arr[i]-mid);
        }
    }

    if (ChopedLen >= M)
    {
        return true;
    }else{
        return false;
    }
    
    
}

int main(){
    int N;
    int M;
    cin>>N;
    cin>>M;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + N);
    
    int s=0;
    int e=arr[N-1];
    int H=0;

    while (s<=e)
    {
        int mid=s+((e-s)/2);
        if (isPossible(arr,N,M,mid))
        {
           H=mid;
           s=mid+1;
        }else{
            e=mid-1;
        }
    }

    cout<<H;

    return 0;
}