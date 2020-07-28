#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int A[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    int dir=0;
    int top=0;
    int down=n-1;
    int left=0;
    int right=n-1;
    vector<pair<int,int>>v;
    int count=1;
    v.push_back(make_pair(0,0));
    while(top<down && left<right)
    {
        if(dir==0)
        {
            for(i=left;i<=right;i++)
            {
                if(A[top][i]%11==0)
                {
                    count++;
                    v.push_back(make_pair(top,i));
                }
            }
            top++;
        }
       else if(dir==1)
        {
            for(i=top;i<=down;i++)
            {
                if(A[i][right]%11==0)
                {
                    count++;
                    v.push_back(make_pair(i,right));
                }

            }
            right--;
        }
        else if(dir==2)
        {
            for(i=right;i>=left;i--)
            {
               if(A[down][i]%11==0)
                {
                    count++;
                    v.push_back(make_pair(down,i));
                }
            }
            down--;
        }
        else if(dir==3)
        {
            for(i=down;i>=top;i--)
            {
                if(A[i][left]%11==0)
                {
                    count++;
                    v.push_back(make_pair(i,left));
                }
            }
            left++;
        }
        dir=(dir+1)%4;
    }
    printf("total power points:%d\n",count);
    for(i=0;i<v.size();i++)
    {
        printf("(%d,%d)\n",v[i].first,v[i].second);
    }
    return 0;
}
