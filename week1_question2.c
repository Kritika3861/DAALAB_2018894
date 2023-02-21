#include<stdio.h>
int binary(int [],int ,int,int );
int binary(int arr[],int lb,int ub,int k)
{
  int mid;
  mid=(lb+ub)/2;
  while(lb<=ub){
  if(arr[mid]==k)
    return mid;
  else if(arr[mid]>k)
    return binary(arr,lb,mid-1,k);
  else
    return binary(arr,mid+1,ub,k);
  }
  return -1;
}
int main()
{
  int arr[100],i,n,k,a,lb,ub;
  printf("Enter number of non negative integers :");
  scanf("%d",&n);
  lb=0;
  ub=n-1;
  printf("Enter sorted positive integers :");
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]); 
  }
  printf("Enter key");
  scanf("%d",&k);
  a=binary(arr,lb,ub,k);
  printf("Key found at index %d",a);
  return 0;
}
  
