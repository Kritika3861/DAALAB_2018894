#include<stdio.h>
int main()
{
    char arr[100],b;
    int count[26]={0};
    int i,n,j,max=0;

    printf("Enter character array :");
    gets(arr);
    puts(arr);
    for(i=0;i<strlen(arr);i++)
    {
        count[arr[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        printf("%d",count[i]);
    }
    for(i=0;i<26;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            b=arr[i];
        }
    }
    if(max>1)
    {
        printf("\n%c - %d",b,max);
    }
    else
    {
        printf("\nNo duplicates found");
    }

}
