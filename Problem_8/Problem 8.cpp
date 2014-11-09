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
		getline(thousand,buffer);

		stringstream converter(buffer.c_str());
		converter >> haha;
		cout << haha << flush;

	}
	cout << endl;
	thousand.close();
	return;
}

int main()
{
	vector<int> thousandDigits;
	FILLTHEFILE(thousandDigits);
	

	return 0;
}