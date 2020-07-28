#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,count=0;
        cin>>n;
        while(n>0)
        {
            x=n%2;
            n=n/2;
            count++;
        }
        printf("%d\n",count);
    }
}
