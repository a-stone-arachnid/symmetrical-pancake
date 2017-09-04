#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>

void copyright(float version, unsigned int build, unsigned short year, unsigned int cmdver)
{
	using namespace std;
	system("cls");
	cout << "Jeff Virtual Assistant [v" << version << "." << build << " (commands version " <<cmdver<< ")]\n";
	cout << "Copyright (c) " << year << " Ethan Nord. \n \n";
}
void requestText() {
	using namespace std;
	cout << ": ";
}
void respond(std::string response) {
	using namespace std;
	cout << "Jeff: " << response << "\n\n";
}