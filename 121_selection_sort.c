/*
Division : C
Roll number: 71
Name: Varun Ringnekar
Date: 07/09/2020
*/

#include<stdio.h>
# define MAX 64

void accept_numbers(float X[MAX], int n);
void display_numbers(float X[MAX], int n);
void selection_sort(float X[MAX], int n);
void swap(int *xp, int *yp);

int main()
{
    int n;
    int arr[MAX];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Give Elements of the array: \n");
    input_numbers(arr, n);

    printf("Entered numbers are: \n");
    display_numbers(arr, n);

    printf("Numbers after going through selection sort: \n");
    selection_sort(arr, n);
    display_numbers(arr, n);
}

void input_numbers(float X[MAX], int n)
{
    int i;
    for (i = 0; i < n; i ++)
    {
        printf("Enter matrix element [%d]: ", i+1);
        scanf("%f", &X[i]);
    }
    printf("\n");
}

void display_numbers(float X[MAX], int n)
{
    int i;
    for (i = 0; i < n; i ++)
        printf("%10.2f\n", X[i]);
}

void swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(float X[MAX], int n)
{
    int i, j, min_loc;
    for(i = 0; i < n - 1; i ++)
    {
        min_loc = i;
        for(j = i + 1; j < n; j ++)
            if(X[j] < X[min_loc])
                    min_loc = j;
        swap(&X[min_loc], &X[i]);
    }
}

