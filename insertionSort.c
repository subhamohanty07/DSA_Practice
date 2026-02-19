#include<stdio.h>

void InsertionSort(int arr[], int n){

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i-1;

        while (prev >= 0 && arr[prev]>curr)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
        
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
    InsertionSort(arr, n);
    printf("\n");
    display(arr, n);

    return 0;

}