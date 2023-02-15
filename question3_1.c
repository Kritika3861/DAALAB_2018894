#include<stdio.h>
#include<math.h>
int main()
{
   int n,arr[100],i,start,end,k,flag=0;
   printf("Enter the number of elements :");
   scanf("%d",&n);
   start=0;
   end=sqrt(n);
   printf("Enter the elements :");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("Enter the key :");
   scanf("%d",&k);
   while(arr[end]<=k && end<n)
   {
      start=end;
      end=end+sqrt(n);
      if(end>n-1)
         end=n;
   }
   for(i=start;i<end;i++)
   {
      if(arr[i]==k)
      {
         printf("Key found at index : %d",i); 
         flag=1;
      }
   }
   if(flag==0)
      printf("Key not found");
}   
   
   
