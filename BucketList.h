#ifndef BUCKETLIST_H_
#define BUCKETLIST_H_

#include <string>
using std::string;

class Node {

	string s_; // string stored in this node
	Node* next_; // pointer to next node in the list

	// even constructors are private!
	// so only BucketList can access them
	Node(const string& s); // constructor initialising the node to store s
	~Node(); // destructor

friend class BucketList; // allow BucketList to access private members
};

class BucketList {

public:
	// Default constructor. Constructs an empty BucketList with initial
	// capacity INITIAL_CAP with no contents.
	BucketList();

	// Destructor. Deallocate all memory used.
	~BucketList();

	// The mash function that converts the string s to an integer.
	// This really shouldn't be public, but it is for the purpose of
	// testing.
	int h(const string& s) const;

	// Return the number of strings currently stored in the BucketList.
	int getSize() const;

	// Return the current capacity (i.e. number of buckets) of the BucketList.
	int getCap() const;

	// Return true if the string s is in the BucketList, false otherwise.
	bool contains(const string& s) const;

	// Return a string representation of the BucketList, as described
	// in the assignment spec.
	string toString() const;

	// Insert the string s into the BucketList.
	void insert(const string& s);

	// Remove the string s from the BucketList.
	void remove(const string& s);

	// Return a separate copy of this BucketList.
	BucketList clone() const;

	// we didn't explain what static and constexpr are, but you can just
	// use them like normal constants in BucketList.cpp
	static constexpr int INITIAL_CAP = 10; // initial capacity
	static constexpr double MAX_LOAD_FACTOR = 0.75; // maximum load factor
	static constexpr double MIN_LOAD_FACTOR = 0.25; // maximum load factor

private:

	Node** buckets_; // pointer to an array of Node*

	// You will need to introduce additional member variables

	// You can also introduce private member functions
};

#endif /* BUCKETLIST_H_ */
