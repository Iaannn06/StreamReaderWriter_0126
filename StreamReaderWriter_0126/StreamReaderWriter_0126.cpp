#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	ofstream outfile;
	outfile.open("Ian.txt");
	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);

	}
}


