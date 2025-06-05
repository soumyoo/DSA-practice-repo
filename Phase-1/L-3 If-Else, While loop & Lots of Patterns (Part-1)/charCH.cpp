#include <iostream>
using namespace std;

int main() {
   
    char ch;
    cin>>ch;

    if (ch>='a'&& ch<='z')
    {
        cout<<"lower case"<<endl;
    }
    else if (ch>='A'&& ch<='Z')
    {
        cout<<"upper case"<<endl;
    }
    else if (ch>='0'&& ch<='9')
    {
        cout<<"number"<<endl;
    }
    

    






    return 0;
}