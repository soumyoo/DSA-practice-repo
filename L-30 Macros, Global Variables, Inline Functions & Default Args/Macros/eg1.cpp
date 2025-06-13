#include<iostream>
using namespace std;
#define PI 3.14
#define PRINT_RECTANGLE(row,col)\
for (int i = 0; i < row; i++)\
{\
    for (int j = 0; j < col; j++)\
    {\
        cout<<"*";\
    }\
    cout<<endl;\
}
#define CLERK 10
#define WORKER CLERK
int main(){
    int r=5;
    double area=PI*r*r;
    cout<<area<<endl;
    PRINT_RECTANGLE(5,6);
    cout<<WORKER<<endl;

    cout<<__LINE__<<endl;
    cout<<__FILE__<<endl;
    cout<<__DATE__<<endl;
    cout<<__TIME__<<endl;

    return 0;
}
// 78.5
// ******
// ******
// ******
// ******
// ******
// 10
// 22
// eg1.cpp
// Jun 13 2025
// 13:43:52