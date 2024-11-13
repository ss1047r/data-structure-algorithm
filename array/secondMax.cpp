#include <iostream>
using namespace std;

int findSecondMaximum(int *arr, int size)
{
  int max = INT_MIN;
  int secondMax = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      secondMax = max;
      max = arr[i];
    }
    else if (arr[i] > secondMax && arr[i] != max)
    {
      secondMax = arr[i];
    }
  }
  return secondMax;
}

int main()
{
  int arr[6] = {12, 3, 6, 2, 9, 45};
  int size = 6;
  cout << findSecondMaximum(arr, size);

  return 0;
}