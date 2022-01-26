#include <iostream>
#include <string>
using namespace std;
string result(string a, string b)
{
	if (a.size() == b.size())
	{
		int i = 0;
		while (a[i] == b[i] && i < a.size())
		{
			i++;
		}
		return a[i] >= b[i] ? a : b;
	}
	else
		return a.size() > b.size() ? a : b;
}
int main()
{
	string a="1123113";
	string b="1123113";
	cout << result(a,b);

}