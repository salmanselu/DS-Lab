#include<stdio.h>

void main(){
    int position = -1;
    int store;
    int list[50];
    int size;
    
    printf("\nEnter the number of elements:");
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++){
        
        printf("\nEnter number %d:", i+1);
        scanf("%d", &list[i]);
        
    
    }
    
    printf("\nEnter the element to be searched:");    
    scanf("%d", &store);
    
    for(int i = 0; i < size; i++){
        
        position = list[i] == store ? i : position;
        
    
    }
    if(position == -1) printf("\nThe number is not present in array");
    else printf("\nThe number is present at index:%d", position);
}
