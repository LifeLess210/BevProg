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
		for(int i = 0; i < 7; i++)
		{
			Point p;
			cin >> p.x >> p.y;
			original_points.push_back(p);
		}
		for(Point a : original_points)
		{
			cout << a.x << " " << a.y << "\n"; 
		}
		ofstream ofile {"mydata.txt"};
		for(Point a : original_points)
		{
			ofile << a.x << " " << a.y << "\n"; 
		}
		ofile.close();
		ifstream ifile {"mydata.txt"};
		Point z;
		vector<Point> processed_points;
		while(ifile >> z.x >> z.y)
		{
			processed_points.push_back(z);
		}
		cout << "op points:\n";
		if(original_points.size() == processed_points.size())
		{
			for(int a = 0; a < original_points.size(); a++)
			{
				if(original_points[a].x != processed_points[a].x || original_points[a].y != processed_points[a].y) 
					{
						cout << "Something's wrong! ";
						break;
					}
				cout << original_points[a].x << original_points[a].y << "\n";

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