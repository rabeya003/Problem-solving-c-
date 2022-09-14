#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,z=0,y=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>=10 && x<=20)
        {
            z++;
        }
        else{
                y++;
        }
    }
    cout<<z<<" in"<<endl;
    cout<<y<<" out"<<endl;
}
