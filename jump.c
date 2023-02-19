#include<stdio.h>
#include<math.h>
int jump(int [], int, int);
int main()
{
    int n,arr[100],i,k,a;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key :");
    scanf("%d",&k);
    a=jump(arr,n,k);
    printf("Element found at %d",a);
}
int jump(int arr[], int n, int k)
{
    int i;
    int start=0,end;
    end=sqrt(n);
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
            return i;
        }
    }
    return -1;
}
