#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
//Problem 10
//Objective: Find the sum of the first 2 million numbers that are prime

int main()
{
	long long sum = 0;
	bool isPrime;

	vector <long long> listOfPrimes;
	for (long long i = 3; i < 2000000; i = i + 2)
	{
		//resets for prime checker
		isPrime = true;
		//prime checker
		int j = 0;
		j = 0;
		if (j < listOfPrimes.size())
		{
			while ((listOfPrimes.at(j) <= sqrt(i)) && j < listOfPrimes.size())
			{
				if (i % listOfPrimes.at(j) == 0)
				{
					//number is not prime
					isPrime = false;
				}
				++j;
			}
		}
		if (isPrime)
		{
			listOfPrimes.push_back(i);
			sum += i;
		}
		if (i == 1000001)
	}
	cout << "Sum: " << sum+2 << endl;
	return 0;
}