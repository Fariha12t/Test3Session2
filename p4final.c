#include<stdio.h>
#include<math.h>
int input_degree()
{
  int n;
  printf("enter degree:\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter value of x:");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
  for(int i=1;i<=n+1;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  int result=0;
  for(int i=1;i<=n+1;i++)
    {
      for(int n=3;n>0;n--)
        {
           result=result+a[i]*pow(x,n);
          break;
        }  
    }
  return result;
}
void out_put(int n,float a[n],float x,float result)
{
  printf("%f\n",result);
}
int main()
{
  int n;
  float x;
  n=input_degree();
  x=input_x();
  float a[n],result;
  input_coefficients(n,a);
  result=evaluate_polynomial(n,a,x);
  out_put(n,a,x,result);
}/*

Write a program to find nth number in fibonacci sequence.
Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
int input();
int find_fibo(int n);
void output(int n, int fibo);

*/

/*#include <stdio.h>

int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fibo=0;
  int a=0;
  int b=1;
  for(int i=0;i<n;i++) {
    fibo = a;
    a = b;
    b = fibo + b;
  }
  return fibo;
}


void output(int n, int fibo)
{
  printf("the %dth fibonacci number is %d\n", n, fibo);
}

int main()
{
  int n = input();
  int fibo = find_fibo(n);
  output(n, fibo);
  return 0;
}*/