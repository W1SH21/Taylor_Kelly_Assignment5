#ifndef SORTING_H
#define SORTING_H

#include <vector>

class Sorting {
private:
    int comps;
    //value for holding the amount of comparisons made
    int SplitF(int data[], int first, int last);
    //helper for quicksortf
    int SplitR(int data[], int first, int last);
    //helper for quicksortr
    void Merge(int data[], int first, int middle, int last);
    //helper for mergesort
    void swap(int &num1, int &num2); //swaps the values in num1 and num2 (helper for heapsort and selection sort)
    void heapify(int data[], int first, int last, int current); //Helper for creating heap in array structure (heapsort)
    int QuickSortRRecurse(int data[], int first, int last); //Recursive method for QuickSortF
    int QuickSortFRecurse(int data[], int first, int last); //Recursive method for QuickSortR
    int MergeSortRecurse(int data[], int first, int last); //Recursive method for MergeSort
public:
    Sorting(); //constructor
  long long int SelecSort(int data[], int fist, int last);
    //implements selection sort algorithm
    int MergeSort(int data[], int first, int last);
    //implements merge sort algorithm
    int HeapSort(int data[], int first, int last);
    //implements heap sort algorithm
    int QuickSortF(int data[], int first, int last);
    //implements quicksort algorithm with first pivot
    int QuickSortR(int data[], int first, int last);
    //implements quicksort algorithm with random pivot
}; // sorting

#endif
