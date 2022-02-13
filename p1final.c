#include<stdio.h>
void input( float *base, float *height)
{
  printf("Enter the value for base and height of triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base, float height,float *area)
{
  *area=0.5*(base*height);
}
void output(float base, float height, float area)
{
  printf("%f is the area of triangle for the given values of base and height\n",area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}