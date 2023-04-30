#include<iostream>
#include<array>
#include "customLib.h"

void selectionSort(int arr[] ,int size){
    for(int i=0;i<size-1;i++){
        int minIndex = findMin(arr,i,size);
        if(minIndex!=i){
            cSwap(arr[i],arr[minIndex]);
        }
    }
}





