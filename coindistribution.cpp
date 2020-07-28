#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int five,one,two;
    five=floor((n-4)/5);
    if((n-5*five)%2==0)
    {
        one=2;
    }
    else{
        one=1;
    }
    two=floor((n-5*five-one)/2);
    printf("%d %d %d %d",five+two+one,five,two,one);
}
