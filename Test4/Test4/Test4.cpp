
#include<iostream>
#include<math.h>
#include<conio.h>
#include<fstream>
using namespace std;
void Equation(int a, int b, float result);
int  main()
{
	int a, b;
	float result;
	ifstream variants("variants.txt");
	if (!variants)
	{
		cout << "File open error!" << endl;

		return 0;
	}

	cout << "                       TEST CASES FOR VALUE a POWER OF b" << endl;
	cout << " ";
	while (!variants.eof())
	{

		variants >> a;
		variants >> b;
		variants >> result;
		cout << "___________________________________________________________________________" << endl;
		cout << "a= " << a << "\nb= " << b << endl;
		if(a==0 && b == 0) {
			cout << "Error!!!"<<endl;

		}
		else if (a <0 && b <0) {
			cout << "Result for pow: " << pow(a, b) << endl;
			cout << "Negative result." << endl;
			cout << "Equation of results :     " << result << "=" << pow(a, b) << endl;

		}

		else if (a <0 && b >0) {
			cout << "Result for pow: " << pow(a, b) << endl;
			cout << "Negative result" << endl;
			cout << "Equation of results :     " << result << "=" << pow(a, b) << endl;

		}
		else if (a >0 && b >0) {
			cout << "Result for pow: " << pow(a, b) << endl;
			cout << "Positive result" << endl;
			cout << "Equation of results :     " << result << "=" << pow(a, b) << endl;

		}
		else if (a >0 && b <0) {
			cout << "Result for pow: " << pow(a, b) << endl;
			cout << "Positive result" << endl;
			cout << "Equation of results :     " << result << "=" << pow(a, b) << endl;

		}
		else if (a ==0 && b) {
			cout << "Result for pow: " << pow(a, b) << endl;
			cout << "Result is 0" << endl;
			cout << "Equation of results :     " << result << "=" << pow(a, b) << endl;

		}
		else if (a && b ==0) {
			cout << "Result for pow: " << pow(a, b) << endl;
			cout << "Result is 1" << endl;
			cout << "Equation of results :     " << result << "=" << pow(a, b) << endl;

		}



		Equation(a, b, result);

	}


	cout << endl;
	variants.close();
	system("pause");
	return 0;
}

void Equation(int a, int b, float result)
{
	if (pow(a, b) == result)
	{
		cout << "Test is successfull :)" << endl;
	}
	else
		cout << "Test isn't successfull :(" << endl;
}
