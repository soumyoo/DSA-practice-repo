#include<iostream>
#include<iomanip>
using  namespace std;

int main(){

    int n;
    cin>>n;

    int f=0;

    cout<<setw(12)<<"fahrenheit"<<setw(12)<<"celsius"<<endl;
    
    while (f<=n)
    {
        double c=(f-32)*(5.0/9.0);
         cout << setw(12) << f << setw(12) << fixed << setprecision(2) << c <<endl;
         f++;
    }


    return 0;
}

