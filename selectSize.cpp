#include "Sorting.h"
#include <iostream>
#include <random>
#include <string>
#include <ctime>

using namespace std;



void printArr(int arr[], int size) {
  for (int i = 0; i < size; i ++) {
    cout << arr[i] << " ";
  } //for
  cout << "\n" << endl;
} //printArr

int main() {  
  string input;
  int size;
  Sorting sorter = Sorting();
  bool printArrs = false;
  cout << "Enter an array size" << endl;
  cin >> size;
  cout << "Print the Arrays? Y/N" << endl;
  cin >> input;
  if (input == "Y") {
    printArrs = true;
  } //it
  input = "";
  int first = 0;
  int last = size - 1;
  int* data = new int[size]();
  cout << "selection-sort (s) merge-sort (m) heap-sort (h) quick-sort-fp";
  cout << " (q) quick-sort-rp (r)" << endl;
  cout << "Enter the algorithm: ";
  cin >> input;
  cout << endl;

  random_device device;
  mt19937 rng(device());
  uniform_int_distribution<int> dist(0, 1000000);
  long long int avgSize = 10;
  int counts[10];
  
  if (input == "s") {
    int avg = 0;
    for (int i = 0; i < avgSize; i ++) {
      for (int j = 0; j < size; j ++) {
	data[j] = dist(rng);
      } //for
      counts[i] = sorter.SelecSort(data, first, last);
      if (printArrs) {
	printArr(data, size);
      } //if
      avg += counts[i];
    } //for
    for (int i = 0; i < avgSize; i ++) {
      cout << "Trial#" << (i + 1) << ": " << counts[i] << endl;
    } //for
    avg /= avgSize;
    cout << "Average: " << avg << endl;
  } else if (input == "m") {
    int avg = 0;
    for (int i = 0; i < avgSize; i ++) {
      for (int j = 0; j < size; j ++) {
        data[j] = dist(rng);
      } //for
      counts[i] = sorter.MergeSort(data, first, last);
      if (printArrs) {
        printArr(data, size);
      } //if
      avg += counts[i];
    } //for
    for (int i = 0; i < avgSize; i ++) {
      cout << "Trial#" << (i + 1) << ": " << counts[i] << endl;
    } //for
    avg /= avgSize;
    cout << "Average: " << avg << endl;

  } else if (input == "h") {
    int avg = 0;
    for (int i = 0; i < avgSize; i ++) {
      for (int j = 0; j < size; j ++) {
        data[j] = dist(rng);
      } //for
      counts[i] = sorter.HeapSort(data, first, last);
      if (printArrs) {
        printArr(data, size);
      } //if
      avg += counts[i];
    } //for
    for (int i = 0; i < avgSize; i ++) {
      cout << "Trial#" << (i + 1) << ": " << counts[i] << endl;
    } //for
    avg /= avgSize;
    cout << "Average: " << avg << endl;

  } else if (input == "q") {
    int avg = 0;
    for (int i = 0; i < avgSize; i ++) {
      for (int j = 0; j < size; j ++) {
        data[j] = dist(rng);
      } //for
      counts[i] = sorter.QuickSortF(data, first, last);
      if (printArrs) {
        printArr(data, size);
      } //if
      avg += counts[i];
    } //for
    for (int i = 0; i < avgSize; i ++) {
      cout << "Trial#" << (i + 1) << ": " << counts[i] << endl;
    } //for
    avg /= avgSize;
    cout << "Average: " << avg << endl;
  } else if (input == "r") {
    int avg = 0;
    for (int i = 0; i < avgSize; i ++) {
      for (int j = 0; j < size; j ++) {
        data[j] = dist(rng);
      } //for
      counts[i] = sorter.QuickSortR(data, first, last);
      if (printArrs) {
        printArr(data, size);
      } //if
      avg += counts[i];
    } //for
    for (int i = 0; i < avgSize; i ++) {
      cout << "Trial#" << (i + 1) << ": " << counts[i] << endl;
    } //for
    avg /= avgSize;
    cout << "Average: " << avg << endl;
  } //if
  delete[] data;
} //main

