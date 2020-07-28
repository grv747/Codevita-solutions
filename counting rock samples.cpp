#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>v2;
    int rocks,samples,i,x,y,temp,j;
    cin>>rocks>>samples;
    for(i=0;i<rocks;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(i=0;i<samples*2;i++)
    {
        cin>>x;
        v2.push_back(x);
    }

    for(i=1;i<v2.size();i=i+2)
    {
        x=v2[i];
        y=v2[i-1];
        temp=0;
        for(j=0;j<v1.size();j++)
        {
            if(v1[j]<=x&&v1[j]>=y)
            {
                temp++;
            }
        }
        printf("%d ",temp);
    }
}
