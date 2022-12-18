#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int cnt = 0;
    string word;
    cout << "Enter the word: ";
    cin >> word;

    string path = "word.txt";
    ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        cout << "Error" << endl;
    }
    else {
        string str;
        while (!fin.eof()) {
            fin >> str;
            cout << str << ' ';
            if (str == ".") {
                cout << "(" << cnt << ") ";
                cnt = 0;
            }
            if (str == word) {
                cnt++;
            }
        }
    }
    fin.close();

    return 0;
}