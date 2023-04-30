#include<iostream>
using namespace std;


template<typename T>

void print(T val)
{
    cout<<"\n"<<val;
}

int main()
{
    print("Hi");
    print(5);
    print(5.5f);
}
