#include<stdio.h>
void insert(int [],int);
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
   insert(arr,n);
}
void insert(int arr[],int n)
{
  int i,temp,j,c=0,s=0;
  for(i=1;i<n;i++)
  {
     temp=arr[i];
     j=i-1;
     while(j>=0 && arr[j]>temp)
     {
        s++;
        arr[j+1]=arr[j];
        j--;
        c++;
     }
     arr[j+1]=temp;
     s++;
  }
  printf("Sorted elements : ");
  for(i=0;i<n;i++)
  {
    printf(" %d ",arr[i]);
  }
    printf("\n comparisons :%d",c);
    printf("\n shifts :%d",s);
  
 

  }

