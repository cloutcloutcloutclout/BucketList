#include "BucketList.h"

/*
Node -> just a node with head, data and pointer to next ig

BucketList -> The Problem
You will implement a data structure for storing a collection of strings and which supports various operations on them
efficiently. We call the data structure "BucketList" here. (Nope, that's not its real name, I made it up.) Note that your role
here is the developer of this data structure "library", not the "clients" using it. In other words, instead of just calling
someone else's API, this time you are the one writing the things behind the API.
Overview of the data structure
From an object-oriented point of view, I should not prescribe how you should implement the internal workings of the data
structure as long as your implementation complies with the specified external interface; nevertheless, this is an
assignment, so I am going to prescribe it.The primary part of the data structure is an array of pointers. Each entry in the array,
known as a bucket, is a pointer to the head of a linked list. Each string to be stored will be allocated (in a way to be described later)
to a bucket. If multiple strings are allocated to the same bucket,
each of them is stored in a different node in the linked list of that bucket.
To faciliate the storage of strings into these linked lists, a Node class is defined as follows:

The access point of this data structure is the buckets_ variable, which is an array of Node*. (As you will see below, this
array will be dynamically resized, so instead of declaring it as Node*[], it is declared as Node**.) The size of this array is
called the capacity of the BucketList (which is not the same thing as the number of strings stored). The BucketList class is
made a "friend" of the Node class. You will learn what this means later in the module, but all you need to know now is that
BucketList can access Node as if everything there is public.Here is a picture showing (conceptually) how seven strings apple, banana, cat, C++, orange, purple, python might be
stored in a BucketList with capacity 10:


----


Mash function -> Which bucket a string goes to -> Takes in string and returns integer (int) between 0 and cap-1 (capacity - 1)
cap = capacity (number of buckets)

String s = s1 s2 s3 with n char's and ci = ASCII value to si

Integer returned will be from formula (2n-1*c1 + 2n-2*c2 + ...  4*cn-2 + 2*cn-1 + cn) % cap

Repeatedly take previous value * 2 add next digit and apply % cap and repeat.

Mash empty string value is 0

*/

Node::Node(const string &s) // :: is a scope resolution operator, meaning what class this member belongs to, since its node its the node from bl.h right
{
	// IMPLEMENT ME
	// delete [] x; -> find node
	/*

	Node creation, 

	*/


}

Node::~Node()
{
	/*

	Node destructor. Depending on your implementation, you may or may not need to write anything here.

	*/

	// IMPLEMENT ME
}

BucketList::BucketList()
{
	/*

	Default constructor of BucketList, which constructs a BucketList with an initial capacity (number of
	buckets) given by the constant INITIAL_CAP, and initialises each bucket to contain a null pointer.

	*/
	// IMPLEMENT ME
}

BucketList::~BucketList()
{
	/*

	Destructor, that releases all memory used by the BucketList.

	*/
	// IMPLEMENT ME
}

int BucketList::h(const string &s) const
{

	/*

	his is the mash function. It should return the mash value of the given string. This really
	should not be a public function; it is made public just for testing purposes.

	*/

	// IMPLEMENT ME

	return -1; // dummy
}

int BucketList::getSize() const
{
	// IMPLEMENT ME

	// get size, probably iterate through the linked list and introduce a variable called size?
	// go to first linked list node -> go next (if next is null pointer cut off) but if we go next we increment i?

	/*

	return the number of strings currently stored in the BucketList

	*/

	return -1; // dummy;
}

int BucketList::getCap() const
{
	/*

	return the current capacity of the BucketList.

	*/

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
	/*

	returns a string that gives a "visual" representation of the contents of the BucketList. More
	precisely, there should be one row per bucket. Each row begins with a number which is the index to the buckets_
	array (i.e. the mash value of the strings in that bucket), followed by each string in the linked list of that bucket, in
	alphabetical order. Every string (and the leading number) are separated by one space character. For example, the
	BucketList above will be printed like this:

	0
	1
	2
	3 apple banana purple
	4
	5
	6 cat python
	7 C++
	8
	9 orange
	The whole printout is stored in one string (which will contain multiple lines, separated by the '\n' character) and
	returned to the caller; the function itself does not print anything to the screen. Please take care not to include any
	extra invisible whitespaces, such as trailing space character after the last string in each line (or after the number, if
	there is no string in that bucket), or '\n' after the last line, or else you will fail the test cases.

	*/

	// IMPLEMENT ME

	return ""; // dummy
}

void BucketList::insert(const string &s)
{
	/*

	add the string s to the BucketList. Before insertion, it should check whether resizing
	should happen first; this is described separately below. Then, the string should be added to the linked list of the
	bucket given by the mash value of the string. If the bucket is currently empty (has no other string), it should be
	added as the only node in a new linked list. If there are other strings already in the same bucket, it should be inserted
	into the linked list at a position that maintains the alphabetical order (i.e. the order used by C++ string comparisons)
	of the strings. If s is already in the BucketList, do not make any changes to it.

	*/

	// IMPLEMENT ME
}

void BucketList::remove(const string &s)
{
	/*

	remove the string s from the BucketList. The memory of the node storing it must
	be properly released. The remaining strings in the list (if any) should maintain their alphabetical order. After removal,
	it should check whether resizing should happen; again this will be described separately. If s is not in the BucketList,
	and do not make any changes.

	*/

	// IMPLEMENT ME
}

BucketList BucketList::clone() const
{
	/*

	return a copy of the current BucketList object, with its own separate memory of the buckets
	and lists. The new BucketList should contain not only the exact same set of strings as the current object, but also in
	the exact same state (i.e. which strings is in which list and where): it is possible that, with resizing (see below), the
	same set of strings can be stored in different ways due to different number of buckets. (This really should be written
	as a copy constructor, but we don't assume you have become sufficiently familiarised with it by this point.)

	*/

	// IMPLEMENT ME

	BucketList dummy;
	return dummy; // dummy

	// week 5 deep copy slide probably
}
