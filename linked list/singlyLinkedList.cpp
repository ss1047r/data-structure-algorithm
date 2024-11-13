#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = nullptr; // Initialize head as nullptr

void insert(int x)
{
  Node *temp = new Node(); // Create a new node
  temp->data = x;
  temp->next = head; // New node points to the current head
  head = temp;       // Head is updated to point to the new node
}

void print()
{
  Node *temp = head;
  cout << "List is: ";
  while (temp != nullptr)
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL\n";
}

int main()
{
  int n, x;
  cout << "How many numbers? ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Enter the number: ";
    cin >> x;
    insert(x); // Insert at the beginning
    print();   // Print the list after each insertion
  }

  return 0;
}
