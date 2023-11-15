#include <iostream>
#include <cstdlib> // for rand() function
#include <ctime>   // for seeding random numbers

using namespace std;

// Function prototypes
void fillArray(int arr[], int size);
void outputAllValues(const int arr[], int size);
void outputSumAndMean(const int arr[], int size);
void outputAllOddNumbers(const int arr[], int size);
void outputAllEvenNumbers(const int arr[], int size);
void outputMiddleValue(const int arr[], int size);
void outputFirstValue(const int arr[], int size);
void outputLastValue(const int arr[], int size);

int main() {
    const int arraySize = 500;
    int numbers[arraySize];
    fillArray(numbers, arraySize);

    int choice;
    do {
        cout << "Enter the operation number: \n";
        cout << "1. Output all values\n";
        cout << "2. Output Sum of All Values and Mean Average of Values\n";
        cout << "3. Output all odd numbers\n";
        cout << "4. Output all even numbers\n";
        cout << "5. Output Middle Values (Values in the Middle)\n";
        cout << "6. Output First Value in the Array\n";
        cout << "7. Output Last Value in the Array\n";
        cout << "8. Exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            outputAllValues(numbers, arraySize);
            break;
        case 2:
            outputSumAndMean(numbers, arraySize);
            break;
        case 3:
            outputAllOddNumbers(numbers, arraySize);
            break;
        case 4:
            outputAllEvenNumbers(numbers, arraySize);
            break;
        case 5:
            outputMiddleValue(numbers, arraySize);
            break;
        case 6:
            outputFirstValue(numbers, arraySize);
            break;
        case 7:
            outputLastValue(numbers, arraySize);
            break;
        case 8:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 8);

    return 0;
}
// Function to fill the array with random integers between 1 and 1000
void fillArray(int arr[], int size) {
    srand(time(0)); // Seed the random number generator
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000 + 1; // Random number between 1 and 1000
    }
}
// Function to output all values in the array
void outputAllValues(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Function to output the sum and mean of the values
void outputSumAndMean(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    double mean = static_cast<double>(sum) / size;

    cout << "Sum of all values: " << sum << endl;
    cout << "Mean average of values: " << mean << endl;
}
// Function to output all odd numbers in the array
void outputAllOddNumbers(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
// Function to output all even numbers in the array
void outputAllEvenNumbers(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
// Function to output values in the middle of the array (if array size is odd)
void outputMiddleValue(const int arr[], int size) {
    if (size % 2 != 0) {
        int middleIndex = size / 2;
        cout << "Middle value: " << arr[middleIndex] << endl;
    }
    else {
        cout << "The array size is even, so there is no middle value." << endl;
    }
}
// Function to output the first value in the array
void outputFirstValue(const int arr[], int size) {
    if (size > 0) {
        cout << "First value: " << arr[0] << endl;
    }
    else {
        cout << "The array is empty." << endl;
    }
}
// Function to output the last value in the array
void outputLastValue(const int arr[], int size) {
    if (size > 0) {
        cout << "Last value: " << arr[size - 1] << endl;
    }
    else {
        cout << "The array is empty." << endl;
    }
}
