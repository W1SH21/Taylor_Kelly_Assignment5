#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include "Sorting.h"

using namespace std;

int main(int argc, char* argv[]) {
    ifstream fin;
    fin.open(argv[1]); // read input file
    Sorting sorter = Sorting();
    int num;
    int* data = new int[10000];
    vector<int> dataVec;
    int count = 0;
    while (fin >> num) {
      data[count] = num;
      count++;
    }
    int first = 0;
    int last = count-1;
    fin.close();
    cout << "selection-sort (s) merge-sort (m) heap-sort (h) quick-sort-fp";
    cout << " (q) quick-sort-rp (r)" << endl;
    cout << "Enter the algorithm: ";
    string input;
    getline(cin, input);
    cout << endl;
    if (input == "s") {
      int calc = sorter.SelecSort(data, first, last);
        for (int count2 = first; count2 <= last; count2++) {
            cout << data[count2] << " ";
	} // print the sorted array
	cout << endl;
        cout << "#Selection-sort comparisons: " << calc << endl;
    } else if (input == "m") {
        cout << "check343" << endl;
        int calc = sorter.MergeSort(data, first, last);
        for (int count2 = first; count2 <= last; count2++) {
            cout << data[count2] << " ";
        } // print the sorted array
        cout << endl;
        cout << "#Merge-sort comparisons: " << calc << endl;
    } else if (input == "h") {
        int calc = sorter.HeapSort(data, first, last);
        for (int count2 = first; count2 <= last; count2++) {
            cout << data[count2] << " ";
        } // print the sorted array
        cout << endl;
        cout << "#Heap-sort comparisons: " << calc << endl;
    } else if (input == "q") {
        int calc = sorter.QuickSortF(data, first, last);
        for (int count2 = first; count2 <= last; count2++) {
            cout << data[count2] << " ";
        } // print the sorted array
        cout << endl;
        cout << "#Quick-sort-fp comparisons: " << calc << endl;
    } else if (input == "r") {
        int calc = sorter.QuickSortR(data, first, last);
        for (int count2 = first; count2 <= last; count2++) {
            cout << data[count2] << " ";
        } // print the sorted array
        cout << endl;
        cout << "#Quick-sort-rp comparisons: " << calc << endl;
    }//if
    delete[] data;
} // main
