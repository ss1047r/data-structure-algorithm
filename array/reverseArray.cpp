#include <iostream>
using namespace std;

void reverseArray(int* arr, int size)
{

  int start = 0;
  int end = size - 1;
  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void printArray(int* arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[5] = {2, 3, 4, 5, 6};
  int size = 5;

  cout << "Original Array : ";
  printArray(arr, size);

  cout << endl;

  reverseArray(arr, size);
  cout << "Reversed Array : ";
  printArray(arr, size);

  return 0;
}