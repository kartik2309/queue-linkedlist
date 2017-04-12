// queue-linkedlist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"List.h"

List* list = new List;

int main()
{
	char i; int num;
	while (true) {
		cout << "Press'e' to enqueue,'d' to dequeue,'p' to print,'x' to stop:";
		cin >> i;
		if (i == 'e') {
			cout << "Enter the number you want to enqueue:";
			cin >> num;
			list->enqueue(num);
		}
		else if (i == 'd') {
			list->dequeue();
		}
		else if (i == 'p') {
			list->printqueue();
		}
		else if (i == 'x') {
			list->printqueue();
			break;
		}
		else cout << "Invalid Input!Try Again!" << endl;
	}
	system("Pause");
    return 0;
}

