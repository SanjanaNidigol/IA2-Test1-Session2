#include<stdio.h>
int input_side()
{ int n;
  printf("enter the values for the sides of triangle\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && a!=c)
  {
    return 1;
  }
  return 0;
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene==0)
  {
    printf("is not a scalence triangle\n");
  }
   else
   {
     printf("is a scalene triangle\n");
   }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
