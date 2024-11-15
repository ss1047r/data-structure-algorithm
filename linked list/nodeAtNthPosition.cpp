#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head;

void insert(int data, int n)
{
  Node *temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL;
  if (n == 1)
  {
    temp1->next = head;
    head = temp1;
    return;
  }
  Node *temp2 = head;
  for (int i = 0; i < n - 2; i++)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void deleteList()
{
  Node *temp = head;
  while (temp != NULL)
  {
    Node *next = temp->next; // Save the next node
    delete temp;             // Free the current node
    temp = next;             // Move to the next node
  }
  head = NULL; // Reset head to NULL
}

void printList()
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  head = NULL;

  insert(2, 1);
  insert(3, 2);
  insert(4, 1);
  insert(5, 2);

  printList();

  deleteList();

  return 0;
}