#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,sum=0;
    int n=0,i;
    for(i=0;i<6;i++)
    {
        cin>>a;
        if(a>0)
        {
                sum+=a;
                n+=1;

        }
    }
    cout<<n<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<(sum/n)<<endl;

}
