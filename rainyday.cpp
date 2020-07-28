#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double mpay,m,r,reqa,presenta;
    cin>>mpay;
    cin>>m;
    cin>>r;
    reqa=mpay;
    while(m--)
    {
        double x=(1+r/1200);
        presenta=reqa/x;
        double interest=reqa-presenta;
        reqa=reqa+mpay-interest;
    }
    double y=floor(reqa-mpay);
    cout<<y;

}
