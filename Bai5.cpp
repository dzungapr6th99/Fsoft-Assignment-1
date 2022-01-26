#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	double delta;
	do 
	{
		cin >> a;
		cin >> b;
		cin >> c;
		delta = b * b - 4 * a * c;
		if (delta > 0)
			cout << "Phuong trinh co 2 nghiem: " << ((-b - sqrt(delta)) / (2 * a))<<'\t'<<((-b + sqrt(delta)));
		if (delta == 0)
			cout << "Phuong trinh co nghiem kep: " << ((-b) / (2 * a));
		if (delta < 0)
			cout << "Phuong trinh vo nghiem";
	} while (a != b && b != c);
	
}