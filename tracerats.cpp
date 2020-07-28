#include<iostream>
using namespace std;
char A[400][400];
int n;
void catchrat(int x,int y)
{
    if(x<1||x>n||y<1||y>n||A[x][y]=='V'||A[x][y]=='X')
    {
        return;
    }
    A[x][y]='V';
    catchrat(x+1,y);
    catchrat(x-1,y);
    catchrat(x,y+1);
    catchrat(x,y-1);
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
  int rats,count=0,x,y;
  cin>>rats;
  for(i=0;i<rats;i++)
  {

      cin>>x>>y;

      A[x][y]='R';
  }
  catchrat(x,y);
   for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
          if(A[i][j]=='R')
          {
             count++;
          }
      }

  }
  if(count==0)
  {
      printf("Yes");
  }
  else
  {
      printf("No");
  }

}
