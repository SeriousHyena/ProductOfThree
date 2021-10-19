#include <iostream>

using namespace std;

//declare functions here
int multiply(int num1, int num2, int num3);

int main()
{
	int multiply(int num1, int num2, int num3);		//invoke the function here
	cout << multiply(2, 10, 5) << endl;
	return 0;

}

//place functions here
int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;


}