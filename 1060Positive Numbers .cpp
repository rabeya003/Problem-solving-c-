#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    int i,sum=0;


    for(i=1;i<=6;i++)
    {
        cin>>a;

        if(a>0)
        {
            sum+=1;
        }
    }

    cout<<sum<<" valores positivos"<<endl;


}
