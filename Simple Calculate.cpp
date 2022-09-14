#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float e,f,r;
    cin>>a>>b>>e>>c>>d>>f;
    r = b*e;
    r +=d*f;
    printf("VALOR A PAGAR: R$ %.2lf\n",r);
    return 0;
}
