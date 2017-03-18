#include <iostream>
using namespace std;
#include <cstdlib>
#include "CP_InPut.h"

struct Node * Input()
{
	struct Node *head, *p, *q;
	head = p = q = NULL;
	p = (struct Node *)malloc(sizeof(struct Node));
	while (cin >> p->x >> p->y)
	{
		if (cin.eof())
			break;
		if (!head)
			head = p;
		else
		{
			q->next = p;
		}
		q = p;
		p = (struct Node *)malloc(sizeof(struct Node));
	}
	if (q)
	{
		q->next = NULL;
	}
	return head;
}
