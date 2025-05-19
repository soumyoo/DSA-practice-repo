
//array's do reference assigning
//address is passed to the funtion 

#include<iostream>
using namespace std;


void updateArray(int array[],int n){
    cout<<"going inside the update function"<<endl;
    array[0]=130;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"coming outside of update fuction"<<endl;
}


int main(){
    int arr[3]={4,5,6};
    updateArray(arr,3);
    cout<<"Now inside the main"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


// going inside the update function
// 130 5 6 
// coming outside of update fuction
// Now inside the main
// 130 5 6 