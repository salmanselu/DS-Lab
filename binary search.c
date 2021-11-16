#include<stdio.h>
#include "DS.h"
void main(){
    int position = -1;
    int store;
    int list[50];
    int size;
    int temp;
    
    int largest;
    
    
  ////////////////////////////////////////////////////////////  
    printf("\nEnter the number of elements:");
    scanf("%d", &size);
    
    for(int i = 0; i < size; i++){
        
        printf("\nEnter number %d:", i+1);
        scanf("%d", &list[i]);
        
    
    }
    
  /////////////////////////////////////////////////////////////

  /////////////////////////////////////////////////////////////  
  
    int _size = size;
    largest = list[size - 1];
    for(int j = 0; j < _size; j++)
        for(int i = 0; i < _size; i++){
            if(list[i] > largest) {temp = largest; largest = list[i]; list[i] = temp;}
        }
   printf("\nThe sorted array is:");
   for(int i = 0; i < size; i++){
        
        printf("%d ", list[i]);
        
    
    } 
  /////////////////////////////////////////////////////////////    
    
    int low = 0;
    int high = size - 1 ;
    int mid = (high + low) / 2;
    printf("\nEnterthe element to be searched:");    
    scanf("%d", &store);
    
    while(low <= high){
    
    
        
        if(list[mid] < store){
            low = mid + 1;
        }
        else if(mid == store){
            printf("\nElement found at index %d", mid);
            break;
        }
        else high = mid - 1;
        
        mid = (low + high) / 2;
    
    }
    
    if(low > high) printf("\nThe number is not present in array");
    
}
