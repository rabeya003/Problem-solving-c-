#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    double  a;
    double b;
    cin>>name>>a>>b;
    cout<<"TOTAL = R$ ";
    printf("%.2lf\n",a+(b*15/100));
    return 0;
}
