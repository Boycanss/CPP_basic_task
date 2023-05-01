#include <stdio.h>
#include <iostream>

using namespace std;

struct Student {
	char* name;
	int id;
	float score;

	/*Student(char* name, int id, float score):name(name), id(id), score(score) {}*/
};

void SortStudentByScore(int arr[]) {

	auto length = sizeof(arr) / sizeof(int);
	cout << length << endl;
	for (int j = 0; j < length - 1; j++)
	{
		if (arr[j] > arr[j + 1]) {
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	};

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
}

int main(int n, char** args)
{
	Student stud[10]{};

	for (size_t i = 0; i < 10; i++)
	{
		cout << "Enter Name: ";
		cin >> stud[i].name;

		int id;
		cout << "Enter id: ";
		cin >> id;
		/*for (size_t i = 0; i < 10; i++)
		{
			if(
		}*/

		cout << "Enter score: ";
		cin >> stud[i].name;

	}

	//SortStudentByScore();
	
	return 0;
}
