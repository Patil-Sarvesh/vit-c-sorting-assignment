/*
Name : Sarvesh Patil.
Division : C.
Roll no. : 30.
Date : 06/09/2020.

Program For Sorting With Insertion Sort.
*/

#include<stdio.h>
# define MAX 64

void accept_numbers(float X[MAX], int n);
void display_numbers(float X[MAX], int n);
void insertion_sort(float X[MAX], int n);
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

    printf("Numbers after going through insertion sort: \n");
    insertion_sort(arr, n);
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

void insertion_sort(float X[MAX], int n)
{
    int i, j;

    for(i = 1; i <= n - 1; i ++)
    {
        j = i;
        while(j > 0 && X[j - 1] > X[j])
        {
            swap(&X[j - 1], &X[j]);
            j--;
        }
    }
}
