#include <stdio.h>
int input_array_size()
{
  int b;
  printf("Enter the size of the array\n");
  scanf("%d",&b);
  return b;
}
void input_array(int n, int a[n])
{
  printf("Enter values\n");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int is_composite(int n)
{
  for (int i=2;i<=n/2;i++)
  {
    if (n%i==0)
      return 1;
  }
  return 0;
}
int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    if (is_composite(a[i]))
    {
      sum+=a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("%d\n",sum);
}
int main()
{
  int n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}
