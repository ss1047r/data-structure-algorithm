#include <iostream>
using namespace std;

void moveZeros(int *arr, int size)
{
  int j = 0; // Pointer for the position of the last non-zero element
  for (int i = 0; i < size; i++)
  {
    // If the current element is not zero, we want to swap it with the element at index j
    if (arr[i] != 0)
    {
      // Swap only if i and j are different
      if (i != j)
      {
        swap(arr[i], arr[j]);
      }
      j++; // Increment the position of the last non-zero element
    }
  }
}

int main()
{
  int arr[5] = {0, 1, 0, 4, 12};
  int size = 5;

  moveZeros(arr, size); // Call the function to move zeros

  // Print the modified array
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}