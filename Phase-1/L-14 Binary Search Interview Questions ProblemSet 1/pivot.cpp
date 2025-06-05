#include<iostream>
#include <vector>
using namespace std;

int lowerPivot(vector <int> arr,int n){
    int start=0;
    int end=n-1;
    while (start<end)
    {
        int mid=start+((end-start)/2);
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }else
        {
            end=mid;
        }   
    }
    return start; 
}

int main(){

    vector<int> arr={5,6,7,8,9,10,1,2,3,4};

    cout<<lowerPivot(arr,10)<<endl;

    return 0;

}