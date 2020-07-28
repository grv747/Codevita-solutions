#include<iostream>
#include<queue>
using namespace std;
char forest[21][21];
int n,m;
struct ele
{
    int a,b;
};
bool isvalid(int x,int y)
{
    return (x>=0&&y>=0&&x<n&&y<m);
}
bool isdelim(ele temp)
{
    return (temp.a==-1&&temp.b==-1);
}
int main()
{
    cin>>n>>m;
    int x,y,i,j,count=0;
    cin>>x>>y;
    x--;
    y--;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>forest[i][j];
        }
    }
  queue<ele>q;
  ele temp;
  temp.a=x;
  temp.b=y;
  q.push(temp);
  temp.a=-1;
  temp.b=-1;
  q.push(temp);
  int ans=1;
  while(!q.empty())
  {
      bool flag=false;
      while(!isdelim(q.front()))
      {
        ele count=q.front();
        if(isvalid(count.a+1,count.b)&&forest[count.a+1][count.b]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a+1][count.b]='V';
            count.a++;
            q.push(count);
            count.a--;
        }
        if(isvalid(count.a+1,count.b+1)&&forest[count.a+1][count.b+1]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a+1][count.b+1]='V';
            count.a++;
            count.b++;
            q.push(count);
            count.a--;
            count.b--;
        }
        if(isvalid(count.a+1,count.b-1)&&forest[count.a+1][count.b-1]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a+1][count.b-1]='V';
            count.a++;
            count.b--;
            q.push(count);
            count.a--;
            count.b++;
        }
        if(isvalid(count.a,count.b+1)&&forest[count.a][count.b+1]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a+1][count.b+1]='V';
            count.b++;
            q.push(count);
            count.b--;
        }
        if(isvalid(count.a,count.b-1)&&forest[count.a][count.b-1]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a][count.b-1]='V';
            count.b--;
            q.push(count);
            count.b++;
        }
         if(isvalid(count.a-1,count.b-1)&&forest[count.a-1][count.b-1]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a-1][count.b-1]='V';
            count.a--;
            count.b--;
            q.push(count);
            count.a++;
            count.b++;
        }
         if(isvalid(count.a-1,count.b+1)&&forest[count.a-1][count.b+1]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a-1][count.b+1]='V';
            count.a--;
            count.b++;
            q.push(count);
            count.a++;
            count.b--;
        }
         if(isvalid(count.a-1,count.b)&&forest[count.a-1][count.b]=='T')
        {
            if(flag==false)
            {
                flag=true;
                ans++;
            }
            forest[count.a-1][count.b]='V';
            count.a--;
            q.push(count);
            count.a++;

        }
        q.pop();
      }
      q.pop();
      if(!q.empty())
      {
          temp.a=-1;
          temp.b=-1;
          q.push(temp);
      }

  }
printf("%d",ans);
}
