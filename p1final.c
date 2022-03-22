#include<stdio.h>
void input( float *b, float *h)
{
  printf("Enter the value for base and height of triangle\n");
  scanf("%f%f",b,h);
}
void find_area(float b, float h,float *area)
{
  *area=0.5*(b*h);
}
void output(float b, float h, float area)
{
  printf("%f is the area of triangle for given values of base and height\n",area);
}
int main()
{
  float b,h,area;
  input(&b,&h);
  find_area(b,h,&area);
  output(b,h,area);
  return 0;
}