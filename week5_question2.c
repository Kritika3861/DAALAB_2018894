#include<stdio.h>
int main()
{
   int n,arr[100],i,key,j,flag=0;
   printf("Enter the number of elements :");
   scanf("%d",&n);
   printf("Enter elements :");
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   printf("Enter the key :");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
   j=i+1;
     for(;j<n;j++)
     {
       if(arr[i]+arr[j]==key)
       {
         printf("%d %d ",arr[i],arr[j]);
         flag=1;
       }
    }
  }
  if(flag==0)
  {
    printf("No such element exist");
  }
}
   
   
