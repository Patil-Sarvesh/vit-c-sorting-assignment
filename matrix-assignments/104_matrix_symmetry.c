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
int is_symmetric(float X[MAX][MAX], int size);

int main()
{

    float a[MAX][MAX];
    int size, symmetric;
    printf("Give size of square matrix to be checked : ");
    scanf("%d",&size);

    //take first matrix
    printf("\nGive elements of first matrix : \n");
    input_matrix(a,size,size);

    //print first matrix
    printf("\nEntered first matrix is:\n");
    display_matrix(a,size,size);

    symmetric = is_symmetric(a, size);

    if(symmetric == 1){
        printf("It is symmetric");
    }else{
        printf("It is not symmetric");
    }

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


int is_symmetric(float X[MAX][MAX], int size)
{
    int i,j, symmetric;
    for(i = 0; i <size; i ++)
        for(j = 0; j < size; j ++)
        {
            if(X[i][j] == X[j][i])
            {
                symmetric = 1;
            }else{
                symmetric = 0;
                break;
            }
        }
    return symmetric;
}
