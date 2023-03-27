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

void Sort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        step(arr, N, i);
 
    for (int i = N - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        step(arr, i, 0);
    }
}

void print(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[] = { 2, 10, 4, 3, 9, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, N);
    cout << "Sorted array is \n";
    printArray(arr, N);
}
