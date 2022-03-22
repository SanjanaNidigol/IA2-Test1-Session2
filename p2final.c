#include<stdio.h>
int input_side()
{ int k;
  printf("enter the values for the sides of triangle\n");
  scanf("%d",&k);
  return k;
}
int check_scalene(int x, int y, int z)
{
  if(x!=y && y!=z && x!=z)
  {
    return 1;
  }
  return 0;
}

void output(int x, int y, int z, int isscalene)
{
  if(isscalene==0)
  {
    printf("is not a scalene triangle\n");
  }
   else
   {
     printf("is a scalene triangle\n");
   }
}
int main()
{
  int x,y,z,isscalene;
  x=input_side();
  y=input_side();
  z=input_side();
  isscalene=check_scalene(x,y,z);
  output(x,y,z,isscalene);
  return 0;
}
