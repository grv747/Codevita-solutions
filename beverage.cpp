#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N],i,count=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int x;
    cin>>x;
    sort(A,A+N);
    for(i=0;i<N-2;i++)
    {
       int j=i+1;
        int k=N-1;
        while(j<k)
        {
            if(A[i]+A[j]+A[k]==x)
            {
                count++;
            }
            if(A[i]+A[j]+A[k]<x)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    if(count==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}
