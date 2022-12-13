// Deletion in singly linked list
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void push(Node** head, int newData)
{
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = (*head);
	(*head) = newNode; 
}

void deleteNode(Node** head, int key)
{
	Node* temp = *head;
	Node* prev = NULL;
	if(temp!=NULL && temp->data==key)
	{
		*head = temp->next;
		delete temp;
		return;
	}
	else{
		while(temp!=NULL && temp->data!=key)
		{
			prev = temp;
			temp = temp->next;
		}
		if(temp==NULL)
		{
			return;
		}
		prev->next = temp->next;
		delete temp;
	}
}

void printlist(Node* node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	cout<<"Linked list created: "<<endl;
	printlist(head);
	
	deleteNode(&head, 4);
	cout<<"\nLinked list after deletion of 4: "<<endl;
	printlist(head);
	
	return 0;
}
