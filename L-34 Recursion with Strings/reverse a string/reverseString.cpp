#include<iostream>
using namespace std;

void reverseStr(string &str,int i,int j){
    if (i>j)
    {
        return ;
    }
    swap(str[i],str[j]);
    reverseStr(str,i+1,j-1);
}

int main(){
    string str="abcde";
    reverseStr(str,0,str.size()-1);
    cout<<str<<endl;
    return 0;
}