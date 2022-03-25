#include<stdio.h>
struct _triangle
{
float base , altitude, area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int k;
  printf("enter a value\n");
  scanf("%d",&k);
  return k;
}
Triangle input_triangle()
{
  Triangle t ;
  printf("Enter the values for the base and altitude\n");
  scanf("%f%f",&t.base, &t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    t[i]=input_triangle();
  }
}
void find_area(Triangle *t) 
{
  t->area=0.5 * t->base * t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<=n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
  small=t[0];
  for(int i=1;i<n;i++)
    if(small.area>t[i].area)
    {
      small=t[i];
    }
  return small;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("the smallest of triangles with base and heigth\n");
  for(int i=0;i<n;i++)
    {
      printf("%f %f\n",t[i].base,t[i].altitude);
    }
printf("is triangle with base %f and altitude %f and area %f",smallest.base,smallest.altitude,smallest.area); 
}
int main()
{
  int n;
  n=input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_areas_n(n,t);
  Triangle smallest;
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0; 
}