//stable sorting algorithm

#include<iostream>
using namespace std;

int main(){

    //ascending
    int arr1[9]={29,72,98,13,87,66,52,51,36};
    int n=9;

    for(int i=1;i<n;i++){
        int temp=arr1[i];
        int j=i-1;
        while(j>=0 && arr1[j]>temp){
                arr1[j+1]=arr1[j];
                j--;
        }
        arr1[j+1]=temp;
    }

   for (int i = 0; i < n; i++)
   {
        cout<<arr1[i]<<" "; //13 29 36 51 52 66 72 87 98 
   }

   cout<<endl;

   //descending
   int arr2[9]={29,72,98,13,87,66,52,51,36};
   n=9;

    for(int i=1;i<n;i++){
        int temp=arr2[i];
        int j=i-1;
        while(j>=0 && arr2[j]<temp){
                arr2[j+1]=arr2[j];
                j--;
        }
        arr2[j+1]=temp;
    }

   for (int i = 0; i < n; i++)
   {
        cout<<arr2[i]<<" "; //98 87 72 66 52 51 36 29 13 
   }     
}

