#include <stdio.h>

void quickSort(int arr[], int st, int end)
{
    int pivot = st;
    int idx = st + 1, j = end;

    if (st >= end)
        return;

    while (idx <= j)
    {
        while (idx <= end && arr[idx] <= arr[pivot])
            idx++;
        while (arr[j] > arr[pivot])
            j--;
        if (idx < j)
        {
            int hold = arr[idx];
            arr[idx] = arr[j];
            arr[j] = hold;
        }
    }

    int temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;

    quickSort(arr, st, j - 1);
    quickSort(arr, j + 1, end);
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    display(arr, n);
    printf("\n");
    quickSort(arr, 0, 4);
    printf("\n");
    display(arr, n);

    return 0;
}