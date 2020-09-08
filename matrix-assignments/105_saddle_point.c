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
void saddle_point(float X[MAX][MAX],int rows, int cols);

int main()
{

    float a[MAX][MAX];
    int r,c;
    printf("Give rows and columns of matrix to be checked : ");
    scanf("%d%d",&r,&c);

    //take first matrix
    printf("\nGive elements of the matrix : \n");
    input_matrix(a,r,c);

    //print first matrix
    printf("\nEntered matrix is:\n");
    display_matrix(a,r,c);

    saddle_point(a,r,c);

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
            printf("%10.2f\t",X[i][j]);
        printf("\n");
    }

}

void saddle_point(float X[MAX][MAX],int rows, int cols)
{
    int i, j, k, min_row, col_ind, saddle;

    saddle = 0;

    for(i = 0; i < rows; i++)
    {
        min_row = X[i][0];
        col_ind = 0;
        for(j = 1; j < cols; j++)
        {
            if(min_row > X[i][j])
            {
                min_row = X[i][j];
                col_ind = j;
            }
        }

        for(k = 0; k < rows; k++)
            if(min_row < X[k][col_ind])
                break;

        if(k == rows)
        {
            saddle = 1;
            printf("\nSaddle Point is: %d\n", min_row);
            printf("\nPosition of saddle point is: {%d, %d}\n", i, col_ind);
            break;
        }
    }

    if (i == rows && saddle == 0)
        printf("\nThere is no saddle point\n");

}
