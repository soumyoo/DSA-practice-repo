#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    char brr[5]={'a','b','c','d','e'}; // -->unsafe //no null operator

    char ch[6]="abcde"; // '\0' -->safe //string literall //'\0' is there in 5th index or 6th position

    cout<<sizeof(arr)<<endl; //20  --> 5*4 byte
    cout<<sizeof(brr)<<endl; //5
    cout<<sizeof(ch)<<endl; //6

    cout<<brr<<endl;//abcde
    cout<<ch<<endl;//abcde -> null operator in 6th place or 5th index
    cout<<ch+1<<endl;//bcde
    cout<<ch[5]<<endl;//'\0' -> null operator in 6th place or 5th index
    // cout<<brr[5]<<endl;

    char *c=&ch[0];
    cout<<c<<endl;//abcde
    cout<<*c<<endl;//a
     cout<<*(c+1)<<endl;//b
    cout<<&ch<<endl;//0x1de9bff7f5
    cout<<*&ch<<endl;//abcde
    cout<<&ch[0]<<endl;//abcde
    cout<<*&ch[0]<<endl;//a
}












