#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,r1,r2;
    cin>>a>>b>>c;
    d =sqrt((pow(b,2))-(4*a*c));
    if(d<0 || a==0 || (4*a*c)>(pow(b,2)))
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        r1=((-b+d)/(2*a));
        r2=((-b-d)/(2*a));
        cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<r2<<endl;

    }

}
