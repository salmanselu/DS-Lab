#include<stdio.h>

void main()
{
    int list[100], n;
    
    //// List Input ////
    printf("Enter number of elements in list:");
    scanf("%d", &n);
    printf("Enter the list elements:");
    for(int i = 0; i < n; i++){
        scanf("%d", &list[i]);
    }
    ////////////////////
    
    ///// Sorting //////
    int temp;
    for(int i = 0; i < n - 1 ; i++)
        for(int j = i; j < n - i - 1; j++)
            if(list[i]>list[j]){
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
    printf("\n The sorted array:");
    for(int i = 0; i < n ; i++) printf("%d ", list[i]);    
    
    ////////////////////
    int search;
    printf("Enter number to be searched:");
    scanf("%d", &search);
    
    // Binary Search //
    int low = 0;
    int high = n - 1;
    int pos = -1;
    while(low<high){
        int mid = (high + low) / 2;
        if(list[mid] == search) {pos = mid; break;}
        else if(list[mid]<search) low = mid + 1;
        else high = mid - 1;
    } 
    
    if(pos==-1) printf("\n Number is not present in array");
    else printf("\n Number is at index: %d",pos);   
}
