#include<stdio.h>
void selection(int [],int);
int main()
{
   int n,i,arr[100];
   printf("Enter the number of elements : ");
   scanf("%d",&n);
   printf("Enter the elements : ");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   selection(arr,n);
}
void selection(int arr[],int n)
{
  int i,min,j,s=0,c=0;
  for(i=0;i<n-1;i++)
  {
     min=i;
     for(j=i+1;j<n;j++)
     {
       if(arr[j]<arr[min])
       {
         min=j;
       }
       c++;
     }
     if(min!=i)
     {
       int temp;
       temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
     }
     s++;
  }
    for(i=0;i<n;i++)
  {
    printf(" %d ",arr[i]);
  } 
    printf("\nComparisons  : %d",c); 
  printf("\nSwaps  : %d",s);
}

