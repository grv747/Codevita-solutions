#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string bride,groom;
  cin>>bride;
  cin>>groom;
  int count=n,temp;
  int i,j;

  for(i=0;i<n;i++)
  {
      temp=0;
      for(j=0;j<n;j++)
      {

        if(bride[i]==groom[j])
        {
            temp++;
            count--;
            groom[j]='f';
            break;
        }

      }
      if(temp==0)
      {
          break;
      }

  }
  printf("%d",count);


}
