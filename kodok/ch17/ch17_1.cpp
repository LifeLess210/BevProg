#include "../std_lib_facilities.h"
void print_array10(ostream& os, int* a)
{
	for(int i = 0; i < 10; i++ )
	{
		os << a[i] << endl;
	}
}

void print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; i++)
	{
		os << a[i] << endl;
	}
}

void print_vector(ostream& os, vector<int> v)
{
	for(int i:v)
	{
		os << i << endl;
	}
}
int main()
{
	// array

	int* array = new int[10];
	cout << "array: " << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
	delete[] array;

	int* array2 = new int[10];
	int x = 100;
	for(int i = 0; i < 10; i++)
	{
		array2[i] = x;
		x++;
	}
	cout << "array2: " << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << array2[i] << endl;
	}
	delete[] array2;

	int* array3 = new int[11];
	x = 100;
	for(int i = 0; i < 10; i++)
	{
		array3[i] = x;
		x++;
	}
	cout << "array3: " << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << array3[i] << endl;
	}
	delete[] array3;

	int* array4 = new int[20];
	x = 100;
	for(int i = 0; i < 20; i++)
	{
		array4[i] = x;
		x++;
	}
	cout << "array4: " << endl;
	print_array(cout, array4, 20);
	delete[] array4;
	 
	// vector

	vector<int> v1(10);
	x = 100;
	for(int& i : v1)
	{
		i=x;
		x++;
	}
	cout << "v1: " << endl;
	print_vector(cout, v1);

	vector<int> v2(11);
	x = 100;
	for(int& i : v2)
	{
		i=x;
		x++;
	}
	cout << "v2: " << endl;
	print_vector(cout, v2);

	vector<int> v3(20);
	x = 100;
	for(int& i : v3)
	{
		i=x;
		x++;
	}
	cout << "v3: " << endl;
	print_vector(cout, v3);
	return 0;
}