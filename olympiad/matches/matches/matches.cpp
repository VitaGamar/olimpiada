// matches.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//if number of matches is divisible by 3 second player win
//else - firat player should take Nmod3 matches
int _tmain(int argc, _TCHAR* argv[])
{
	long res=0;
	unsigned mod;
	char ch;
	ofstream fout( "OUTPUT.TXT" );
	ifstream fin("INPUT.TXT");
	
	while( fin.get(ch) )	// read character by character from a file
	{
		res=res+(ch-48);	//add each symbol (value, not ascii)
	}
	
	mod = res % 3;			//if the sum of all digits is divisible by 3
	if (mod == 0)			//the number is divisible by 3 too
		fout<<2;		
	else				
		fout<<1<<" "<<mod;
	
	system("pause");
	return 0;
}

