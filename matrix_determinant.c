#include<stdio.h>

void mat_read(int x,int[][x]);
void mat_display(int x,int[][x]);
void Det_order2(int x,int[][x]);
void Det_order3(int x,int[][x]);

int i,j,order,ch;

void main()
{
    printf("\tDeterminant of matrices of order 1, 2 & 3\n");
    
    //Determinant is only defined for square matrices
    
    int condition = 1;
    
    while(condition)
    {
        printf("\n   Matrices available: \n\n");
        printf("\t1. 1x1 Matrix\n");
        printf("\t2. 2x2 Matrix\n");
        printf("\t3. 3x3 Matrix\n");
        printf("\t4. Exit\n");
        
        
        printf("\n Enter the choice: ");
        scanf("%d",&ch);
        
        order = ch;
        
        int a[order][order];
    
        switch(ch)
        {
            case 1: printf("\n   Enter the elements of the matrix: \n");
                    mat_read(order,a);
                
                    printf("\n   Matrix: \n");
                    mat_display(order,a);
                
                    printf("\n   --> Determinant of the inputted 1x1 matrix: %d\n",a[0][0]);
                    break;
        
            case 2: printf("\n   Enter the elements of the matrix: \n");
                    mat_read(order,a);
                
                    printf("\n   Matrix: \n");
                    mat_display(order,a);
                
                    printf("\n   --> Determinant of the inputted 2x2 matrix: ");
                    Det_order2(order,a);
                    break;
        
            case 3: printf("\n   Enter the elements of the matrix: \n");
                    mat_read(order,a);
                
                    printf("\n   Matrix: \n");
                    mat_display(order,a);
                
                    printf("\n   --> Determinant of the inputted 3x3 matrix: ");
                    Det_order3(order,a);
                    break;
                    
            case 4: printf("\n   --> Exited the program\n");
                    condition = 0;
                    break;
                
            default: printf("\n   --> Invalid order, order must be 1, 2 or 3\n");
        }
    }
    
}

void mat_read(int x,int mat[][x])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            printf(" Element at index(%d,%d): ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void mat_display(int x,int mat[][x])
{
    printf("\n");
    
    for(i=0;i<x;i++)
    {
        printf("\t");
        for(j=0;j<x;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}

void Det_order2(int x,int mat[][x])
{
    int Det = mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1];
    
    printf("%d\n",Det);
}

void Det_order3(int x,int mat[][x])
{
    int A,B,C,Det;
    
    A = mat[0][0] * (mat[1][1] * mat[2][2] - mat[2][1] * mat[1][2]);
    B = mat[0][1] * (mat[1][0] * mat[2][2] - mat[2][0] * mat[1][2]);
    C = mat[0][2] * (mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1]);
    Det = A - B + C;
    
    printf("%d\n",Det);
}
