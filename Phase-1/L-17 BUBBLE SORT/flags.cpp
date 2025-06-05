//stable sorting algorithm

#include<iostream>
using namespace std;

int main(){

    //ascending
    int arr1[9]={29,72,98,13,87,66,52,51,36};
    int n=9;

   for (int i = 1; i < n; i++)
   {
        bool noSwapped = true;
        for (int j = 0; j < n-i; j++)
        {
            if (arr1[j]>arr1[j+1])
            {
                swap(arr1[j],arr1[j+1]);
                noSwapped = false;
            }
        }

        if (noSwapped) {
            break;
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

   for (int i = 1; i < n; i++)
   {
        bool noSwapped = true;
        for (int j = 0; j < n-i; j++)
        {
            if (arr2[j]<arr2[j+1])
            {
                swap(arr2[j],arr2[j+1]);
                noSwapped = false;
            }
        }

        if (noSwapped) {
            break;
        }
   }

   for (int i = 0; i < n; i++)
   {
        cout<<arr2[i]<<" "; //98 87 72 66 52 51 36 29 13 
   }     
}