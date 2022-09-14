#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,hours,minutes,sec;
    cin>>n;
    hours = n/3600;
    n = n%3600;
    minutes = n/60;
    n = n%60;
    sec=n;
    cout<<hours<<":"<<minutes<<":"<<sec<<endl;
    return 0;

}
