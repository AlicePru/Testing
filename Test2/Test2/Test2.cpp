#include <iostream>
using namespace std;
int count(int x, int y);
void Equation(int x, int y);
int Variants(int x, int y);


int main()
{
	cout << "For test case 1:" << endl;
	Equation(1, 4);
	cout << "For test case 2:" << endl;
	Equation(5, 2);
	system("pause");
	return 0;

}

int count(int x, int y)
{
	int z, n = 0;
	z = x + 2;
	if (z < y)
	{
		n = x + 1;
	}
	else
		y = y + 1;
	cout << "x=" << x << "\ny=" << y << "\nz=" << z << "\nn=" << n<<endl;
	return x;
	return y;
	return z;
	return n;
}

int Variants(int x, int y)
{
	int z, n;
	if ((x == 1) && (y == 4))
	{
		x = 1;
		y = 4;
		z = 3;
		n = 2;
		return x;
		return y;
		return z;
		return n;
	}


	if ((x == 5) && (y == 2))
	{
		x = 5; 
		y = 3; 
		z = 7; 
		n = 0;
		return x;
		return y;
		return z;
		return n;
	}
}

void Equation(int x, int y)
{
	if (count(x, y) == Variants(x, y))
	{
		cout << "Test is successfull :)" << endl;
	}
	else
		cout << "Test isn't successfull :(" << endl;
}