#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=4)
    {
        return 0;
    }
    int i,j,temp=0;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(i=1;i<n-3;i++)
    {
        int a=i;
        for(j=a+2;j<n-1;j++)
        {
            int b=j;
            int k=0;
            int sum1=0;
            while(k!=a)
            {
                sum1=sum1+A[k];
                k++;
            }
            int l=a+1;
            int sum2=0;
            while(l!=b)
            {
                sum2=sum2+A[l];
                l++;
            }
            int m=b+1;
            int sum3=0;
            while(m!=n)
            {
                sum3=sum3+A[m];
                m++;
            }
            if(sum1==sum2&&sum2==sum3)
            {
                temp++;
                printf("{%d,%d}\n",a,b);
                printf("{0,%d},{%d,%d},{%d,%d}\n",a-1,a+1,b-1,b+1,n-1);
            }
        }
    }
    if(temp==0)
    {
        printf("Array does not contain any equi pair");
    }
}
