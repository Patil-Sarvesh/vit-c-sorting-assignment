/*
Division : C
Roll number: 71
Name: Varun Ringnekar
Date: 08/09/2020
*/


#include<stdio.h>
# define MAX 10

void input_matrix(float X[MAX][MAX],int rows, int cols);
void display_matrix(float X[MAX][MAX],int rows,int cols);
void multiplication(float X[MAX][MAX], float Y[MAX][MAX], float M[MAX][MAX], int rowX, int colX, int colY);

int main()
{

    float a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int row_a,col_a,row_b,col_b,row_c,col_c;

    printf("Give rows of first matrix    : ");
    scanf("%d",&row_a);
    printf("Give columns of first matrix : ");
    scanf("%d",&col_a);

    row_b = col_a;
    printf("\nRows of second matrix must be : %d", row_b);

    printf("\nGive columns of second matrix : ");
    scanf("%d",&col_b);

    row_c = row_a;
    col_c = col_b;

    //take first matrix
    printf("\nGive elements of first matrix : \n");
    input_matrix(a,row_a,col_a);

    //take second matrix
    printf("\nGive elements of second matrix : \n");
    input_matrix(b,row_b,col_b);

    //print first matrix
    printf("\nEntered first matrix is:\n");
    display_matrix(a,row_a,col_a);

    //print second matrix
    printf("\nEntered second matrix is:\n");
    display_matrix(b,row_b,col_b);

    multiplication(a,b,c,row_a,col_a,col_b);

    //print resultant matrix
    printf("\nMultiplication of both Matrices is:\n");
    display_matrix(c,row_c,col_c);

    return 0;
}

void input_matrix(float X[MAX][MAX],int rows, int cols)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("Enter matrix element [%d][%d]:",i+1,j+1);
            scanf("%f",&X[i][j]);
        }
    printf("\n");
    }
}

void display_matrix(float X[MAX][MAX],int rows,int cols)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%10.2f\t",X[i][j]);
        }
        printf("\n");
    }

}


void multiplication(float X[MAX][MAX], float Y[MAX][MAX], float M[MAX][MAX], int rowX, int colX, int colY)
{
    int i, j, k;
    // Initializing result matrix as zero matrix
    for( i = 0; i < rowX; i++)
    {
        for(j = 0; j < colY; j++)
        {
            M[i][j] = 0;
        }
    }

    //multiplying the matrices

    for(i = 0; i<rowX; i++)
    {
        for(j = 0; j <colY;j++)
        {
            for(k = 0; k < colX; k ++)
            {
                M[i][j] += X[i][k] * Y[k][j];
            }
        }
    }
}
