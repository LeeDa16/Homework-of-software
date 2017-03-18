#ifndef CP_INPUT_H
#define CP_INPUT_H

struct Node
{
	int x;
	int y;
	struct Node *next;
};

extern struct Node *Input();

#endif // !CP_INPUT_H
#pragma once
