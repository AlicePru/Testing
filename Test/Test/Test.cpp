
#include <iostream>
#include <math.h>
#include <fstream>
#include <iomanip>



using namespace std;
float division(float a, float b);
void Equation(float a, float b, int result);

int main()
{
	
	  int a, b,result;
	  ifstream variants("variants.txt");
	  if (!variants)
	  {
		  cout << "File open error!" << endl;
		
		  return 0;
	  }

	  cout << "                  TEST CASES FOR DIVISION OF TWO NUMBERS                         "  << endl;
	  while (!variants.eof())
	  {
		  cout << "_______________________________________________________________________________"<<endl;
		  variants >> a;
		  variants >> b;
		  variants >> result;
		  cout << "a= " << a << "\nb= " << b << endl;
		 
	
	     if (b == 0) {
			       cout << "Result for dividing on 0: " << division(a, b) << endl;
				   cout << "Equation of results : " << result << "=" << division(a, b) << endl;
				   
	}
	    else if (b > 0) {
		      cout << "Result for dividing on positive number: " << division(a, b) << endl;
			  cout << "Equation of results : " << result << "=" << division(a, b) << endl;

	}

		else {
			cout << "Result for dividing on negative number: " << division(a, b) << endl;
			cout << "Equation of results : " << result << "=" << division(a, b) << endl;

	}

	

		Equation(a, b, result);
		
	}
	

	cout << endl;
	variants.close();

	system("pause");
	return 0;
}

float division(float a, float b)
{
	float x=0;
	
		if (b == 0)
		{
			return 0;
		}
		x = a / b;
	
	
	return x;
}



void Equation(float a, float b,int result)
{
	if (division(a, b) == result)
	{
		cout << "Test is successfull :)" << endl;
	}
	else
		cout << "Test isn't successfull :(" << endl;
}