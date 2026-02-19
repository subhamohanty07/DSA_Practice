#include<stdio.h>

int maximum (int arr[], int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
            max = arr[i];
    }
    return max;
}

void countSort(int arr[], int n){
    int max = maximum(arr, n);
    int count[max+1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    int idx = 0;
    for (int i = 0; i <= max; i++)
    {
        while (count[i]>0)
        {
            arr[idx++] = i;
            count[i]--;
        }
        
    }
}

int display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    int n = 7;
    int arr[] = {1, 2, 1, 2, 3, 1, 3, 2}
;
    display(arr, n);
    printf("\n");
    countSort(arr, n);
    printf("\n");
    display(arr, n);

    return 0;

}