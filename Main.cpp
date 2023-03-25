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

void step(int arr[], int N, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    
    if (l < N && arr[l] > arr[largest])
    {
        largest = l;
    }
    
    if (r < N && arr[r] > arr[largest])
    {
        largest = r;
    }
    
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        step(arr, N, largest);
    }
}
