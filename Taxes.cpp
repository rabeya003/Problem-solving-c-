#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(a>=0 && a<=2000.00)
    {
        cout<<"Isento"<<endl;
    }
    if(a>=2000.01 && a<=3000.00)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<((a-2000.00)*0.08)<<endl;
    }
    if(a>=3000.01 && a<=4500.00)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<((1000*0.08)+((a-3000.00)*0.18))<<endl;
    }
    if(a>4500.00)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<((1000*0.08)+(1500*0.18)+(a-4500.00)*0.28)<<endl;
    }
    return 0;



}

