#include "customLib.h"

int findMin(int*arr, int start, int size){
    if(start>=size){
        return -1;
    }
    int minVal = arr[start];
    int index = start;
    for(int i = start+1;i<size;i++){
        if(arr[i]<minVal){
            minVal = arr[i];
            index = i;
        }
    }
    return index;
}