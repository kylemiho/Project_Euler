#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//this program finds the 10,001th prime number

bool isPrime(const int haha)
{
	int number2 = haha;
	int checkHere = sqrt(number2) + 1;
	for (int i = 2; i < checkHere; ++i)
	{
		if ((number2 % i) == 0)
			return false;
	}
	cout << "Prime: " << number2 << endl;
	return true;
}
int main()
{
	int primecounter = 0;
	int number2 = 2;
	while (primecounter < 10001)
	{
		if (isPrime(number2))
			++primecounter;
		++number2;
	}

	cout << "Answer: " << number2 - 1 << endl;


	return 0;
}