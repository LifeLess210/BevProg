#include "../std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
void f(vector<int> v)
{
	vector<int> lv(v.size());
	for(int i = 0; i < lv.size(); i++)
	{
		lv[i] = v[i];
	}
	cout << "values of lv: " << endl;
	for(auto a : lv)
	{
		cout << a << " ";
	}
	cout << endl;

	vector<int> lv2 = v;
	cout << "values of lv2: " << endl;
	for(auto a : lv2)
	{
		cout << a << " ";
	}
	cout << endl;
}

int main()
{
	f(gv);
	vector<int> vv(10);
	int x = 1;
	for(int i = 1; i <= 10; i++)
	{
		x*=i;
		vv[i-1] = x;
	}
	f(vv);
	return 0;
}