#include<stdio.h>
int duplicate(int [],int,int);
int main()
{
  int i,n,k,a,arr[100];
  printf("Enter number of elements :");
  scanf("%d",&n);
  printf("Enter sorted positive integers :");
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  printf("Enter the key :");
  scanf("%d",&k);
  a=duplicate(arr,n,k);
  printf("%d - %d",k,a);
}
int duplicate(int arr[],int n,int k)
{
  int i,count=0,flag=0;
  for(i=0;i<n;i++)
  {
     if(arr[i]==k)
     {
       count++;
       flag=1;
     }
  }
  if(flag==1)
  {
    return count;
  }
  else
  {
    return 0;
  }
}
