#include<stdio.h>
#include<stdlib.h>

void mat_read(int x,int y,int[x][y]);
void mat_display(int x, int y,int[x][y]);
void left_diagonal(int x,int y,int[x][y]);
void right_diagonal(int x,int y,int[x][y]);

int i,j,m,n;

void main()
{
    printf("\tLeft Diagonal & Right Diagonal of a Matrix\n");
    
    printf("\n Enter the no. of rows & columns (order) of the matrix: \n");
    scanf("%d %d",&m,&n);
    
    if(m!=n)
    {
        printf("\n   --> Inputted matrix is not square\n");
        printf("\n   --> Exited the program\n");

        exit(1); 
    }
    
    int a[m][n];
    
    printf("\n   Enter the elements of the matrix: \n");
    mat_read(m,n,a);
                
    printf("\nMatrix: \n");
    mat_display(m,n,a);
    
    printf("\nLeft diagonal of matrix: \n");
    left_diagonal(m,n,a);
    
    printf("\nRight diagonal of matrix: \n");
    right_diagonal(m,n,a);
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
    
    printf("\n");
}

void left_diagonal(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        
        for(j=0;j<y;j++)
        {
            if(i==j)
            {
                printf("%d  ",mat[i][j]);
            }
            
            else
                printf("   ");
        }
        printf("\n");
    }
}

void right_diagonal(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        
        for(j=0;j<y;j++)
        {
            if(i+j == x-1)
            {
                printf("%d  ",mat[i][j]);
            }
            
            else
                printf("   ");
        }
        printf("\n");
    }
}
