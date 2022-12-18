#include "Nasled.h"

void Nasled::find(int Month) {
	bool flag = false;
	for (int i = 0; i < counter; i++) {
		if (sg[i].birthday[2] == Month) {
			sg[i].GetValues();
			flag = true;
		}
		if (flag == false) 
			cout << "not found!\n";
	}
}

void Nasled::set() {
	sg[counter].SetValues();
	counter++;
	//sort();
}

void Nasled::print() {
	for (int i = 0; i < counter; i++) {
		sg[i].GetValues();
	}
}

void Nasled::sort() {
	sign temp;
	for (int i = 0; i < counter; i++)
		for (int j = i + 1; j < counter; j++)
			if (strcmp(sg[i].sign_of_human, sg[j].sign_of_human) > 0) {
				temp = sg[i];
				sg[i] = sg[j];
				sg[j] = temp;
			}
}

void Nasled::delet(int numb) {
	for (int i = numb - 1; i < counter - 1; i++) 
		sg[i] = sg[i + 1];
}

void Nasled::replase(int numb) {
	sign temp;
	numb--;
	temp.SetValues();
	counter++;
	for (int i = counter - 1; i > numb; i--)
		sg[i] = sg[i - 1];
	sg[numb] = temp;
}

void Nasled::dopf(char name[255]) {
	bool flag = false;
	for (int i = 0; i < counter; i++) {
		if (strcmp(sg[i].firstname, name) == 0) {
			sg[i].GetValues();
			flag = true;
		}
		if (flag == false)
			cout << "not found!\n";
	}
}
//Nasled::Nasled() {
//	cout << "Nasled class has been constructed" << endl << endl;
//}
//
//Nasled::~Nasled() {
//	cout << "Nasled class has been destructed" << endl << endl;
//}