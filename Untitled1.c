#include<stdio.h>
int linear(int [],int ,int);
int linear(int arr[],int n,int x)
{
   int i;
   for(i=0;i<n;i++)
   {
     if(arr[i]==x)
     {
       return i;
       break;
     }
   }
   if(i==n)
   {
       return -1;
   }
}
int main()
{
  int arr[100],i,n,x,a;
  printf("Enter number of non negative integers ;");
  scanf("%d",&n);
  printf("Enter non negative integers :");
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  printf("Enter key");
  scanf("%d",&x);
  a=linear(arr,n,x);
  printf("Key found at index %d",a);
  return 0;
}
