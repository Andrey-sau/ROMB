#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек:"; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			cout << " ";
		cout << "/";
		for (int j = 0; j < i*2; j++)
			cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << " ";
		cout << "\\";
		for (int j = i; j < n-1; j++)
			cout << "  ";
		cout << "/";
		cout << endl;
	}
}