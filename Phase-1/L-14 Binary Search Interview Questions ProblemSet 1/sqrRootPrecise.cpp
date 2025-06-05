#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

long long int SquarRoootInt(int n) {
        int start=0;
        int end=n;
        int ans=0;
        while(start<=end){
            long long int mid=start+((end-start)/2);
            long long int sqr=mid*mid;
            if(sqr==n){
                return mid;
            }else if(sqr>n){
                end=mid-1;
            }else if(sqr<n){
                start=mid+1;
                ans=mid;
            }
        }
        return ans;
    }

double deciPart(int intPart,int n,int deciDigits){
     double start=intPart;
     double factor=1/pow(10,deciDigits);
     double end=intPart+(1-factor);
     double ans=intPart;
     while (start<=end)
     {
        double mid=start+((end-start)/2);
        double sqr=mid*mid;
        if(sqr==n){
                return mid;
            }else if(sqr>n){
                end=mid-factor;
            }else if(sqr<n){
                start=mid+factor;
                ans=mid;
            }
     }
     return ans;
}

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int intPart=SquarRoootInt(n);
    double result=deciPart(intPart,n,12);
    cout << fixed << setprecision(12) << result << endl;
    return 0;
}

// Enter the number 
// 101
// 10.049875621121