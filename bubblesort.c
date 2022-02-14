#include<stdio.h>

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
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j+1] = temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for(int i = 0; i < size; i++){ 
        printf("%d ", list[i]);  
    }
       
}
