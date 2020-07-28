#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool check(int x)
{
    int sum=0;
    int a;
    while(x!=0)
    {
        a=x%10;
        sum=sum+pow(a,2);
        x=x/10;
    }
    if(sum==1)
    {
        return true;
    }
    if(sum==4)
    {
        return false;
    }
    else{
        check(sum);
    }
}
int main()
{
    int x,y,n,i,j,count=0,sum,a;
    cin>>x>>y>>n;
    if(x<0||x>10000||y<0||y>10000||n>10000)
    {
        printf("Invalid Input");
        return 0;
    }
    vector<int>v;
    vector<int>v1;
    for(i=x;i<=y;i++)
    {
        count=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            v.push_back(i);
        }
    }
    for(i=0;i<v.size();i++)
    {
     bool a=check(v[i]);
     if(a==true)
     {
         v1.push_back(v[i]);
     }
    }

    if(n<=v1.size())
    {
        printf("%d ",v1[n-1]);
    }
    if(n>v1.size())
    {
        printf("No number is present at this index");
    }


}
