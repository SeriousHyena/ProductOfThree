#include <iostream>

using namespace std;

//declare functions here
int multiply(int num1, int num2, int num3);

int main()
{
	int solution = multiply(3, 4, 6);		//invoke the function here
	cout<<endl << multiply(3, 4, 6)<<endl;
	cout << solution << endl;
	return 0;

}

//place functions here
int multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;


}