#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 2, 10, 4, 3, 9, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, N);
    cout << "Sorted array is \n";
    printArray(arr, N);
}
