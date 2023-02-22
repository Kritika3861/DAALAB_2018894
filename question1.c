#include<stdio.h>
int main()
{
  int arr[100],n,i,k,j,count=0,flag=0;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  printf("Enter the key :");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    j=i+1;
    for(j=0;j<n;j++)
    {
      if(arr[i]-arr[j]==k)
      {
        count++;
        flag=1;
      }
    }
  }
  if(flag==1)
  {
  printf("The number of such pairs : %d",count);
  }
  else
  {
   printf("No such pairs found");
  }
}
  
