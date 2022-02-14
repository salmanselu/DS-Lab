#include<stdio.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high){
    int pivot = array[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++){
        if(array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return i + 1;
}

void quicksort(int array[], int low, int high){
    if(low < high)
    {
        int pi = partition(array, low, high);
        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
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
    
    quicksort(list,0, size);
    
    printf("Sorted array is:\n");
    for(int i = 0; i < size; i++){ 
        printf("%d ", list[i]);  
    }
       
}
