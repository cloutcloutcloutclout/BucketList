#include "BucketList.h"

Node::Node(const string &s) // :: is a scope resolution operator, meaning what class this member belongs to, since its node its the node from bl.h right
{
	// IMPLEMENT ME
	s_ = s;			 // making s_ which is string equal to s which is reference s
	next_ = nullptr; // next_ is next which is pointing to null pointer
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
	// Construct a BucketList with Initial capacity from INITIAL_CAP
	// Initialise each bucket to contain nullptr

	// IMPLEMENT ME

	// The access point of this data structure is the buckets_ variable, which is an array of Node*.
	buckets_ = new Node *[INITIAL_CAP]; // buckets_ is now a new Node* of size INITIAL_CAP.

	// add size, capacity here?

	// I need all of the items to point to nullptr so I could loop it
	// could i just do a for loop and make all the items = to nullptr?
	for (int i = 0; i < INITIAL_CAP; i++)
	{
		buckets_[i] = nullptr; // since you want it to contain nullptr in the brief I use a for loop to make it equal to nullptr
	}

	size_ = 0;			// Make the size 0 since its just being made as of now
	cap_ = INITIAL_CAP; // make this cap initial_cap since its being constructed of size OF initial cap meaning its the same value
}

BucketList::~BucketList()
{
	/*

	Destructor, that releases all memory used by the BucketList.

	*/
	// IMPLEMENT ME

	delete[] buckets_; // this should work since its a 'new Node' using new and deconstructing naturally uses delete and for array its delete [] var;

	// if not change in TODO l8r
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

int BucketList::getSize() const // return the number of strings currently stored in bucketList
{

	// IMPLEMENT ME
	// get size, probably iterate through the linked list and introduce a variable called size?
	// go to first linked list node -> go next (if next is null pointer cut off) but if we go next we increment i?

	// while or for loop could be good here, we can just do if pointer is null ignore but if it has smth increment ++ ?
	// since buckets_ is a ** meaning a pointer to an array of pointers
	// for (int i = 0; i <= buckets_.size(); )  (START), this doesn't work since its a node so will loop with for and while inside list

	// implementation I came up with, using a local variable to loop through each item in the LinkedList and increment since the item would have a string supposedly.
	int count = 0; // declare a local counter for my loop to check items

	for (int i = 0; i < cap_; i++)
	{ // cap_ is the capacity, we'll go through each item and increment

		Node *size_node = buckets_[i]; // goes to the head of the node, buckets_ and with this we'll check through each LL

		while (size_node != nullptr)
		{			 // simple while loop used from labs 3-5 using nullptr loops, even used in the example you gave here
			count++; // increment since there'll be a string inside here

			size_node = size_node->next_;
		}
	}

	return count; // return count for now, I may change to size_ in the future
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
