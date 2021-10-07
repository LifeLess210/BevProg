#include "std_lib_facilities.h"
double meterbe(double szam, string mertekegyseg)
{
	double v = 0;
	if(mertekegyseg=="m")
	{
	v=szam;
	}
	if(mertekegyseg=="ft")
	{
	 v=szam*0.3048;
	}
	if(mertekegyseg=="cm")
	{
	v=szam/100;
	}
	if(mertekegyseg=="in")
	{
	v=szam/100*2.54;
	}
	return v;
}
int main()
{
	double szam1;
	double szam2;
	double be;
	double largest;
	double smallest;
	double elso = true;
	double sum = 0;
	int hanyadik = 1;
	string mertekegyseg = "";
	vector<double> v;
	while(cin >> be >> mertekegyseg)
		{
			if(mertekegyseg != "cm" && mertekegyseg != "in" && mertekegyseg != "m" && mertekegyseg != "ft")
			{
				cout << "Nem megfelelő mértékegység\n"; 
			}
			else
			{
				if(hanyadik%2 == 1)
				{
						szam1 = be;
						if(elso == true)
					{
							largest = be;
							smallest = be;
							elso = false;
							cout << largest << " the largest so far\n";
							cout << smallest << " the smallest so far\n";
					}
						else if(largest < be)
					{
							largest = be;
							cout << largest << " the largest so far\n";
					}
						else if(smallest > be)
					{
							smallest = be;
							cout << smallest << " the smallest so far\n";
					}
					hanyadik++;
					sum+=meterbe(be, mertekegyseg);
					v.push_back(meterbe(be, mertekegyseg));
					

				}
				else if(hanyadik%2 == 0)
				{
					if(largest < be)
						{
							largest = be;
							cout << largest << " the largest so far\n";
						}
					else if(smallest > be)
						{
							smallest = be;
							cout << smallest << " the smallest so far\n";
						}
					szam2 = be;
					cout << szam1 << " " << szam2 << "\n";
	 				if ((szam1-szam2 <= 0.01 && szam1-szam2 >= -0.01))
					{
						cout<<"the numbers are almost equal\n";
					}
					else if(szam1 < szam2)
					{
						cout<<"the smaller value is:"<<szam1<<"\n";
						cout<<"the larger value is:"<<szam2<<"\n";
					}
					else if(szam2 < szam1)
					{
						cout<<"the smaller value is:"<<szam2<<"\n";
						cout<<"the larger value is:"<<szam1<<"\n";
					}
					else if(szam1 == szam2)
					{
						cout << "the numbers are equal";
					}
					hanyadik++;
					sum+=meterbe(be, mertekegyseg);
					v.push_back(meterbe(be, mertekegyseg));
				}

			}

		}
		cout << "largest value: " << largest << "\nsmallest value: " << smallest << "\nsum of values in m: " << sum << "m\nnumber of values: " << hanyadik << "\n";
		sort(v);
		for(int i=0; i<v.size();i++)
		{
			cout << v[i] << " ";
		}
		cout<<"\n";
	}
