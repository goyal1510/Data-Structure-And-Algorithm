#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        this->data = 0;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(node *&head, node *&tail, int data)
{
    // i want to insert at head or starting position
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
        head = newNode;
    }
}

void insertAtTail(node *&head, node *&tail, int data)
{
    // i want to insert at the end of ll
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

        tail = newNode;
    }
}
int findLength(node *head)
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
        insertAtHead(head, tail, data);
        return;
    }
    if (position >= findLength(head) + 1)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    node *curr = prev->next;

    node *newNode = new node(data);
    newNode->next = curr;
    prev->next = newNode;
}

void deleteNode(node *&head, node *&tail, int position)
{

    if (head == NULL)
    {
        cout << "LL is empty cannot delete " << endl;
        return;
    }

    if (position == 1)
    {

        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findLength(head);

    if (position == len)
    {
        node *prev = head;
        int i = 1;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        prev->next = NULL;
        node *temp = tail;
        tail = prev;
        delete temp;
        return;
    }
    int i = 1;
    node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    node *curr = prev->next;

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
int main(int argc, char const *argv[])
{

    node *head = NULL;
    node *tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 1000);
    print(head);

    cout << endl;
    insertAtPosition(head, tail, 1, 200);
    insertAtPosition(head, tail, 4, 3000);
    insertAtPosition(head, tail, 13, 2000);

    print(head);

    cout << endl;
    deleteNode(head, tail, 2);
    print(head);

    return 0;
}