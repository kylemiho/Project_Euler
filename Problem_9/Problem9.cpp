#include <iostream>
#include <cmath>

//Problem 9
//Objective: Find a pythagorean triplet where a + b + c = 1000
//naive running time: O(n^2)

int main()
{
	for (int a = 0; a < 500; ++a)
	{
		for (int b = 0; b < 500; ++b)
		{
			float c = sqrt(a*a + b*b);
			if (floor(c) == c) //check if number is whole
			{	
				if (c + a + b == 1000)
				{
					std::cout << "Found...  a = " << a << " b = " << b << " c = " << c << "\n";
					std::cout << "a*b*c = " << a*b*c << "\n";
				}
			}
		}
	}
	return 0;
}