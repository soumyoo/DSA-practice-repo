#include<iostream>
using namespace std;

void reverseStr(string &str,int i){
    int n=str.size();
    if(i>n-i-1) return;
    swap(str[i],str[n-i-1]);
    return reverseStr(str,i+1);
}

int main(){
    string str="abcde";
    reverseStr(str,0);
    cout<<str<<endl; //edcba
    return 0;
}