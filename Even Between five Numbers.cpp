#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b=0;
    for(i=0;i<5;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            b+=1;
        }
    }
    cout<<b<<"valores pares"<<endl;

}
