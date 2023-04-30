#ifndef CUSTOMLIB_H
#define CUSTOMLIB_H

//need to compile main.cpp and cSwap.cpp i.e. g++ -o main.exe main.cpp cSwap.cpp
//that means need to make cSwap.cpp file and declare + implementation function cSwap
void cSwap(int &a, int &b);
int findMin(int*arr, int start, int size);
void selectionSort(int arr[] ,int size);

//just compile main.cpp i.e. g++ -o main.exe main.cpp
//don't need to make cSwap.cpp file becoz cSwap declare and already implementation in .h
// void cSwap(int &a, int &b){
//     int temp = a;
//     a=b;
//     b=temp;
// }

#endif