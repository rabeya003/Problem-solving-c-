#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,tri,cir,tra,qua,rect;
    cin>>a>>b>>c;
    tri = 0.5*a*c;
    cir = 3.14159*pow(c,2);
    tra = 0.5*(a+b)*c;
    qua = pow(b,2);
    rect = a*b;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tri<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<cir<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<tra<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<qua<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rect<<endl;
    return 0;




}
