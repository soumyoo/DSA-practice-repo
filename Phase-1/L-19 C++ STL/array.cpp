#include<iostream>
#include<array>
using namespace std;

int main(){

    // int b[3]={1,2,3};

    array<int,4> a={1,2,3,4};

    int asize=a.size();

    for (int i = 0; i < asize; i++)
    {
        cout<<a[i]<<endl;
    }
    
    cout<<"element at 2nd index "<<a.at(2)<<endl;

    cout<<"array emty or not "<<a.empty()<<endl;

    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    
}