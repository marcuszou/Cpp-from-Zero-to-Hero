#include <iostream>

using namespace std;

/* Sorting Algorithms:
 * - Bubble sort
 * - Selection sort
 * - Insertion sort
 * - Merge sort
 * - Quick sort
 */

// Function - Swap
void swap(int numbers[], int i, int j)
{
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

// Function - bubble sort
void sort(int numbers[], int size)
{   for(int pass = 0; pass < size; pass++)
    {
        for (int i = 1; i < size; i++)  // Starting from the second element
            if (numbers[i] < numbers[i-1])
                swap(numbers, i, i-1);
    }
}

int main() {
    cout << "Bubble Sorting Arrays: " << endl;
    int numbers[] = {30, 20, 10};
    sort(numbers, size(numbers));
    for(int number: numbers)
        cout << number << endl;

    return 0;
}
