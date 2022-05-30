
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
	cin >> c;
	cout << "Output :  "  << lowerToUpper(c);
	cout << "\n\nEnter Character ( in Upper case ) : \n";
	cin >> c;
	cout << "Output :  "  << upperToLower(c);
std::cout << '\n';
	return 0;
}
