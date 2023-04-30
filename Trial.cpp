#include <bits/stdc++.h>
using namespace std;

int a = 100;
int b = 10;
void changePtr(int *x)
{
    x = &b;
}
int main()
{
    //int *x = &a;
    //cout<<*x;
    //changePtr(x);
    //cout<<"\n"<<*x;

    int i=0;
    while(1)
    {
        if(i==0)
        break;

        cout<<"\nHi";
        i++;
    }

    cout<<"\nYo";
}