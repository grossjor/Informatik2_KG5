#include <string>
#include <iostream>
using namespace std;


char lowerToUpper(char c)
{
	return (c & '_');
}

char upperToLower(char c)
{
	return (c | ' ');
}

int main(int argc, char const *argv[]) {


	char c;
	cout << "Enter Character ( in lower case ) : \n";
	cout << "Output :  "  << lowerToUpper(*argv[1]);
	cout << "\n\nEnter Character ( in Upper case ) : \n";
	cout << "Output :  "  << upperToLower(*argv[2]);
	cout <<"\n";
	return 0;
}
