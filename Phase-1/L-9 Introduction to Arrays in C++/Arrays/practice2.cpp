#include<iostream>
using namespace std;

void printChArray(char arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
}

void printInArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
}

void printBlArray(bool arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    char chArray[5]={100,'b','c'};
    int size=sizeof(chArray)/sizeof(chArray[0]);
    printChArray(chArray,size); //d b c

    int inArray[5]={5,'b',9};
    size=sizeof(inArray)/sizeof(inArray[0]);
    printInArray(inArray,size); //5 98 9 0 0

    bool blArray[5]={0,7,1};
    size=sizeof(blArray)/sizeof(blArray[0]);
    printBlArray(blArray,size); //0 1 1 0 0

}