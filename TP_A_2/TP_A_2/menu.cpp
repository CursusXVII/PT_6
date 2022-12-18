#include <iostream>
#include "Nasled.h"
using namespace std;

int main() {
	Nasled ns;
	while (1) {
		int user_chose = 0;

		cout << "1 - Add new person\n2 - Show persons\n3 - Show people who were born next month\n4 - Remove person\n5 - Insert\n6 - Sorting by zodiac signs\n7 - Dopfun\n";
		cin >> user_chose;
		if (user_chose == 1) {
			ns.set();
		}
		else if (user_chose == 2) {
			ns.print();
		}
		else if (user_chose == 3) {
			int temp = 0;
			cout << "print mounth: ";
			cin >> temp;
			ns.find(temp);
		}
		else if (user_chose == 4) {
			int temp = 0;
			cout << "Write value: ";
			cin >> temp;
			ns.delet(temp);
		}
		else if (user_chose == 5) {
			int temp = 0;
			cout << "print number to insert: ";
			cin >> temp;
			ns.replase(temp);
		}
		else if (user_chose == 6) {
			ns.sort();
			ns.print();
		}
		else if (user_chose == 7) {
			char temp[255];
			cout << "print name: ";
			cin >> temp;
			ns.dopf(temp);
		}
	}
}