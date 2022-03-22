#include<stdio.h>
struct _triangle
{
float base, altitude, area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle base, altitude;
  printf("Enter the values foe the base and altitude\n");
  scanf("%d%d",&base,&altitude);
  return 0;
}
