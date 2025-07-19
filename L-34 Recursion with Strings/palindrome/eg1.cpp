#include<iostream>
using namespace std;

bool isPalindrome(string &str,int i){
    int n=str.size();
    if(i>n-i-1) return true;
    if (str[i]!=str[n-i-1])
    {
        return false;
    }
    return isPalindrome(str,i+1);
}

int main(){

    string str="ertgs";
    if (isPalindrome(str,0))
    {
        cout<<"is a Palindrome"<<endl;
    }
    else
    {
        cout<<"not a Palindrome"<<endl;
    }
    

}