// Insertion in singly linkedlist
#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

void push(node **head, int newdata)
{
	node* newnode = new node();
	newnode->data = newdata;
	newnode->next = (*head);
	(*head) = newnode;
}

void insertAfter(node* prevNode, int newdata)
{
	if(prevNode==NULL)
	{
		cout<<"The node cannot be null"<<endl;
		return;
	}
	node* newNode = new node();
	newNode->data = newdata;
	newNode->next = prevNode->next;
	prevNode->next = newNode;
}

void append(node** head, int newData)
{
	node* newNode = new node();
	node* last = *head;
	newNode->data = newData;
	newNode->next = NULL;
	if(*head==NULL)
	{
		*head-newNode;
		return;
	}
	while(last->next!=NULL)
	{
		last = last->next;
		last->next = newNode;
		return;
	}
}

void printList(node* node)
{
	while(node!=NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main()
{
	node* head = NULL;
	append(&head, 1);
	push(&head, 2);
	push(&head, 3);
	insertAfter(head->next, 4);
	
	cout<<"Linkedlist: "<<endl;
	printList(head);
	return 0;
}
