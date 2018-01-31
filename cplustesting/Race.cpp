#include "stdafx.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include "Race.h"

using namespace std;

struct node {
	Car *c;
	struct node *next;
};

struct node *root;

Race::Race()
{
	count = 0;
}

Race::Race(string name)
{
	this->name = name;
	count = 0;
}

int Race::AddRacer(Car *racer)
{
	struct node *cur;
	if (count == 0)
	{
		root = (struct node*)malloc(sizeof(struct node));
		root->c = racer;
		root->next = 0;
	}
	else
	{
		cur = root;
		if (cur != 0)
		{
			while (cur->next != 0)
			{
				cur = cur->next;
			}
		}
		cur->next = (struct node*)malloc(sizeof(struct node));
		cur = cur->next;
		cur->c = racer;
		cur->next = 0;
	}
	count++;
	return count;
}

int Race::Continue()
{
	struct node *cur = root;
	int i = 0;
	while(cur != 0)
	{
		cur->c->Move();
		cur = cur->next;
		i++;
	}
	return i;
}

int Race::ListRacers()
{
	struct node *cur = root;
	int i = 0;
	cout << "Racers: " << endl;
	while (cur != 0)
	{
		cout << "\t" << cur->c->GetName() << endl;
		cur = cur->next;
		i++;
	}
	return i;
}

bool Race::CleanUp()
{
	struct node *cur = root;
	struct node *cur2;
	while (cur != 0)
	{
		cur2 = cur;
		cur = cur->next;
		free(cur2);
	}
	root = 0;
	count = 0;
	return true;
}

Car* Race::GetWinner()
{
	Car *winner = 0;
	int current = 0;
	int n = 0;

	struct node *cur = root;

	while (cur != 0)
	{
		n = cur->c->GetLocation();
		if (n > current)
		{
			current = n;
			winner = cur->c;
		}
		cur = cur->next;
	}
	return winner;
}