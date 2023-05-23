#include<stdio.h>
#include<stdlib.h>
#define max 100
int visited[max]={0};
int matrix[max][max];

void dfs(int v,int n,int dest)
{
    visited[v]=1;
    if(v==dest)
    {
        printf("Path exists between vertices.");
        exit(0);
    }
    for(int i=1;i<=n;i++)
    {
        if(matrix[v][i] && !visited[i])
        {
            dfs(i,n,dest);
        }
    }
}
int main()
{
    int n,s,dest;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the matrix :");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Enter the source and destination vertices :");
    scanf("%d %d",&s,&dest);
    dfs(s,n,dest);
    printf("No path exists between vertices!");
}
