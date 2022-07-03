// sorting-algo-practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

//creates a swap function
void swap(int a[], int x, int y) {

    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

//creates a selection sort function
void sort(int a[], int sizeA ){

    int i = 0;
    while (i < sizeA - 1) {

    //the array is passed in by reference, the current location, ending point( size of array)
        int j = locOfSmallest(a, i, sizeA - 1);
        swap(a, i, j);
        i++;
    }
}

//Loops through the entire array to get the smallest
int locOfSmallest(int a[], int start, int end) {
    int i = start;
    int j = end;

    while (i <= end) {

        //If j is bigger than i, swap the index
        if (a[i] < a[j]) {
            j = i;
        }
        i++;
    }
    
    return j;
}


//This function iterates through the array, printing out each element
void display(int a[], int sizeA) {
    int i = 0;
    while (i < sizeA) {
        cout << a[i] << ", ";
    }
    cout << endl;
}


int main()
{
    int numArray[MAX];
    int inputNum;
    cout << "Enter a number: ";
    cin >> inputNum;
    cout << endl;

    //This loop will populate the array by using the rand function
    for (int i = 0; i < inputNum; i++) {
        numArray[i] = rand();
    }
    int arrSize = sizeof(numArray) / sizeof(numArray[0]);
    cout << "The size of the array is: " << arrSize;

    display(numArray, arrSize);
    sort(numArray, arrSize);
    display(numArray, arrSize);

    return 0;
}

/**/



/*

 int inputNum;
    int arr[MAX];
    cout << "Enter a number: ";
    cin >> inputNum;
    cout << endl;

    /*This loop will populate the array by using the rand function
for (int i = 0; i < inputNum; i++) {
    arr[i] = rand();
}


cout << "Unsorted array: ";
//prints unsorted array
for (int i = 0; i < inputNum; i++) {
    cout << arr[i] << " ";
}

//sorting an array
for (int i = 0; i < inputNum; i++) {
    for (int j = i + 1; j < inputNum; j++) {

        //Ascending Order
        if (arr[j] < arr[i]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

cout << "\n\nSorted array in ascending order: ";
//prints sorted array
for (int i = 0; i < inputNum; i++) {
    cout << arr[i] << " ";
}

//sorting an array
for (int i = 0; i < inputNum; i++) {
    for (int j = i + 1; j < inputNum; j++) {

        //Descending Order
        if (arr[j] > arr[i]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

cout << "\n\nSorted array in descending order: ";
//prints sorted array
for (int i = 0; i < inputNum; i++) {
    cout << arr[i] << " ";
}

cout << endl << endl;

*/