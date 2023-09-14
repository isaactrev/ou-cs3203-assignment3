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

int main() {
    int size;

    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate an array to store the numbers
    int* arr = new int[size];

    // Ask the user to enter each number
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int sum_result = sumArray(arr, size);
    cout << "The sum of the array is: " << sum_result << endl;

    int product_result = productArray(arr, size);
    cout << "The product of the array is: " << product_result << endl;

    delete[] arr;
    //added a comment to commit for part 10
    return 0;
}
