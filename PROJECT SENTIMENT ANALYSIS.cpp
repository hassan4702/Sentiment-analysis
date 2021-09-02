#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include<conio.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
class postive
{
public:
	void dispS(string arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << "   ";
		}
	}
	void dispI(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			
			cout << arr[i] << "      ";
		}
	}
	void dispF(float arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			//Sleep(500);
			cout << arr[i] << " ";
		}
	}
	void uniqueword(string uniquearray[], string sen1[], int size, int size2)
	{
		int index = 0;
		index = size2;
		int count = 0, count2 = 0;
		for (int i = 0; i < size; i++)
		{
			count = 0;
			for (int j = 0; j < size2; j++)
			{

				if (uniquearray[j] == sen1[i])
				{
					count++;
				}

			}
			if (count > 0)
			{
				;
			}
			else
			{
				uniquearray[index] = sen1[i];
				index++;
			}


		}
	}
	void check(string uniquearray[], string sen[], int num[], int size, int size2)
	{
		int j = 0;
		int i = 0;
		int count, count2 = 0, num2[13], x = 0, y = 0;
		for (i = 0; i < size; i++)
		{
			count = 0;
			for (j = 0; j < size2; j++)
			{
				if (num[j] == 1)
				{

				}
				else
				{

					if (uniquearray[j] == sen[i])
					{

						num[j] = 1;
					}
					else
					{
						num[j] = 0;
					}
				}
			}//0100000000


		}

	}
	void add3array(int prod[], int arr[], int brr[], int crr[])
	{
		for (int i = 0; i < 13; i++)
		{
			prod[i] = arr[i] + brr[i] + crr[i];
		}
	}
	void add2array(int prod[], int arr[], int brr[])
	{
		for (int i = 0; i < 13; i++)
		{
			prod[i] = arr[i] + brr[i];
		}
	}
	float sumF(float arr[])
	{
		float sum = 0;
		for (int i = 0; i < 13; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
	int sum(int arr[])
	{
		int sum = 0;
		for (int i = 0; i < 13; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
	float prod(float arr[], int n)
	{
		float prod = 1.0;
		for (int i = 0; i < 13; i++)
		{
			prod = prod * arr[i];

		}
		return prod;
	}
	void prob(int arr[], float ans[], float n)
	{
		for (int h = 0; h < 13; h++)
		{
			ans[h] = (arr[h] + 1.0) / (n + 13.0);
		}
	}
};
int main()
{
	postive myobj;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);//color
	float ansp[13];
	float posporb = 0;
	float negporb = 0;
	float ansn[13];
	int count = 0, len = 0, input = 0;
	int Pcount[13];
	int Ncount[13];
	int total[13];
	string sen1[5] = { "it", "has","a","beautiful","shape" };
	string sen2[5] = { "it", "has", "a", "powerful", "engine" };
	string sen3[4] = { "has", "a", "beautiful", "interior" };
	string sen4[5] = { "has", "a", "bad", " fuel", "average" };
	string sen5[3] = { "it", "overheats", "frequently" };
	string uniquearray[] = { "it", "has","a","beautiful","shape"," "," " ," " ," " ," " ," " ," " ," " };
	string userinput[] = { "it", "has", "a", "bad", " fuel", "average" };
	string userinput2[] = { "it", "has", "a","beautiful", "engine" };
	int s1[100] = { 0 };
	int s2[100] = { 0 };
	int s3[100] = { 0 };
	int s4[100] = { 0 };
	int s5[100] = { 0 };
	int ui[100] = { 0 };
	myobj.uniqueword(uniquearray, sen2, 5, 5);
	myobj.uniqueword(uniquearray, sen3, 4, 7);
	myobj.uniqueword(uniquearray, sen4, 5, 8);
	myobj.uniqueword(uniquearray, sen5, 3, 11);
	cout << "                      PROCESSING ";
	cout << " Five sentences we took are " << endl;
	SetConsoleTextAttribute(hConsole, 2);
	myobj.dispS(sen1, 5);
	cout << "  " << "+VE sentence" << endl;
	myobj.dispS(sen2, 5);
	cout << "  " << "+VE sentence" << endl;
	myobj.dispS(sen3, 4);
	cout << "  " << "+VE sentence" << endl;
	SetConsoleTextAttribute(hConsole, 4);
	myobj.dispS(sen4, 5);
	cout << "  " << " -VE sentence" << endl;
	myobj.dispS(sen5, 3);
	cout << "  " << " -VE sentence" << endl;
	SetConsoleTextAttribute(hConsole, 7);

	cout << "\nThe first three sentences are +ve and the last two sentences are -ve";
	cout << endl;

	cout << "\nThe unique array from these sentences is " << endl;
	SetConsoleTextAttribute(hConsole, 6);
	myobj.dispS(uniquearray, 13);
	SetConsoleTextAttribute(hConsole, 7);
	cout << endl;
	cout << endl;
	cout << "Now we will compare all sentences with the unique array " << endl;

	myobj.check(uniquearray, sen1, s1, 13, 13);
	myobj.check(uniquearray, sen2, s2, 13, 13);
	myobj.check(uniquearray, sen3, s3, 13, 13);
	myobj.check(uniquearray, sen4, s4, 13, 13);
	myobj.check(uniquearray, sen5, s5, 13, 13);
	cout << "                ";
	SetConsoleTextAttribute(hConsole, 6);
	myobj.dispS(uniquearray, 13);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "First sentence  ";
	myobj.dispI(s1, 13);
	cout << endl;
	cout << "Second sentence ";
	myobj.dispI(s2, 13);
	cout << endl;
	cout << "Third sentence  ";
	myobj.dispI(s3, 13);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Fourth sentence ";
	myobj.dispI(s4, 13);
	cout << endl;
	cout << "Fivth sentence  ";
	myobj.dispI(s5, 13);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	myobj.add3array(Pcount, s1, s2, s3);
	cout << "adding first 3 +ve rows   ";
	myobj.dispI(Pcount, 13);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "adding last 2 -ve rows    ";
	myobj.add2array(Ncount, s4, s5);
	myobj.dispI(Ncount, 13);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 6);
	cout << "Total of +ve and -ve rows ";
	myobj.add2array(total, Pcount, Ncount);
	myobj.dispI(total, 13);
	cout << endl;
	cout << endl;

	int uniwords = sizeof(uniquearray) / sizeof(uniquearray[0]);
	cout << "Total unique words are    " << uniwords;

	int poswrd = myobj.sum(Pcount);
	int negwrd = myobj.sum(Ncount);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "Total positive words are  " << poswrd << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Total positive words are  " << negwrd;
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "Probability of +ve ";
	myobj.prob(Pcount, ansp, 14.0);
	myobj.dispF(ansp, 13);
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Probability of -ve ";
	myobj.prob(Ncount, ansn, 8.0);
	myobj.dispF(ansn, 13);
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 2);
	cout << "Sum of +ve probability  " << myobj.sumF(ansn);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 4);
	cout << "Sum of -ve probability  " << myobj.sumF(ansp);
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Now we will give the program a sentence" << endl;
	cout << "Press 1 to give a positive sentence\nPress 2 to give a negative sentence " << endl;
	cin >> input;
	cout << endl;
	cout << endl;
	if (input == 1)
	{
		SetConsoleTextAttribute(hConsole, 2);
		cout << "The +ve sentence given is    '";
		myobj.dispS(userinput2, 5);
		cout << "'" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Now we will compare all sentences with the unique array " << endl;
		SetConsoleTextAttribute(hConsole, 6);
		myobj.dispS(uniquearray, 13);
		cout << endl;
		SetConsoleTextAttribute(hConsole, 2);
		myobj.check(uniquearray, userinput2, ui, 13, 13);
		myobj.dispI(ui, 13);
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 4);
		cout << "Negative probability " << endl << endl;
		float muln[13] = { 0 };
		for (int y = 0; y < 13; y++)
		{
			muln[y] = ui[y] * ansn[y];
		}
		myobj.dispF(muln, 13);
		cout << endl;
		cout << "\nSwitiching 0 with 1 in order to mulitply ";
		cout << endl;
		for (int t = 0; t < 13; t++)
		{
			if (muln[t] == 0)
			{
				muln[t] = 1;
			}
		}
		cout << endl;
		myobj.dispF(muln, 13);
		cout << endl;
		cout << "\nNegative probability is ";
		negporb = myobj.prod(muln, 13);
		cout << negporb;
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 2);
		cout << "Positive probability " << endl << endl;
		float mulp[13] = { 0 };
		for (int y = 0; y < 13; y++)
		{
			mulp[y] = ui[y] * ansp[y];
		}
		myobj.dispF(mulp, 13);
		cout << endl << endl;

		for (int t = 0; t < 13; t++)
		{
			if (mulp[t] == 0)
			{
				mulp[t] = 1;
			}
		}
		cout << "Switiching  with 1 in order to mulitply " << endl << endl;
		myobj.dispF(mulp, 13);
		cout << endl << endl;

		posporb = myobj.prod(mulp, 13);
		cout << "Positive probibility " << posporb;
	}
	else if (input == 2)
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << "The -ve sentence given is    '";
		myobj.dispS(userinput, 6);
		cout << "'" << endl;
		SetConsoleTextAttribute(hConsole, 7);
		cout << "Now we will compare all sentences with the unique array " << endl;
		SetConsoleTextAttribute(hConsole, 6);
		myobj.dispS(uniquearray, 13);
		cout << endl;
		SetConsoleTextAttribute(hConsole, 4);
		myobj.check(uniquearray, userinput, ui, 13, 13);
		myobj.dispI(ui, 13);
		cout << endl;
		cout << endl;
		cout << "Negative probability " << endl << endl;
		float muln[13] = { 0 };
		for (int y = 0; y < 13; y++)
		{
			muln[y] = ui[y] * ansn[y];
		}
		myobj.dispF(muln, 13);
		cout << endl;
		cout << "\nSwitiching 0 with 1 in order to mulitply ";
		cout << endl;
		for (int t = 0; t < 13; t++)
		{
			if (muln[t] == 0)
			{
				muln[t] = 1;
			}
		}
		cout << endl;
		myobj.dispF(muln, 13);
		cout << endl;
		cout << "\nNegative probability is ";
		negporb = myobj.prod(muln, 13);
		cout << negporb;
		cout << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 2);
		cout << "Positive probability " << endl << endl;
		float mulp[13] = { 0 };
		for (int y = 0; y < 13; y++)
		{
			mulp[y] = ui[y] * ansp[y];
		}
		myobj.dispF(mulp, 13);
		cout << endl << endl;

		for (int t = 0; t < 13; t++)
		{
			if (mulp[t] == 0)
			{
				mulp[t] = 1;
			}
		}
		cout << "Switiching  with 1 in order to mulitply " << endl << endl;
		myobj.dispF(mulp, 13);
		cout << endl << endl;

		posporb = myobj.prod(mulp, 13);
		cout << "Positive probibility " << posporb;
	}
	
	float negans = negporb * 0.4;
	float posans = posporb * 0.6666;

	if (posans > negans)
	{
		SetConsoleTextAttribute(hConsole, 2);
		cout << endl << "\nSENTENCE IS +VE " << endl;
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << endl << "\nSENTENCE IS -VE " << endl;
	}
	SetConsoleTextAttribute(hConsole, 7);

}