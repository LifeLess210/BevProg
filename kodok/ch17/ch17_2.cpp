#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; i++)
	{
		os << a[i] << endl;
	}
}

int main()
{
	//array

	int p = 7;
	int* p1 = &p;
	cout << "p1: " << p1 << " p: " << p1[0] << endl;

	int* p2 = new int[7];
	int x = 1;
	for(int i = 0; i < 7; i++)
	{
		p2[i] = x;
		x*=2;
	}
	cout << "p2: " << p2 << endl;
	cout << "values of p2: " << endl;
	print_array(cout, p2, 7);
	
	int* p3 = p2; 
	p2 = p1;
	p2 = p3;

	cout << "p1: " << p2 << endl;
	cout << "values of p1: " << endl;
	print_array(cout, p1, 1);

	cout << "p2: " << p2 << endl;
	cout << "values of p2: " << endl;
	print_array(cout, p2, 7);
	delete[] p2; // amiatt kell csak p2-t törölni mert elősször p3 és p2 ugyan arra mutat, majd p2=p1 nél nem kell mert p1-nél nem raktunk semmit a heapbe, majd a p2 és p3 ismét ugyan arra mutat.
	p1 = new int[10];
	x=1;
	for(int i = 0; i < 10; i++)
	{
		p1[i] = x;
		x*=2;
	}
	p2 = new int[10];
	for(int i = 0; i<10; i++)
	{
		p2[i] = p1[i];
	}
	delete[] p2;
	delete[] p1;

	//vector

	vector<int> v1(10);
	for(int i = 0; i < v1.size(); i++)
	{
		v1[i] = x;
		x*=2;
	}
	vector<int> v2(10);
	for(int i = 0; i < 10; i++)
	{
		v2[i] = v1[i];
	}
}