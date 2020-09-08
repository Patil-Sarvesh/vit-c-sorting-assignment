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
void addition(float X[MAX][MAX], float Y[MAX][MAX], float S[MAX][MAX], int rows, int cols);

int main()
{

    float a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];
    int r,c;
    printf("Give rows and columns of matrix to be added : ");
    scanf("%d%d",&r,&c);

    //take first matrix
    printf("\nGive elements of first matrix : \n");
    input_matrix(a,r,c);

    //take second matrix
    printf("\nGive elements of second matrix : \n");
    input_matrix(b,r,c);

    //print first matrix
    printf("\nEntered first matrix is:\n");
    display_matrix(a,r,c);

    //print second matrix
    printf("\nEntered second matrix is:\n");
    display_matrix(b,r,c);

    addition(a,b,sum,r,c);

    //print resultant matrix
    printf("\nAddition of both Matrices is:\n");
    display_matrix(sum,r,c);

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

void addition(float X[MAX][MAX], float Y[MAX][MAX], float S[MAX][MAX], int rows, int cols)
{
    int i, j;

    //Add both matrices
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            S[i][j] = X[i][j] + Y[i][j];
        }
    }
}
