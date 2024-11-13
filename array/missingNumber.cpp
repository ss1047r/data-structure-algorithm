#include <iostream>
using namespace std;

int findMissingNumber(int *arr, int size)
{
  int n = size + 1;            // Adjust size to include the missing number
  int sum = (n * (n + 1)) / 2; // Sum of the first n natural numbers

  for (int i = 0; i < size; i++)
  {
    sum -= arr[i]; // Subtract each element in the array
  }
  return sum;
}

int main()
{
  int arr[] = {2, 4, 1, 6, 5, 3, 7};       // Array with a missing number
  int size = sizeof(arr) / sizeof(arr[0]); // Size of the array (n - 1)

  cout << "Missing number is: " << findMissingNumber(arr, size);
  return 0;
}
