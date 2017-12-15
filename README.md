# progaga
// Вьюгина Анастасия 108 группа 7 семинар 19 задача
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	FILE *fp;
	fopen_s(&fp, "input.txt", "r");
	if (fp == NULL)
	{
		cout << "Error!";
		return -1;
	}

	int n = 0;
	cout << "input n" << endl;  
	cin >> n;
	char *substring = (char *)malloc((n + 1) * sizeof(char)); 
	cout << "Enter the substring" << endl;
	cin >> substring;

	char *s = (char *)malloc(100 * sizeof(char)); 
	int line = 1;
	while (!feof(fp))
	{
		s = fgets(s, 100, fp); 

		if (strstr(s, substring) != NULL) 
		{
			cout << "Found on line " << line << endl;
			return 0;
		}

		line++;
	}
}
