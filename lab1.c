#include<stdio.h>
int main()
{
    int n,arr[100],key,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Invalid search");
    }
    return 0;
}
