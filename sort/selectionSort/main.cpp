#include<iostream>
#include "customLib.h"

extern void printArr(int* arr, int size);
using namespace std;

int main(){
    int arr[5]={5,3,1,2,4};
    int len = end(arr)-begin(arr);
    selectionSort(arr,len);
    printArr(arr,len);
    return 0;
}