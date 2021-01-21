#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

int main() {
	char str1[100] = "hello cpp";
	char str2[100] = "";
	cout << "str: " << str1 << endl;
	cout << "strlen(str1): " << strlen(str1) << endl;
	cout << "strlen(str1): " << strcat(str1,"+java") << endl;
	strcpy(str2, str1);
	cout << "strlen(str2): " << str2 << endl;
	cout << "strcmp(str1, str2): " << strcmp(str1, str2) << endl;
}