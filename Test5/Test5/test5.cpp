#include <iostream>
using namespace std;
int main()
{
	int a, n,p,d;
	cin >> a;
	cin >> n;
	cout << "Choodse the day of week:" << endl;
	cout << "1)Monday\n" << "2)Other day\n";
	switch (d)
	{
	case 1:
	{
		if ((a < 12)&&(n%2))
		{
			p = 6.00;
			cout << "Price for ticket is " << (p*n) / 2 << "EUR";
		}
		else if ((12 < a < 60) && (n % 2))
		{
			p = 12.00;
			cout << "Price for ticket is " << (p*n) / 2 << "EUR";
		}
		else if ((a > 60) && (n % 2))
		{
			p = 10.00;
			cout << "TwoPrice for ticket is " << (p*n) / 2 << "EUR";
		}

		else
			cout<<""
	}

	case 2:

	
	}


}