#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char ch='A';
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
           cout<<ch<<" ";
           j++;
           ch++;
        }
        cout<<endl;
        i++;
    }
   

    return 0;
}

// 5
// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y 