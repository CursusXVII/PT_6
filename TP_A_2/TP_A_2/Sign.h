#pragma once
#include <iostream>
using namespace std;

class sign {
public:
	char* secondname = new char[255];
	char* firstname = new char[255];
	int birthday[3];
	char sign_of_human[255];
	void GetValues();
	void SetValues();
	//sign();
	//sign(char*, char*);
	//~sign();
};