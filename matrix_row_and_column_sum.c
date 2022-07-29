#include<stdio.h>
#include<stdlib.h>

void mat_read(int x,int y,int[x][y]);
void mat_display(int x, int y,int[x][y]);
void row_sum(int x,int y,int[x],int[x][y]);
void column_sum(int x,int y,int[y],int[x][y]);

int i,j,m,n;

void main()
{
    printf("\tRow Sum & Column Sum of a Matrix\n");
    
    printf("\n Enter the no. of rows & columns (order) of the matrix: \n");
    scanf("%d %d",&m,&n);
    
    int a[m][n],rsum[m],csum[n];
    
    printf("\n   Enter the elements of the matrix: \n");
    mat_read(m,n,a);
                
    printf("\nMatrix: \n");
    mat_display(m,n,a);
    
    printf("\nRow sum of matrix: \n");
    row_sum(m,n,rsum,a);
    
    printf("\nColumn sum of matrix: \n");
    column_sum(m,n,csum,a);
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

void row_sum(int x,int y,int r[x],int mat[x][y])
{
    for(i=0;i<x;i++)
    {
        r[i]=0;
        
        for(j=0;j<y;j++)
        {
            r[i] += mat[i][j];
        }
    }
    
    for(i=0;i<x;i++)
    {
        printf("\tRow %d Sum = %d\n",i,r[i]);
    }
}

void column_sum(int x,int y,int c[y],int mat[x][y])
{
    for(i=0;i<y;i++)
    {
        c[i]=0;
        
        for(j=0;j<x;j++)
        {
            c[i] += mat[j][i];
        }
    }
    
    for(i=0;i<y;i++)
    {
        printf("\tColumn %d Sum = %d\n",i,c[i]);
    }
}
