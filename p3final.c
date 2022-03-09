#include<stdio.h>
int input(int *n, int *r)
{
  printf("enter the value of n and r:\n");
  scanf("%d%d", n,r);
  return 0;  
}
int ncr(int n, int r)
{
  int factorial(int num);
  int fact=1,i,num,ncr;
  for(i=1; i<=num; i++)
    {
      fact = fact*i;
    }
    return fact;
  ncr = factorial(n)/(factorial(r)*factorial(n-r));
}
void output(int n, int r , int result)
{
  printf("nCr factorial of %d and %d is %d", n,r,result);
}
int main()
{
  int n, r,result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}