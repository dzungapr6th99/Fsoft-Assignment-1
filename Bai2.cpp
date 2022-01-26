#include <iostream>
#include <vector>
using namespace std;
bool isEnd(vector<int> a, vector<int> b)
{
	if (a.size() + b.size() != 0)
	{
		bool check = false;
		int i = 0;
		vector<int> a1 ;
		for (int i = 0; i < a.size(); i++)
			a1.push_back(a[i]);
		for (int i = 0; i < b.size(); i++)
			a1.push_back(b[i]);

		int c = a1[0] % 2;
		int count = 0;
		for (int i = 0; i < a1.size(); i++)
		{
			if (a1[i] % 2 == c)
				count++;
			else break;
		}
		if (count == a1.size()) check = true;
		return check;
	}
	else return true;
}

vector<int> Solve(vector<int> a, vector<int> b)
{
	vector <int> a1 = a;
	vector <int> b1 = b;
	vector<int> s;
	int i1 = 0, i2 = 0;
	int count = 1;
	while (a1.size() != 0 || b1.size() != 0 )
	{
		if (isEnd(a1, b1)) break;
		int pos1 = -1, pos2 = -1;
		for (int i = 0; i < a1.size(); i++)
		{
			if (a1[i] % 2 == count % 2)
			{
				pos1 = i;
				break;
			}
		}
		if (pos1 != -1)
		{
			s.push_back(a1[pos1]);
			a1.erase(a1.begin() + pos1);
			count++;
		}
		for (int i = 0; i < b1.size() ; i++)
		{
			if (b1[i] % 2 == count % 2)
			{
				pos2 = i;
				break;
			}
		}
		if (pos2 != -1)
		{
			s.push_back(b1[pos2]);
			b1.erase(b1.begin() + pos2);
			count++;
		}
		
	}

	for (int i = 0; i < a1.size(); i++)
		s.push_back(a1[i]);
	for (int i = 0; i < b1.size(); i++)
		s.push_back(b1[i]);
	
	return s;
}
int main()
{
	/*int n1, n2;
	cout << "Nhap so phan tu mang a: ";
	cin >> n1;
	cout << "Nhap so phan tu mang b: ";
	cin >> n2;
	int* a = new int[n1];
	int* b = new int[n2];
	cout << "Nhap so phan tu mang a: " << endl;
	for (int i = 0; i < n1; i++)
		cin >> a[i];
	cout << "Nhap so phan tu mang b: " << endl;
	for (int i = 0; i < n2; i++)
		cin >> b[i];*/
	int n = 5, m = 7;
	vector<int> a = { 2, 4, 6, 7, 9 };
	vector<int> b = { 1,3,9, 11, 13, 21 };
	vector<int> c = Solve(a, b);
	for (int i = 0; i < c.size(); i++)
	{
		cout << c[i] << endl;
	}
	return 0;
}