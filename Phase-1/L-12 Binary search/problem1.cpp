#include<iostream>
using namespace std;

int biSearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    while (start<=end)
    {
        //int mid=(start+end)/2;

        int mid=start+((end-start)/2);

        if (arr[mid]==key)
        {
            return mid;
        }else if (arr[mid]<key)
        {
            start=mid+1;
        }else
        {
            end=mid-1;
        }
    }

    return -1;

}

int main(){

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int oddArr[7]={5, 8, 9, 10, 1, 3, 4};

    //search for index-->(array,size,searchKey)

    cout<<biSearch(even,6,4)<<endl; //1
    cout<<biSearch(even,6,12)<<endl; //4
    cout<<biSearch(even,6,101)<<endl; //-1

    cout<<biSearch(odd,5,3)<<endl; //0
    cout<<biSearch(odd,5,16)<<endl; //4
    cout<<biSearch(odd,5,101)<<endl; //-1

    cout<<biSearch(oddArr,7,4)<<endl;


    return 0;
}