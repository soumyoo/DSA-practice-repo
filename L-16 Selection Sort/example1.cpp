//unstabel sorting algorithm

#include<iostream>
using namespace std;

int main(){

    //ascending
    int arr1[9]={29,72,98,13,87,66,52,51,36};
    int n=9;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         if(arr1[i]>arr1[j]){
            swap(arr1[i],arr1[j]);
         }
      }
   }
   for (int i = 0; i < n; i++)
   {
        cout<<arr1[i]<<" "; //13 29 36 51 52 66 72 87 98 
   }

   cout<<endl;

   //descending
   int arr2[9]={29,72,98,13,87,66,52,51,36};
   n=9;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         if(arr2[i]<arr2[j]){
            swap(arr2[i],arr2[j]);
         }
      }
   }
   for (int i = 0; i < n; i++)
   {
        cout<<arr2[i]<<" "; //98 87 72 66 52 51 36 29 13 
   }     
}


