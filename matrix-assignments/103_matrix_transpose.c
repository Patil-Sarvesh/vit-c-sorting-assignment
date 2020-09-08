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
void transpose(float X[MAX][MAX], float T[MAX][MAX], int rowX, int colX);

int main()
{

    float a[MAX][MAX], trans[MAX][MAX];
    int r, c;
    printf("Give rows and columns of matrix to be transposed : ");
    scanf("%d%d",&r,&c);

    //take first matrix
    printf("\nGive elements of the matrix : \n");
    input_matrix(a,r,c);

    //print first matrix
    printf("\nEntered matrix is:\n");
    display_matrix(a,r,c);

    transpose(a,trans,r,c);

    printf("\nTranspose of the entered matrix is:\n");
    display_matrix(trans,c,r);

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

void transpose(float X[MAX][MAX], float T[MAX][MAX], int rowX, int colX)
{
    int i,j;
    for(i = 0; i < rowX; i ++)
        for(j = 0; j < colX; j++)
            T[j][i] = X[i][j];
}


