#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;
int main()
{
	string Filename;
	ifstream InFile;
	ofstream OutFile;
	string Name;
	int score;
	srand(time(0));
	cout << "Enter file name : ";
	cin >> Filename;

	OutFile.open(Filename.c_str(),ios_base::out | ios_base::app);
	cout << "Now open file " << Filename << " for write." << endl;
	
	for(int n=1; n<=3; n++)
	{
		cout << "Enter name : ";
		cin >> Name;
		cout << "Enter score : ";
		cin >> score;
		OutFile << Name << " " << score <<endl;
	}
	cout << endl;
	OutFile.close();	
	InFile.open(Filename.c_str());
	cout << "======================="<< endl;
	cout << "Name" << "\t" << "Score" << endl;
	cout << "======================="<< endl;
	InFile >> Name;
	InFile >> score;
	while(!InFile.eof())
	{
		cout << Name << "\t" << score << endl;
		InFile >> Name;
		InFile >> score;
	}
	cout << endl;
	InFile.close();
	cout << "Now close file " << Filename << ".\n\n";
	return(0);
}