#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,y,sum=0,max,min;
    cin>>x>>y;
    if(x<y)
    {
        min=x;
        max=y;
    }
    else{
        min=y;
        max=x;
    }

    for(i=(min+1);i<max;i++)
    {
        if(i%2!=0)
        {
            sum+=i;

        }
    }
    cout<<sum<<endl;
    return 0;
}
