//for pointer in struct use ->
#include<stdio.h>
struct _triangle
{
float base, altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle t ;
  printf("Enter the values for the base and altitude\n");
  scanf("%f%f",&t.base, &t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
  printf("%f is the area of the triangle\n",t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
