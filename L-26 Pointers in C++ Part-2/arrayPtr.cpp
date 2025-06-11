#include<iostream>
using namespace std;

int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<arr<<endl;//0x61fee8
    cout<<&arr<<endl;//0x61fee8
    cout<<&arr[0]<<endl;//0x61fee8
    cout<<&arr[1]<<endl;//0x61feec
    cout<<*arr<<endl;//0
    cout<<arr[0]<<endl;//0
    cout<<arr[1]<<endl;//1
    cout<<*(arr+1)<<endl;//1 //index 1 value //adding 4 byte to address of arr[0]

    int brr[]={1,2,3};
    cout<<sizeof(brr)<<endl;//12
    int *n=&brr[0];
    cout<<*n<<endl;//1
    cout<<brr<<endl;//0x61fed4
    cout<<*brr<<endl;//1
    cout<<&brr<<endl;//0x61fed4
    cout<<*&brr<<endl;//0x61fed4
    cout<<&brr[0]<<endl;//0x61fed4
    cout<<*&brr[0]<<endl;//1

    //arr[i]=i[arr]
    cout<<arr[3]<<endl;//3  //arr[i]=*(arr+i)
    cout<<3[arr]<<endl;//3  //i[arr]=*(i+arr)

    int *p=&arr[0];
    cout<<*p<<endl;//0
    cout<<*(p+2)<<endl;//2
    cout<<*(p+9)<<endl;//9
    p=p+1;
    cout<<*p<<endl; //1



    return 0;
}