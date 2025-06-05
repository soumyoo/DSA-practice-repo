#include<iostream>
using namespace std;

int main(){
    string str="ab10cd\095";
    char arr[6]={'a','b','\0','c','0      '};

    cout<<str<<endl;//ab10cd
    cout<<arr<<endl;//ab

    cout<<str.size()<<endl;//6

    int arrSize=sizeof(arr)/sizeof(arr[0]);
    cout<<arrSize<<endl;//6
}