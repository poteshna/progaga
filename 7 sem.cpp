// Âüþãèíà Àíàñòàñèÿ 108 ãðóïïà 7 ñåìèíàð 19 çàäà÷à
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
	cout << "input n" << endl; //длина подстроки
	cin >> n;
	char *substring = (char *)malloc((n + 1) * sizeof(char)); //выделяем под нее память, +1 ибо учитываем символ конца строки
	cout << "Enter the substring" << endl;
	cin >> substring;

	char *s = (char *)malloc(100 * sizeof(char)); //выделяем место под строку из файла
	int line = 1;
	while (!feof(fp))
	{
		s = fgets(s, 100, fp); //Берем строку из файла

		if (strstr(s, substring) != NULL) //ищем подстроку в строке
		{
			cout << "Found on line " << line << endl;
			return 0;
		}

		line++;
	}
}
