#include<stdio.h>

void SelectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int smallestIdx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        int hold = arr[i];
        arr[i] = arr[smallestIdx];
        arr[smallestIdx] = hold;
    }
    
}

int display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    display(arr, n);
    printf("\n");
    SelectionSort(arr, n);
    printf("\n");
    display(arr, n);

    return 0;

}