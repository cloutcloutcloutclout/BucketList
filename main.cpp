#include <iostream>
#include "BucketList.h"

using namespace std;

int main() {

	BucketList t;
	t.insert("apple");
	t.insert("banana");
	t.insert("cat");
	t.insert("C++");
	t.insert("orange");
	t.insert("purple");
	t.insert("python");

	cout << t.getSize() << endl;
	cout << t.getCap() << endl;
	cout << endl;

	cout << t.contains("purple") << endl;
	cout << t.contains("C++") << endl;
	cout << t.contains("F#") << endl;
	cout << endl;

	cout << t.toString() << endl;
	cout << endl;

	t.remove("banana");
	t.remove("orange");
	cout << t.toString() << endl;
	cout << endl;

	BucketList t2 = t.clone();
	cout << t2.toString() << endl;

/*

BucketList a;
for(int i=0;i<8;i++) a.insert(string(1,'a'+i)); // make cap 20
string ss[]={"Hello","a","b","c","ab","abc","aca","apple","banana","orange","pear","melon","cat","dog","rabbit","goldfish","red","green","blue","yellow","purple","python","C++","F#"};
//string ss[]={"apple","banana","orange","cat","python","C++","purple"};
for(string s : ss) cout << a.h(s) << " " << s << endl;
//for(string s : ss) a.insert(s);
//cout << a.toString() << endl;
*/

/*
a.insert("c");
a.insert("C++");
a.insert("apple");
a.insert("blue");
a.insert("F#");
a.insert("banana");
a.insert("abc");
cout << a.toString() << endl;
a.insert("red");
cout << a.toString() << endl;
*/
}

