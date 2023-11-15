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

void insertAtStart(node *&head, node *&tail, int data)
{

    if (head == NULL)
    {
        node *newNode = new node(data);
        head = newNode;
        tail = newNode;
    }

    else
    {
        node *newNode = new node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
int getLength(node *head)
{

    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void insertAtend(node *&head, node *&tail, int data)
{
    if (head == NULL)
    {
        node *newNode = new node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        node *newNode = new node(data);

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(node *&head, node *&tail, int position, int data)
{

    if (head == NULL)
    {
        node *newNode = new node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 1)
    {
        insertAtStart(head, tail, data);
        return;
    }

    int len = getLength(head);
    if (position >= len + 1)
    {
        insertAtend(head, tail, data);
        return;
    }

    int i = 1;
    node *prevNode = head;
    while (i < position - 1)
    {
        prevNode = prevNode->next;
        i++;
    }
    node *curr = prevNode->next;

    node *newNode = new node(data);

    newNode->next = curr;
    curr->prev = newNode;
    prevNode->next = newNode;
    newNode->prev = prevNode;
}

void deleteAtStart(node *&head, node *&tail)
{

    if (head == NULL)
    {
        cout << "The LL is empty " << endl;
    }
    else
    {

        node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
}

void deleteAtEnd(node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "The LL is empty " << endl;
    }
    else
    {
        int len = getLength(head);
        int i = 1;
        node *prevNode = head;
        node *temp = tail;
        while (i < len - 1)
        {
            prevNode = prevNode->next;
            i++;
        }
        node *curr = prevNode->next;

        prevNode->next = NULL;
        curr->prev = NULL;
        tail = prevNode;
    }
}
void deleteAtPosition(node *&head, node *&tail, int position)
{

    if (head == NULL)
    {
        cout << "LL is already empty ";
    }
    else if (position == 1)
    {
        deleteAtStart(head, tail);
    }
    else if (position == getLength(head))
    {
        deleteAtEnd(head, tail);
    }
    else
    {
        int i = 1;
        node *prevNode = head;
        while (i < position - 1)
        {
            prevNode = prevNode->next;
            i++;
        }
        node *curr = prevNode->next;

        node *temp = curr;
        prevNode->next = curr->next;
        curr->next->prev = prevNode;
        temp->next = NULL;
        temp->prev = NULL;

        delete temp;
    }
}
int main(int argc, char const *argv[])
{

      node *head = NULL;
    node *tail = NULL;

    insertAtStart(head, tail, 1);
    insertAtStart(head, tail, 2);
    insertAtend(head, tail, 3);
    printNode(head);
    cout << endl;
    insertAtPosition(head, tail, 1, 4);
    printNode(head);
    cout << endl;
    insertAtPosition(head, tail, 5, 5);
    printNode(head);
    cout << endl;
    insertAtPosition(head, tail, 2, 6);
    printNode(head);
    cout << endl;

    deleteAtStart(head, tail);
    printNode(head);
    cout << endl;

    deleteAtEnd(head, tail);
    printNode(head);
    cout << endl;
    deleteAtPosition(head, tail, 2);
    printNode(head);
    cout << endl;
    return 0;
}
