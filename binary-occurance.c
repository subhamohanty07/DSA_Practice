#include<stdio.h>
int leftMost(int arr[], int key, int size)
{
    int l=0, h= size-1, mid, idx= -1;
    while(l<=h){
        mid = l+(h-l)/2;
        if(arr[mid]==key){
            idx = mid;
             h = mid - 1;
        }
        else if(arr[mid]<key)
             l = mid + 1;
        else{ 
            h = mid -1;
        }
    }
    return idx;
}
int rightMost(int arr[], int key, int size){
    int l=0, h = size-1, mid, idx = -1;
    while (l<=h)
    {
        mid = l + (h - l) / 2;
        if(arr[mid]==key){
            idx = mid;
            l = mid+1;
        }
        else if(arr[mid]<key)
            l = mid+1;
        else
            h = mid - 1;
    }
    return idx;    
}

int main(){
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted elements in the array:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number you want to search: ");
    scanf("%d", &key);
    int first = leftMost(arr,key,n);
    int second = rightMost(arr, key, n);
    printf("Number of occurrences of %d is : %d", key, (second-first)+1);

    return 0;
    
}