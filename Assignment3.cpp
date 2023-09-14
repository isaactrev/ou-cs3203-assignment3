// Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int productArray(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }
    return product;
}

int main()
{
    cout << "Hello World!\n";
}
