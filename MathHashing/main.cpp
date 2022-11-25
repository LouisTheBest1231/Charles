

#include <iostream>
#include <fstream>
#include <vector>


using namespace std;


int FUNCTION(int m)
{
	int z = m % 201577427;
	z = z % 461167;



	return z;
}

int main() 
{
	
	vector<int> matricule;
	vector<int> hashing;

	
	ifstream file ("matricules.txt");
	while (!file.eof()) 
	{
		string result;
		file >> result;

		if (result != "") 
		{
			matricule.push_back(atoi(result.c_str()));
		}
		
	}


	for (int i = 0; i < matricule.size(); i++) 
	{
		
		hashing.push_back(FUNCTION(matricule[i]));
	}


	for (int i = 0; i < hashing.size(); i++) 
	{
		cout << matricule[i] << " ------------- " << hashing[i] << endl;;
	}



	return 0;
}






