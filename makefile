# The following just specifies some variables for "flexibility".

# Specify the C++ compiler
CXX     = g++

# Specify options to pass to the compiler. Here it sets the optimisation
# level, outputs debugging info for gdb, and C++ version to use.
CXXFLAGS = -Wall -O0 -g -std=c++17

All: all
all: main BucketListTesterMain

# The two executables
main: main.cpp BucketList.o
	$(CXX) $(CXXFLAGS) main.cpp BucketList.o -o main

BucketListTesterMain: BucketListTesterMain.cpp BucketList.o BucketListTester.o
	$(CXX) $(CXXFLAGS) BucketListTesterMain.cpp BucketList.o BucketListTester.o -o BucketListTesterMain

# Object files, produced with the -c flag
BucketList.o: BucketList.cpp BucketList.h
	$(CXX) $(CXXFLAGS) -c BucketList.cpp -o BucketList.o

BucketListTester.o: BucketListTester.cpp BucketListTester.h BucketList.h
	$(CXX) $(CXXFLAGS) -c BucketListTester.cpp -o BucketListTester.o

# Some cleanup functions, invoked by typing "make clean" or "make deepclean"
deepclean:
	rm -f *~ *.o BucketListTesterMain main *.stackdump

clean:
	rm -f *.o BucketListTesterMain main
