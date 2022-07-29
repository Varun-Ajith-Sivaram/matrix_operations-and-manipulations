#include<stdio.h>
#include<stdlib.h>

void mat_read(int x,int y,int[x][y]);
void mat_display(int x, int y,int[x][y]);
void mat_transpose(int x,int y,int[x][y]);

int i,j,m,n;

void main()
{
    printf("\tMatrix Transpose Implementation\n");
    
    printf("\n Enter the no. of rows & columns (order) of the matrix: \n");
    scanf("%d %d",&m,&n);
    
    int a[m][n];
    
    printf("\n   Enter the elements of the matrix: \n");
    mat_read(m,n,a);
                
    printf("\nMatrix: \n");
    mat_display(m,n,a);
    
    printf("\nMatrix Transpose: \n");
    
    mat_transpose(m,n,a);
}

void mat_read(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("Element at index(%d,%d): ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void mat_display(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        for(j=0;j<y;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}

void mat_transpose(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<y;i++)
    {
        printf("\t");
        for(j=0;j<x;j++)
        {
            printf("%d  ",mat[j][i]);
        }
        printf("\n");
    }
}
