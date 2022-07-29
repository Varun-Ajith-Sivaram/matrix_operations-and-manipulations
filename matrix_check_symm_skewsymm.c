#include<stdio.h>
#include<stdlib.h>

void mat_read(int x,int y,int[x][y]);
void mat_display(int x, int y,int[x][y]);
void mat_transpose(int x,int y,int[x][y],int[x][y]);
int check_symmetric(int x,int y,int[x][y],int[x][y]);
int check_skew_symmetric(int x,int y,int[x][y],int[x][y]);

int i,j,m,n;

void main()
{
    printf("\tSymmetric Matrix & Skew Matrix Checker\n");
    
    /*Rectangular matrices will neither be symmetric nor skew symmetric.
      Only a zero matrix will be both symmetric and skew symmetric.*/
    
    printf("\n Enter the no. of rows & columns (order) of the matrix: ");
    scanf("%d %d",&m,&n);
    
    if(m!=n)
    {
        printf("\n   --> Inputted matrix is not square, so it is neither symmetric nor skew symmetric\n");
        printf("\n   --> Exited the program\n");

        exit(1); 
    }
    
    int a[m][n];
    
    printf("\n   Enter the elements of the matrix: \n");
    mat_read(m,n,a);
                
    printf("\n   Matrix: \n");
    mat_display(m,n,a);
    
    int b[m][n];
    
    mat_transpose(m,n,b,a);
    
    int symm = check_symmetric(m,n,b,a);
    
    int skew_symm = check_skew_symmetric(m,n,b,a);
    
    if(symm == 1 && skew_symm == 1)
        printf("\n   --> Inputted matrix is neither symmetric nor skew symmetric\n");
    
    else if(symm == 0 && skew_symm == 1)
        printf("\n   --> Inputted matrix is symmetric\n");
        
    else if(symm == 1 && skew_symm == 0)
        printf("\n   --> Inputted matrix is skew symmetric\n");
    
    else
        printf("\n   --> Inputted matrix is both symmetric and skew symmetric\n");
}

void mat_read(int x,int y,int mat[x][y])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf(" Element at index(%d,%d): ",i,j);
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

void mat_transpose(int x,int y,int mat1[x][y],int mat2[x][y])
{
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            mat1[i][j]=mat2[j][i];
        }
    }
}

int check_symmetric(int x,int y,int mat1[x][y],int mat2[x][y])
{
    int flag=0;
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(mat1[i][j]!=mat2[i][j])
            {
                flag++;
                i=x;
                break;
            }
        }
    }
    
    return flag;
}

int check_skew_symmetric(int x,int y,int mat1[x][y],int mat2[x][y])
{
    int flag=0;
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(mat1[i][j] != -(mat2[i][j]))
            {
                flag++;
                i=x;
                break;
            }
        }
    }
    
    return flag;
}
