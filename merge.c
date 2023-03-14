#include<stdio.h>
int c=0;
void mergesort(int [],int ,int);
void merge(int [],int ,int,int);
void print(int [],int);
int main()
{
  int n,arr[100],i;
  printf("Enter n");
  scanf("%d",&n);
  int lb=0,ub=n-1;
  printf("Enter elements : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  mergesort(arr,lb,ub);
  print(arr,n);
   printf("\ncomparisons = %d",c);
 }
void mergesort(int arr[],int lb,int ub)
{
  int mid;
  if(lb<ub)
  {
    mid=(lb+ub)/2;
    mergesort(arr,lb,mid);
    mergesort(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
 }
}
void merge(int arr[],int lb,int mid,int ub)
{
  int i=lb,j=mid+1,k=lb,b[100];
  while(i<=mid && j<=ub)
  {
    if(arr[i]<=arr[j])
    {
       b[k]=arr[i];
       i++;
    }
    else
    {
       b[k]=arr[j];
       j++;
    }
    k++;
    c++;
  }
  if(i>mid)
  {
    while(j<=ub)
    {
      b[k]=arr[j];
      j++;
      k++;
    }
 }
 else
 {
   while(i<=mid)
   {
     b[k]=arr[i];
     i++;
     k++;
   }
 }
 for(k=lb;k<=ub;k++)
 {
    arr[k]=b[k];
 }
} 
void print(int arr[],int n)
{
   int i;
   printf("inversions =");
   for(i=0;i<n;i++)
   {
      printf("%d  ",arr[i] );
      
   }
}
