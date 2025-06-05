#include<iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main(){
    char name[20];

    cin>>name;//soumyo
    cin>>name;//sagar
    cout<<name<<endl;//sagar //the previous string gets totally replaced
    cout<<getLength(name);//5 //size of string "sagar"
    
}