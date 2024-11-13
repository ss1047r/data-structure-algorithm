#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name = "12321";

  string reverse = string(name.rbegin(), name.rend());

  if (name == reverse)
  {
    cout << "palindrome";
  }
  else
  {
    cout << "Not a palindrome";
  }
  return 0;
}