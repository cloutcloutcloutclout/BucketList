#include "BucketList.h"

/*
Node -> just a node with head, data and pointer to next ig

BucketList -> 







*/

Node::Node(const string &s)
{
	// IMPLEMENT ME

	// :: means its a constructor, this will be for the pointers im guessing
}

Node::~Node()
{
	// IMPLEMENT ME

	//
}

BucketList::BucketList()
{
	// IMPLEMENT ME
}

BucketList::~BucketList()
{
	// IMPLEMENT ME
}

int BucketList::h(const string &s) const
{
	// IMPLEMENT ME

	return -1; // dummy
}

int BucketList::getSize() const
{
	// IMPLEMENT ME

	// get size, probably iterate through the linked list and introduce a variable called size?

	// go to first linked list node -> go next (if next is null pointer cut off) but if we go next we increment i?

	return -1; // dummy;
}

int BucketList::getCap() const
{
	// IMPLEMENT ME

	return -1; // dummy
}

bool BucketList::contains(const string &s) const
{

	// DONE FOR YOU AS AN EXAMPLE
	int hc = h(s);
	Node *temp = buckets_[hc];
	while (temp != nullptr)
	{
		if (temp->s_ == s)
			return true;
		if (temp->s_ > s)
			return false;
		temp = temp->next_;
	}
	return false;
}

string BucketList::toString() const
{
	// IMPLEMENT ME

	return ""; // dummy
}

void BucketList::insert(const string &s)
{
	// IMPLEMENT ME
}

void BucketList::remove(const string &s)
{
	// IMPLEMENT ME
}

BucketList BucketList::clone() const
{
	// IMPLEMENT ME
	BucketList dummy;
	return dummy; // dummy
}
