#include <stdio.h>
#include <stdlib.h>
#define max 100

void bfs(int start,int n,int adj[max][max])
{
    int visited[max],queue[max],v;
    int rear=-1;
    int front=-1;
    visited[start]=1;
    queue[++rear]=start;
    while (front<=rear)
    {
        int disp=queue[++front];
        printf("%d",disp);
        for (v=0;v<n;v++)
        {
            if (adj[disp][v]==1 && visited[v]==0)
            {
                queue[++rear]=v;
                visited[v]=1;
            }
        }
    }

}

int main()
{
    int adj[max][max],n;
    printf("En")
}