#include "std_lib_facilities.h"

int main()
{
	cout << "Adj meg egy nevet!\n";
	string nev;
	cin >> nev;
	cout <<"Dear, "<<nev<<"!\n";
	cout << "How are you? I am fine. I miss you.\n";
	string barat << cin;
	cout << "Have you seen "<<barat<<" lately\n";
	char nem = '0';
	cout << "Add meg a barát nemét(m/f)\n";
	cin >> nem;
	if(nem='m')
	{
		cout << "If you see "<<barat<<" please ask him to call me.\n";
	}
	else if(nem='f')
	{
		cout << "If you see friend_name please ask her to call me.\n";
	}
	cout << "Add meg a barát korát!\n";
	int kor;
	cin >> kor;
	if(kor<=0 || kor>110)
	{
		simple_error("you're kidding!");
	}
	else if(kor<12)
	{
		cout << "Next year you will be "<<kor+1.<<"\n";
	}
	else if(kor=17)
	{ 
		cout << "Next year you will be able to vote.";
		}
		else if(kor>=70)
		{
			cout << "Hope you are enjoying retirement.";
			}
			cout << "\n\nYours sincerely, Viktor\n";
		
}

