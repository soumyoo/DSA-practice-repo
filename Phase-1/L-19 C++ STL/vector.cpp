#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector <int> a(5);

    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" "; //0 0 0 0 0
    }
    cout<<endl;

    vector <int> b(5,1);

    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<" "; //1 1 1 1 1
    }
    cout<<endl;

    vector<int> c(b); //copying b in c

    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<<" "; //1 1 1 1 1
    }
    cout<<endl;


    cout<<"vector v size "<<v.capacity()<<endl;//0
    // cout<<"vector v size "<<v.size()<<endl;//0

    v.push_back(1);
    cout<<"vector v size "<<v.capacity()<<endl;//1

    v.push_back(2);
    cout<<"vector v size "<<v.capacity()<<endl;//2

    v.push_back(3);
    cout<<"vector v size "<<v.capacity()<<endl;//4
    cout<<"vector v size "<<v.size()<<endl;//3

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";//1 2 3
    }
    cout<<endl;

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";//1 2
    }
    cout<<endl;

    v.clear();

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";//
    }
    cout<<endl;

}