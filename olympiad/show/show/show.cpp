// show.cpp : Defines the entry point for the console application.
//
// task5. "Show"

#include "stdafx.h"
#include<fstream>
#include<iostream>
using namespace std;
const int MAX=1000;			//max number of ways to build the necessary parties
const long BIG=1000000000;		// max number of participants
int _tmain(int argc, _TCHAR* argv[])
{
	ofstream fout ("output.txt");	
	ifstream fin ("input.txt");	
	int N;  
	fin>>N;				//number of ways
	if (N>MAX)			//error
		fout<<"Erorr! Number is too big!";

	int k = 0, i, d;
	i=N;
	while (k!=N)				
	{
		 k=2; 					//any number has 2 divider: this number and 1
		for ( d=2; d<=(i/2); d++ )		//looking number which has N divisors
			if ( (i%d)==0 )  k++;		//in k save number of divisors
		i++;
	}
	if (k>BIG)			
		fout<<" It's impossible gather so many people ";
	else
		fout<<i-1;		
	return 0;
}

