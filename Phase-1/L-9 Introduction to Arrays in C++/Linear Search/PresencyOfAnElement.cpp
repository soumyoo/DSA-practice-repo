#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    bool isPresent=0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            isPresent=1;
            break;
        }
    }
    return isPresent;

}


int main(){

    int arr[10]={2,54,432,2,5654,2,21,1,45,31};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the vakue of key: ";
    cin>>key;
    bool isPresent = search(arr,size,key);
    if (isPresent)
    {
        cout<<"Yes, element "<<key<<" is present in array."<<endl;
    }else{
        cout<<"No, element "<<key<<" is not present in array."<<endl;
    }
    
    return 0;
}


//enter the vakue of key: 0
//No, element 0 is not present in array.

// enter the vakue of key: 1
// Yes, element 1 is present in array