#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
//The program finds the largest product between 13 adjacent digits from the 1000 digit long number
using namespace std;

//this function fills up the vector with the number we are getting info from.
void FILLTHEFILE(vector<int> &thousandDigits)
{
	string buffer;
	stringstream otherBuffer;
	int haha;
	
	//opens the textfile
	ifstream thousand;
	thousand.open("C:\\Users\\Kyle\\Desktop\\Project_Euler\\Problem_8\\input.txt");
	if (thousand.bad())
	{
		cout << "Error! could not read text file!\n";
		return;
	}


	while (!thousand.eof())
	{
		//we got the input, but now need to convert then parse it
		getline(thousand, buffer);

		//parses line, and then adds numbers into vector seperately
		for (unsigned i = 0; i < buffer.size(); ++i)
		{
			//use string stream to convert char to int
			otherBuffer << buffer.at(i);
			otherBuffer >> haha;
			//add int to vector
			thousandDigits.push_back(haha);
			//clear stringstream to allow reuse
			otherBuffer.clear();
		}
	}
	thousand.close();
	return;
}

long long calculateLargest13(const vector<int> &thousandDigits)
{
	//need to go through every single digit, but we stop at 13 digits before the vector ends to prevent going out of range
	long long int largestProduct = 0;
	long long int currentProduct = 1;
	for (unsigned i = 0; i < thousandDigits.size() - 12; ++i)
	{

		currentProduct = 1;
		for (unsigned j = i; j < i + 13; ++j)
		{
			currentProduct *= thousandDigits.at(j);
		}
		if (currentProduct > largestProduct)
		{
			cout << "New largest product: " << currentProduct << " ";
			for (unsigned k = i; k < i + 13; ++k)
			{
				cout << thousandDigits.at(k) << " ";
			}
			cout << endl;
			largestProduct = currentProduct;
		}
	}
	return largestProduct;
}

int main()
{
	vector<int> thousandDigits;
	FILLTHEFILE(thousandDigits);
	long long answer = calculateLargest13(thousandDigits);
	cout << "The largest product between 13 adjacent digits is: " << answer << endl;

	return 0;
}