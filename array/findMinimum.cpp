#include <iostream>
using namespace std;

int findMinimum(int *arr, int size)
{

  int min = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}

int main()
{
  int arr[5] = {12, 3, 6, 2, 9};
  int size = 5;

  cout << findMinimum(arr, size);

  return 0;
}