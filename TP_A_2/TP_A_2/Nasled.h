#pragma once
#include "Sign.h"
class Nasled : public sign
{
private:
	sign sg[20];
	int counter = 0;
public:
	/*Nasled();
	~Nasled();*/
	void print();
	void set();
	void sort();
	void find(int Month);
	void delet(int numb);
	void replase(int numb);
	void dopf(char name[255]);
	/*friend istream& operator >> (istream&, Nasled&);
	friend ostream& operator << (ostream&, Nasled&);*/
};