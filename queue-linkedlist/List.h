#pragma once
#include<iostream>

using namespace std;

class List
{
	typedef struct node {
		int data;
		node* next;
	}*nodeptr;
	nodeptr head, curr;
public:
	List();
	~List();
	void enqueue(int);
	void dequeue();
	void printqueue();
};

