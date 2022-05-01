#include "Sorting.h"
#include <iostream>

using namespace std;

Sorting::Sorting() {
    comps = 0;
} //constructor

int Sorting::SelecSort(int data[], int first, int last) {
    return comps;
} //SelecSort()

int Sorting::MergeSort(int data[], int first, int last) {
    if (last > first) {
        int half = first + (last-first)/2;
        cout << half << endl;
        MergeSort(data, first, half);
        MergeSort(data, half+1, last);
        Merge(data, first, half, last);
    }
    return comps;
} //MergeSort()

void Sorting::Merge(int data[], int first, int half, int last) {
    int subarr1 = half-first+1;
    int subarr2 = last-half;
    int temp1[100000];
    int temp2[100000];
    for (int count = 0; count < subarr1; count++) {
        temp1[count] = data[count+first];
    }
    for (int count = 0; count < subarr2; count++) {
        temp2[count] = data[count+half+1];
    }
    int temp1i = 0;
    int temp2i = 0;
    int datai = first;
    while ((temp1i < subarr1) && (temp2i < subarr2)) {
        if (temp1[temp1i] <= temp2[temp2i]) {
            data[datai] = temp1[temp1i];
            temp1i++;
        } else {
            data[datai] = temp2[temp2i];
            temp2i++;
        }
        datai++;
        comps++;
    }
    while (temp1i < subarr1) {
        data[datai] = temp1[temp1i];
        temp1i++;
        datai++;
    }
    while (temp2i < subarr2) {
        data[datai] = temp2[temp2i];
        temp2i++;
        datai++;
    }
} //Merge

int Sorting::HeapSort(int data[], int first, int last) {
    return comps;
} //HeapSort()

int Sorting::QuickSortF(int data[], int first, int last) {
    if (first < last) {
        int splitPoint; // pivot
        splitPoint = SplitF(data, first, last);
        QuickSortF(data, first, splitPoint-1);
        QuickSortF(data, splitPoint+1, last);
    }
    return comps;
} //QuickSortF()

int Sorting::QuickSortR(int data[], int first, int last) {
    if (first < last) {
        int splitPoint; // pivot
        splitPoint = SplitR(data, first, last);
        QuickSortR(data, first, splitPoint-1);
        QuickSortR(data, splitPoint+1, last);
    }
    return comps;
} //QuickSortR()

int Sorting::SplitF(int data[], int first, int last) {
    int pivot = data[first];
    int i = first, j = last;
    int pivotPoint;
    while (i < j) {
        while (data[i] <= pivot) {
            i++;
            comps++;
        }
        while (data[j] > pivot) {
            j--;
            comps++;
        }
        //"walk" the array to find the first values greater than/less than
        //the pivot
        if (i < j) {
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        } else {
            int temp = data[first];
            data[first] = data[j];
            data[j] = temp;
            pivotPoint = j;
        }
        //swap data points
    }
    return pivotPoint;
} // SplitF()

int Sorting::SplitR(int data[], int first, int last) {
    int random = rand() % (last-first) + first;
    int swap = data[first];
    data[first] = data[random];
    data[random] = swap;
    int pivot = data[first];
    int i = first, j = last;
    int pivotPoint;
    while (i < j) {
        while (data[i] <= pivot) {
            i++;
            comps++;
        }
        while (data[j] > pivot) {
            j--;
            comps++;
        }
        //"walk" the array to find the first values greater than/less than
        //the pivot
        if (i < j) {
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        } else {
            int temp = data[first];
            data[first] = data[j];
            data[j] = temp;
            pivotPoint = j;
        }
        //swap data points
    }
    return pivotPoint;
} // SplitR()
