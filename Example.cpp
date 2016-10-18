#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

  //
  // Michael Boyd
  //

int main(void)
{
  //  Fundamental C++ types  
  // There are several fundamental types in C++ including char, short, int
  // long, unsigned, float, double, long double, boolean (bool) and void. 
  // We can use the sizeof() function to determine how much memory is
  // allocated for these various data types to better explore the concepts
  // of Chapter 6 and understand how and when memory is allocated (static vs.
  // dynamic). Following the example given for char, fill in the code for the
  // remaining fundamental types (if possible). 
  
    cout <<"Fundamental Types\n";	 
	cout <<"    Type  " << "Size \n";
	cout <<"    char: " << sizeof(char) << " bytes.\n";	   
	cout <<"    int: " << sizeof(int) << " bytes.\n";	   	   
	cout <<"    short: " << sizeof(short) << " bytes.\n";
	cout <<"    long: " << sizeof(long) << " bytes.\n";
	cout <<"    unsigned: " << sizeof(unsigned) << " bytes.\n";
	cout << "   float: " << sizeof(float) << " bytes.\n";
	cout << "   double: " << sizeof(double) << " bytes.\n";
	cout << "   boolean: " << sizeof(bool) << " bytes.\n";
	cout << " long double: " << sizeof(long double) << " bytes.\n";
	cout << "     void: " << sizeof(void*) << " bytes.\n";
	
  //                         C++ Pointers
  // C++ allows for pointers to, among others, char, long and void data types.
  // We can again use the sizeof() function to determine how much memory is
  // allocated for these various data types to better explore the concepts
  // of Chapter 6 and understand how and when memory is allocated (static vs.
  // dynamic). As you did above, fill in the code to determine the memory size
  // allocated for these three pointer types.
      
	cout <<"\nPointers\n";
	cout <<"    Type  " << "Size \n";
	
	// Example for an integer pointer
	int i = 455;
	int *intPointer = &i;
	cout <<"    int pointer: " << sizeof(intPointer) << " bytes.\n";	
	
	char c = 'i';
	char *charPointer = &c;
	cout << "   char pointer: " << sizeof(charPointer) << " bytes.\n";
	
	long tacos = 2.12201;
	long *tacoBox = &tacos;
	cout <<"   long pointer: " << sizeof(tacoBox) << " bytes.\n";
	
	void * dark;
	cout << "   void pointer: " << sizeof(dark) << " bytes.\n";
	
  //                        C++ Strings
  // Using the <string> library, we can explore the memory sizes allocated for
  // C++ strings using the sizeof() function. You should fill in code below to
  // experiment with how C++ allocates memory for various strings. For example,
  // you may want to compare setting the value of a string with "josh" and
  // getting its sizeof() compared with sizeof("josh"). You should also provide
  // code to determine when the memory size of the string is determined and 
  // whether it can change or not. 
  
	cout <<"\nStrings\n";
	cout <<"    Type  " << "Size \n";
	string s; 
	s = "Great Spaghetti Monster";
	// this is a sizeof(*s)
	cout <<"    string: " << sizeof(s) << " bytes.\n"; // this is size of string pointer
	// // think linked list, the sizeof of raw data is length+1 because the extra slot is a null (stop reading from mem)
	cout <<"    string: " << sizeof("Great Spaghetti Monster") << " bytes.\n";
	// memory size is determined based on input,
	// if variable it's used as a pointer (4 bytes) to the location of the data, this data size does not change but what it points to does
	// if fed raw data, size is determined by .length() + 1, the +1 being a null byte to end reading from memory
	
	
  //               C++ Enumerations
	cout <<"\nEnumerations\n";
	cout <<"    Type  " << "Size \n";
	
	enum weekday {monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7};
	cout <<"    enums: " << sizeof(weekday) << " bytes.\n";
	
  //                        C++ Arrays
  // In C++, you can declare arrays by providing a name and a size of the array.
  // The sizeof() function will again provide the amount of memory allocated for
  // the array. Experiment with different array sizes and types to see how much memory 
  // is allocated, and when it is allocated (declaration vs. instantiation). 
  	cout <<"\nArrays\n";
	cout <<"    Type  " << "Size \n";
	int zeus [5];
	char hades [3];
	string cowboy [9];
	double bigmac [10];
	bool pres [60];
	cout << " int: " << sizeof(zeus) << " bytes.\n";
	cout << " char: " << sizeof(hades) << " bytes.\n";
	cout << " string: " << sizeof(cowboy) << " bytes.\n";
	cout << " double: " << sizeof(bigmac) << " bytes.\n";
	cout << "   bool: " << sizeof(pres) << " bytes.\n";
	
	
	int github [4];
	cout << "int declar: " << sizeof(github) << " bytes " << endl;
	int scala [4] = {1,2,3,4};
	cout << "int inst: " << sizeof(scala) << "  bytes " << endl;
	
	
	
  //               C++ Standard Library Vectors
  // In C++, you can declare a vector as follows: vector<char> v(10); and similarly
  // determine its size using the sizeof() function. Experiment with different 
  // vector sizes and types so that you can compare the differences bewteen C++ 
  // arrays and vectors. 

	cout <<"\nVectors\n";
	cout <<"    Type  " << "Size \n";
	vector<char> violate(1);
	vector<int> red(2);
	vector<string> yella(3);
	
	// boolean vectors are a special case,
	// they pack data down to 1bit each
	// when being accessed it's a reference then converted to a boolean.
	//http://stackoverflow.com/questions/6781985/is-the-use-of-stdvectorbool-objects-in-c-acceptable-or-should-i-use-an-al
	vector<bool> orange(1);
	//
	vector<long> green(15);
	vector<short> purp(15);
	
	cout << " char1: " << sizeof(violate) << endl;
	cout << " char1t: " << sizeof(&violate) << endl;
	cout << " int: " << sizeof(red) << endl;
	cout<< "  string: " << sizeof(yella) << endl;
	cout << " bool: " << sizeof(orange) << endl;
	cout << " long: " << sizeof(green) << endl;
	cout << " short:" << sizeof(purp) << endl;

	
}