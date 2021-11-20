#include "std_lib_facilities.h"

struct Point
{
	int x;
	int y;
};

int main()
{
	try
	{
		vector<Point> original_points;
		cout << "Enter seven points: \n";
		for(int i = 0; i < 7; i++) // beolvasás és vektorba helyezés
		{
			Point p;
			cin >> p.x >> p.y;
			original_points.push_back(p);
		}
		for(Point a : original_points) // vektor kiírása
		{
			cout << a.x << " " << a.y << "\n"; 
		}
		ofstream ofile {"mydata.txt"};
		for(Point a : original_points) // fileba kiírás
		{
			ofile << a.x << " " << a.y << "\n"; 
		}
		ofile.close();
		ifstream ifile {"mydata.txt"};
		Point z;
		vector<Point> processed_points;
		while(ifile >> z.x >> z.y) // fileból olvasás
		{
			processed_points.push_back(z);
		}
		bool elso = true;
		if(original_points.size() == processed_points.size()) // vektorok méretének ellenőrzése
		{
			for(int a = 0; a < original_points.size(); a++)
			{
				if(original_points[a].x != processed_points[a].x || original_points[a].y != processed_points[a].y) // vektorok azonosságának ellenőrzése
					{
						cout << "Something's wrong! ";
						break;
					}

				else
				{
					if(elso == true) 
					{
						cout << "op" << "\t" << "pp\n";
						elso = false;
					}
					cout << original_points[a].x << " " << original_points[a].y << "\t" << processed_points[a].x << " " << processed_points[a].y << "\n";
				}
			}
		}
		else
		{
			cout << "Something's wrong! ";
		}
		ifile.close();
		return 0;
	}
	catch(runtime_error& e)
	{
		cerr << "Error: " << e.what() << "\n";
		return 1;
	}
	catch(...)
	{
		cerr << "Unkown error\n";
		return 2;
	}
}