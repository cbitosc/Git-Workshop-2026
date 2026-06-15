#include <iostream>
using namespace std;
/*
  Optimized Bubble Sort
 
  Improvement:
  If no swaps occur during a pass, the array is already sorted,
  so the algorithm terminates early.
 */
void bubbleSort(int arr[], int size)
{
    bool swapped;
    for (int pass = 0; pass < size - 1; pass++)
    {
        swapped = false;
        for (int index = 0; index < size - pass - 1; index++)
        {

            if (arr[index] > arr[index + 1])
            {

                // Swap adjacent elements
                int temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;

                swapped = true;
            }
        }
        // If no swaps occurred, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{

    int arr[] = {5, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}