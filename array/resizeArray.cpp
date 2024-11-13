#include <iostream>
using namespace std;

int *resizeArray(int *arr, int oldSize, int newSize)
{
  int *newArr = new int[newSize];
  int minSize = (oldSize < newSize) ? oldSize : newSize;

  // Copy old elements to the new array
  for (int i = 0; i < minSize; i++)
  {
    newArr[i] = arr[i];
  }

  // Initialize the rest of the new array if it's larger
  for (int i = minSize; i < newSize; i++)
  {
    newArr[i] = 0; // or some default value
  }

  // Free the old array
  delete[] arr;

  return newArr;
}

int main()
{
  int size = 5;
  int *arr = new int[size]{1, 2, 3, 4, 5};

  // Resize the array
  int newSize = 8;
  arr = resizeArray(arr, size, newSize);

  // Print the resized array
  for (int i = 0; i < newSize; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Clean up
  delete[] arr;

  return 0;
}
