#include<iostream>
using namespace std;
int A[100][100];
int n;
void range4(int x,int y)
{
   if(x<1||x>n||y<1||y>n||A[x][y]==3||A[x][y]==0)
    {
        return;
    }
    A[x][y]=3;
    range4(x+1,y);
    range4(x-1,y);
    range4(x,y+1);
    range4(x,y-1);
    range4(x+1,y+1);
    range4(x+1,y-1);
    range4(x-1,y+1);
    range4(x-1,y-1);
}
void range3(int x,int y,int &count)
{
    if(x<1||x>n||y<1||y>n||A[x][y]==3||A[x][y]==2||A[x][y]==0)
    {
        return;
    }
    if(count<=3)
    {

    A[x][y]=3;
    range3(x+1,y,count);
    range3(x-1,y,count);
    range3(x,y+1,count);
    range3(x,y-1,count);
    range3(x+1,y+1,count);
    range3(x+1,y-1,count);
    range3(x-1,y+1,count);
    range3(x-1,y-1,count);
    count++;
    }
    else
    {
        A[x][y]=2;
    range3(x+1,y,count);
    range3(x-1,y,count);
    range3(x,y+1,count);
    range3(x,y-1,count);
    range3(x+1,y+1,count);
    range3(x+1,y-1,count);
    range3(x-1,y+1,count);
    range3(x-1,y-1,count);
    }
}
void range2(int x,int y,int &count)
{
    if(x<1||x>n||y<1||y>n||A[x][y]==3||A[x][y]==2||A[x][y]==0)
    {
        return;
    }
     count++;
    if(count==1||count==2)
    {

        A[x][y]=3;

    range2(x+1,y,count);
    range2(x-1,y,count);
    range2(x,y+1,count);
    range2(x,y-1,count);
    range2(x+1,y+1,count);
    range2(x+1,y-1,count);
    range2(x-1,y+1,count);
    range2(x-1,y-1,count);

    }
    else
    {
        A[x][y]=2;
    range2(x+1,y,count);
    range2(x-1,y,count);
    range2(x,y+1,count);
    range2(x,y-1,count);
    range2(x+1,y+1,count);
    range2(x+1,y-1,count);
    range2(x-1,y+1,count);
    range2(x-1,y-1,count);
    }
}
void range1(int x,int y)
{
    if(x<1||x>n||y<1||y>n||A[x][y]==0||A[x][y]==2)
    {
        return;
    }
    A[x][y]=2;
    range1(x+1,y);
    range1(x-1,y);
    range1(x,y+1);
    range1(x,y-1);
    range1(x+1,y+1);
    range1(x+1,y-1);
    range1(x-1,y+1);
    range1(x-1,y-1);
}
int main()
{
   cin>>n;
   int i,j;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           cin>>A[i][j];
       }
   }
   int x,y;
   cin>>x>>y;
   float r;
   cin>>r;
   if(r<=3)
   {
       range1(x,y);
   }
   if(r>3&&r<=5)
   {
       int count=0;
       range2(x,y,count);
   }
   if(r>5&&r<=8)
   {
       int count=0;
       range3(x,y,count);
   }
   if(r>8)
   {
       range4(x,y);
   }
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           printf("%d ",A[i][j]);
       }
       printf("\n");
   }

}
