// CST126_1.cpp : Defines the entry point for the console application.
//


#include"stdafx.h"
#include <iostream>

using namespace std;
char my_strcpy(char * string_array, const char * string);
char my_strlen(char * string_array);
int Find(char * string_array, char c);
int main()
{
	char * string_ptr{ nullptr };
	char * string = "I was born with a plastic spoon in my mouth";
	cout << string;
	int string_array_size{ my_strlen(string) };
	string_ptr = new char[string_array_size];
	my_strcpy(string_ptr, string);
	cout << "\\-\\- " << string_ptr << " \\-\\-" << endl;
	Find(string_ptr, 'i');
	Find(string_ptr, 'I');
	Find(string_ptr, 'w');
	Find(string_ptr, 'z');
	Find(string_ptr, 'r');
	cout << '\n';

	string = "I was born with a plastic spoon in my mouth";
	string_array_size = my_strlen(string);
	string_ptr = new char[string_array_size];
	my_strcpy(string_ptr, "");
	cout << "\\-\\- " << string_ptr << " \\-\\-" << endl;
	Find(string_ptr, 'y');

	string_ptr = new char[0];
	delete string_ptr;
	string_ptr = nullptr;
	cout << "Press any key to exit";
	cin.ignore();
	cin.get();
	return 0;
}

char my_strcpy(char * string_array, const char * string)
{
	for (int i{}; i <= 46; i++)
	{
		*(string_array + i) = string[i];
	}
	return 0;
}
char my_strlen(char * string_array) {
	int length = 0;
	while (*string_array != '\0') {
		length++;
		string_array++;
	}
	return length;
}
int Find(char * string_array, char c)
{
	int string_array_size = my_strlen(string_array);
	for (int i{}; i <= string_array_size; i++)
	{
		bool char_finder{ string_array[i] == c };
		if (char_finder == 1)
		{
			cout << c << " is in position " << i + 1 << endl;
			break;
		}
		if (i == string_array_size)
		{
			cout << c << " is in position -1 " << endl;
			break;
		}
	}
	return 0;
}