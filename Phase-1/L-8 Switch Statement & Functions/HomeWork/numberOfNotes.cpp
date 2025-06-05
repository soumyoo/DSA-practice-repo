//with a input amount, tell how many ₹100, ₹50, ₹20, ₹1 note is needed

#include<iostream>
using namespace std;

int main(){
    int rs100,rs50,rs20,rs1;

    int amount;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;

    switch(100){

        case 100:
        rs100=amount/100;
        amount=amount%100;
        cout<<"Number of 100 rupees note "<<rs100<<endl;

        case 50:
        rs50=amount/50;
        amount=amount%50;
        cout<<"Number of 50 rupees note "<<rs50<<endl;

        case 20:
        rs20=amount/20;
        amount=amount%20;
        cout<<"Number of 20 rupees note "<<rs20<<endl;

        case 1:
        rs1=amount/1;
        amount=amount%1;
        cout<<"Number of 1 rupees note "<<rs1<<endl;

    }
}