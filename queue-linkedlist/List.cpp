#include "stdafx.h"
#include "List.h"


List::List()
{
	head = NULL;
	curr = NULL;
}


List::~List()
{
}

void List::enqueue(int addnum)
{
	nodeptr n = new node;
	n->next = NULL;
	n->data = addnum;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = n;
	}
	else head = n;
}

void List::dequeue()
{
	curr = head;
	head = head->next;
	delete curr;
	curr = NULL;
	cout << "Number Dequeued" << endl;
}

void List::printqueue()
{
	cout << "List Look Like:-" << endl;
	curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}
