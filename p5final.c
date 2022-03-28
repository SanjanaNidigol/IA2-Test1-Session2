#include<stdio.h>
int input()
{
  int k;
  printf("enter any number\n");
  scanf("%d",&k);
  return k;
}
int gcd(int a,int b)
{
  int gcd;
  for(int i=2;i<a && i<b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      gcd=i;
    }
  }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a,b,result;
  a=input();
  b=input();
  result=gcd(a,b);
  output(a,b,result);
}













/*#include <stdio.h>
int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}
int gcd(int a, int b)
{
    int large,small,i,rem;
    large=a>b ? a : b;
    small=a<b ? a : b;
    i=1;
    rem=1;

    while(rem)
    {
        rem=large-i*small;
        if(rem<small)
        {
            large=small;
            small=rem;
            i=0;
        }
        i++;
    }
    return large;
}

void output(int a, int b, int gcd)
{
  printf("The gcd of %d and %d is %d\n",a,b,gcd);
}

int main()
{ 
  int n1,n2;
  n1=input();
  n2=input();
  int res=gcd(n1,n2);
  output(n1,n2,res);
  return 0;
}
*/