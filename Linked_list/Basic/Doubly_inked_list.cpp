#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printNode(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(int argc, char const *argv[])
{

    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;
    node *head = first;
    printNode(head);

    return 0;
}
