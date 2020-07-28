#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
    int N,T;
    cin>>N>>T;
    int A[N],i;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        if(A[i]<1||A[i]>500)
        {
            return 0;
        }
    }
    int P,D,temp=0,count=0;
    cin>>P>>D;
    if(N<1||N>50||T<1||T>100||D<1||D>2000||P<1||P>500)
    {
        return 0;
    }
    sort(A,A+N);
    if(T<N)
    {
        temp++;
    }
    int x=P;
    for(i=0;i<N;i++)
    {
        if(x>=A[i])
        {
            x=x+x-A[i];
        }
        else
        {
            count++;
            break;
        }
    }
    if(count==1||temp==1||x<D)
    {
        printf("No");
    }
    else{
        printf("Yes");
    }
}
}
