#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,years,months,days;
    cin>>a;
    years =a/365;
    a=a%365;
    months = a/30;
    a = a%30;
    days = a;
    cout<<years<<" ano(s)"<<endl;
    cout<<months<<" mes(es)"<<endl;
    cout<<days<<" dia(S)"<<endl;
    return 0;


}
