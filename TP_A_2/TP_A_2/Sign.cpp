#include "Sign.h"

void sign::SetValues() {
	cout << "Write firstname: ";
	cin >> firstname;
	cout << "Write secondname: ";
	cin >> secondname;
	cout << "Zodiac sign: ";
	cin >> sign_of_human;
	cout << "Print birthday(day mounth year): ";
	cin >> birthday[0] >> birthday[1] >> birthday[2];
}

void sign::GetValues() {
	cout << endl << "FirstName: " << firstname << endl;
	cout << "SecondName: " << secondname << endl;
	cout << "Birthday: " << birthday[0] << "." << birthday[1] << "." << birthday[2] << endl;
	cout << "Zodiac sign: " << sign_of_human << endl;
}

//sign::sign() {
//	cout << "SIGN class has been constructed" << endl << endl;
//	cout << "Write firstname: ";
//	cin >> firstname;
//	cout << "Write secondname: ";
//	cin >> secondname;
//	cout << "Zodiac sign: ";
//	cin >> sign_of_human;
//	cout << "Print birthday(day mounth year): ";
//	cin >> birthday[0] >> birthday[1] >> birthday[2];
//}
//
//sign::sign(char* secondname, char* firstname) {
//	cout << "SIGN class has been constructed" << endl << endl;
//	cout << "Write firstname: ";
//	this->firstname =  firstname;
//	this->secondname = secondname;
//}

//sign::~sign() {
//	cout << "SIGN class has been destructed" << endl << endl;
//}