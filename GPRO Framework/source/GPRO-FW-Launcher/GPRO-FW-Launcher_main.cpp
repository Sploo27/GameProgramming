// GPRO-FW-Launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//declaration/interface
int foo(int bar);



#include <stdio.h>
#include <stdlib.h>
#include<iostream> 

// to use cout<< change file name, and #include<iostream> 
using namespace std;

int main()
{
	int test = foo(9000);
	cout << "/n %d /n" << test;
	system("pause");
}

