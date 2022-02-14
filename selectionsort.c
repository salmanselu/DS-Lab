#include<stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[], int n){
    int i, j, min_idx;
    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(j = i+1; j<n; j++)
        if(arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx],&arr[i]);
    }
}

void main(){
 
    int list[50];
    int size;
    
    printf("\nEnter the number of elements:");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){ 
        printf("\nEnter number %d:", i+1);
        scanf("%d", &list[i]);  
    }
    printf("Entered array is:\n");
    for(int i = 0; i < size; i++){ 
        printf("%d ", list[i]);  
    }
    
    selectionsort(list,size);
    
    printf("Sorted array is:\n");
    for(int i = 0; i < size; i++){ 
        printf("%d ", list[i]);  
    }
       
}
