#include<stdio.h>
int c=0,swap=0;
int quick(int [],int ,int);
void print(int [],int);
int main()
{
   int n,arr[100],i;
   printf("Enter the number of elements :");
   scanf("%d",&n);
   int lb=0,ub=n-1;
   printf("Enter the elements :");
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   quick(arr,lb,ub);
   print(arr,n);
   printf("Comaprisons = %d",c);
    printf("Swaps = %d",swap);
}
int quick(int arr[],int lb,int ub)
{
  int i=lb,j=ub,key=arr[lb],t=0;
  if(lb>=ub)
  {
    return 0;
  }
  while(i<j)
  {
     while(key>=arr[i] && i<j)
       i++;
       c++;
     while(key<arr[j])
       j--;
       c++;
     if(i<j)
     {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        swap++;
     }
  }
 arr[lb]=arr[j];
 arr[j]=key;
 swap++;
 quick(arr,lb,j-1);
 quick(arr,j+1,ub);
}
void print(int arr[],int n)
{
int i;
   for(i=0;i<n;i++)
   {
     printf("%d  ",arr[i]);
   }
}
