#include<iostream>
using namespace std;

template<typename T1, int N>

class array
{
    T1 arr[N];

    public : 

    void getsize()
    {
        cout<<"\n"<<N;
    }

    void arrtype()
    {
        cout<<"\n"<<sizeof(T1);
    }
};

int main()
{
    array<int, 5>arr;
    arr.getsize();
    arr.arrtype();

    return 0;
}