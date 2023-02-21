#include<stdio.h>
int main()
{
  int i,j,n,k,arr[100],flag=0;
  printf("Enter number of elements :");
  scanf("%d",&n);
  printf("Enter sorted positive integers :");
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    j=i+1;
    for(;j<n;j++)
    {
      for(k=0;k<n;k++)
      {
        if(arr[i]+arr[j]==arr[k])
        {
          printf("%d,%d,%d\n",i+1,j+1,k+1);
          flag=1;
        }
      }
   }
  }
  if(flag==0)
  {
    printf("No sequence found");
  }
}
  
