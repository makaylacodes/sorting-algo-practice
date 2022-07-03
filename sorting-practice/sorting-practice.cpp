// sorting-algo-practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main()
{
    int inputNum;
    int arr[MAX];
    cout << "Enter a number: ";
    cin >> inputNum;
    cout << endl;

    /*This loop will populate the array by using the rand function*/
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
    return 0;
}



