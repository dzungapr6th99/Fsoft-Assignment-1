#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> result(vector<vector<int>>a, vector<vector<int>>b)
{
	int col = a[0].size() >= b[0].size() ? a[0].size() : b[0].size();
	int row = a.size() >= b.size() ? a.size() : b.size();
	vector<vector<int>>c;
	for (int i = 0; i < row; i++)
	{
		vector<int> c1;
		for (int j = 0; j < col; j++)
		{
			int value = 0;
			if (i < a.size() && j < a[0].size())
				value += a[i][j];
			if (i < b.size() && j < b[0].size()) 
				value += b[i][j];
			c1.push_back(value);
		}
		c.push_back(c1);
	}
	return c;
}
int main()
{
	vector<vector<int>> a = {{4,4,4,4,4},
	                         {4,4,4,4,4}};
	vector<vector<int>> b= { {4,4,4},
							 {4,4,4},
							 {4,4,4} };
	vector<vector<int>> c = result(a, b);
	for (int i = 0; i < c.size(); i++)
	{
		for (int j=0; j < c[0].size(); j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}