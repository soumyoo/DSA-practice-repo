#include<iostream>
using namespace std;

void getToHome(int src,int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    if (src!=dest)
    {
        getToHome(++src,dest);
    }
}

int main(){
    int src,dest;
    cin>>src>>dest;

    getToHome(src,dest);

}

// 1
// 10
// source 1 destination 10
// source 2 destination 10
// source 3 destination 10
// source 4 destination 10
// source 5 destination 10
// source 6 destination 10
// source 7 destination 10
// source 8 destination 10
// source 9 destination 10
// source 10 destination 10