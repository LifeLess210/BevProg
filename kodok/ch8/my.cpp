#include "std_lib_facilities.h"
#include "my.h"
#include <iostream>

int foo;

void print_foo(){
    cout<<foo<<endl;
}

void print(int i){
    cout<<i<<endl;

}    

void swap_v(int a, int b)
{
	cout << "swap_v: a = " << a << " b = " << b << "\n";
	int temp;
	temp = a;
	a=b;
	b=temp;
	cout << "swap_v: a = " << a << " b = " << b << "\n";}

void swap_r(int& a, int& b)
{
	cout << "swap_v: a = " << a << " b = " << b << "\n";
	int temp;
	temp = a;
	a=b;
	b=temp;
	cout << "swap_v: a = " << a << " b = " << b << "\n";
}

/*void swap_cr(const int& a, const int& b)
{
	cout << "swap_v: a = " << a << " b = " << b << "\n";
	int temp;
	temp = a;
	a=b;
	b=temp;
	cout << "swap_v: a = " << a << " b = " << b << "\n";}
}*/
