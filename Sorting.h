#ifndef SORTING_H
#define SORTING_H

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
public:
    Sorting(); //constructor
    int SelecSort(int data[], int first, int last);
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
