#include <stdio.h>
#include <iostream>

using namespace std;

void InvertWord(char word[], int num_element, char InvertedWord[]) {
	int afterSpace = 0;
	
	for (int i = 0; i <= num_element; i++)
	{	
		if (isspace(word[i]) || i == num_element) {
			for (int j = afterSpace; j < i; j++)
			{
				InvertedWord[j] = word[(i - j - 1) + afterSpace];
			}
			InvertedWord[i] = ' ';
			afterSpace = i + 1;
		}
	}

	for (int k = num_element; k < strlen(InvertedWord); k++)
	{
		InvertedWord[k] = '\0';
	}

	cout << "output = " << InvertedWord << endl;
}


int main(int n, char** args)
{
	const int Max_length = 20;
	char sentn[Max_length];
	cout << "input = ";
	cin.getline(sentn, 20);

	char* InvertedWord = new char[strlen(sentn)]; // AKU CINTA KAMU = 14; strlen(sentn) = 18; ????
	InvertWord(sentn, strlen(sentn), InvertedWord);
	return 0;
}

