#include<stdio.h>
int main()
{
    int n,arr[100],i,j,k;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter k :");
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t;
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    k=k-1;
    for(i=0;i<n;i++)
    {
        if(i==k)
        {
            printf("%d",arr[i]);
        }
    }

}
