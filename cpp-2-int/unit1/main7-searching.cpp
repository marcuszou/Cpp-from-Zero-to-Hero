#include <iostream>

using namespace std;

/*
 * Searching Arrays
 * Search Algorithms
 * Linear search
 * Binary Search
 * Ternary search
 * Jump search
 * Exponential search
 */

// Function
int find(int numbers[], int size, int target)
{
    for (int i = 0; i < size; i++)
        if (numbers[i] == target)
            return i;
    return -1;
}

int main() {
    cout << "Searching Arrays: " << endl;
    int values[] = {10, 20, 30};
    cout << find(values, size(values), 0) << endl;

    return 0;
}
