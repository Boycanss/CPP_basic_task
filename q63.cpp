#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

void copyString(char* input, int offset, int length, bool invert, char* output, int output_offset)
{
	char* result = new char[strlen(output)+1];
	memcpy(result, output, output_offset);

	char* cpyChar = new char[length+1];
	memcpy(cpyChar, input + offset, length);
	cpyChar[length] = '\0';

	char* invertedcpyChar = new char[length+1];
	if (invert) {
		for (size_t i = 0; i < length; i++)
		{
			invertedcpyChar[i] = cpyChar[length - 1 - i];
		}
		invertedcpyChar[length] = '\0';
		memcpy(result + output_offset, invertedcpyChar, length);
	}
	else {
		memcpy(result + output_offset, cpyChar, length);
	}
	
	result[strlen(output)] = '\0';

	cout << result << endl;
}


int main()
{
	string st = "Hello World";
	string st2 = "My name is C++";

	//with strcpy
	char* input = new char[st.length() + 1];
	strcpy(input, st.c_str());

	char* output = new char[st2.length() + 1];
	strcpy(output, st2.c_str());

	//without strcpy
	char* input2 = new char[st.length() + 1];
	for (size_t i = 0; i < st.length(); i++)
	{
		input2[i] = st[i];
	}
	input2[st.length()] = '\0';

	char* output2 = new char[st.length() + 1];
	for (size_t i = 0; i < st2.length(); i++)
	{
		output2[i] = st2[i];
	}
	output2[st2.length()] = '\0';

	copyString(input, 6, 5, true, output, 11);

	return 0;
}
