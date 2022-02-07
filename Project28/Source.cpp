#include <iostream>
using namespace std;

void main()
{
	try
	{
		float a, b;
		cout << "\nPut digit a:\n";
		cin >> a;
		cout << "\nPut digit b:\n";
		cin >> b;
		if (b == 0)
			throw b;
		cout << "\nResult = " << a / b << "\n\n";
	}
	catch (float g)
	{
		cout << "\nError - Divide by " << g << "\n\n";
	}
	try
	{
		int* ptr = 0;
		int size;
		cout << "\nPut size:\n";
		cin >> size;
		if (size < 1 or size>500)
			throw "\n\nErr Size!!!\n\n";
		ptr = new int[size];
		if (!ptr)
			throw "\n\nErr Memory!!!\n\n";
		int a;
		cout << "\nPut digit a:\n";
		cin >> a;
		if (a == 0)
			throw a;
	}
	catch (int s)
	{
		cout << "\nError - A = " << s << "\n\n";
	}
	catch (char* s)
	{
		cout << s;
	}
	catch (...)
	{
		cout << "\nSome Error!!!\n\n";
	}
}