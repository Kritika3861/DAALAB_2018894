#include<stdio.h>
void bubble(int [],int);
int main()
{
    int i,j,arr[100],n,flag=0,lb,ub;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    lb=0,ub=n-1;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble(arr,n);
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
void bubble(int arr[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
