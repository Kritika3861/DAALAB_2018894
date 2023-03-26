#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],m,n,i,j,b[100],count=0;
    printf("Enter m :");
    scanf("%d",&m);
    printf("Enter the elements of first array :");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter n :");
    scanf("%d",&n);
    printf("Enter the elements of second array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                b[count]=arr1[i];
                count++;
                break;
            }
        }
    }
    for(i=0;i<count;i++)
    {
       printf("%d ",b[i]);
    }

}
