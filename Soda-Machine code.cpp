/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void printMenu() {
	cout << "Welcome to the Tasty Soda Vending Machine!" << endl;
	cout << "menu: \n";
	cout << "	s - report the machine status\n";
	cout << "	d - drop in a quarter\n";
	cout << "	1 - select Mountain Dew\n";
	cout << "	2 - select Coca Cola\n";
	cout << "	3 - select Dr. Pepper\n";
	cout << "	4 - select Mountain Dew\n";
	cout << "	r - restock the machine\n";
	cout << "	q - quit\n";
	cout << "\n";
	cout << "Each item costs 75 cents, enjoy!	\n";
	cout << "\n";
}

char getInput() {
	char c;
	bool valid = false;

	while (!valid) {
		cout << "Your selection: ";
		cin >> c;
		if (c == '1' || c == '2' || c == '3' || c == '4' || c == 's' | c == 'd' || c == 'r' || c == 'q') valid = true;
		else cout << "I do not understand. Please make a selection.\n";
	}
	return c;
}

int main() {
	char i;
	bool quit = false;
	const float d = .25;
	int L = 5;
	int C = 7;
	int G = 1;
	int P = 6;
	float bank = 0.00;
	float hopper = 0.00;

	printMenu();
	while (!quit) {
		i = getInput();
		if (i == '1' && (hopper >= 0.75) && L > 0) { //pack of Lucky Strikes// 
			cout << "A can of Mountain Dew is vended out" << endl;
			bank = bank + hopper;
			L = L - 1;
			hopper = 0;
		}
		else if (i == '1' && (hopper >= 0.75)) {
			cout << "You hear mechanical clanking, but no soda appears." << endl;
			cout << "Please make a new selection" << endl;
		}
		else if (i == '2' && (hopper >= 0.75) && C > 0) { //pack of Camels//
			cout << "A can of Coca Cola is vended out" << endl;
			bank = bank + hopper;
			C = C - 1;
			hopper = 0;
		}
		else if (i == '2' && (hopper >= 0.75)) {
			cout << "You hear mechanical clanking, but no soda appears." << endl;
			cout << "Please make a new selection" << endl;
		}
		else if (i == '3' && (hopper >= 0.75) && G > 0) { // pack of Gauloise//
			cout << "A can of Dr. Pepper is vended out" << endl;
			bank = bank + hopper;
			G = G - 1;
			hopper = 0;
		}
		else if (i == '3' && (hopper >= 0.75)) {
			cout << "You hear mechanical clanking, but no soda appears." << endl;
			cout << "Please make a new selection" << endl;
		}
		else if (i == '4' && (hopper >= 0.75) && P > 0) { // pack of Pall Malls
			cout << "A can of Sprite is vended out" << endl;
			bank = bank + hopper;
			P = P - 1;
			hopper = 0;
		}
		else if (i == '4' && (hopper >= 0.75)) {
			cout << "You hear mechanical clanking, but no soda appears." << endl;
			cout << "Please make a new selection" << endl;
		}
		else if (i == 's') { //status
			cout << "status" << endl;
			cout << "There are "<< L <<" cans of Mountain Dew" << endl;
			cout << "There are " << C <<" cans of Coca Cola" << endl;
			cout << "There are " << G <<" cans of Dr. Pepper" << endl;
			cout << "There are " << P <<" cans of Sprite" << endl;
			cout << "There is " << bank + hopper <<"$ profit in the machine" << endl;
			cout << "There is " << hopper <<"$ currently in the machine" << endl;
		}
		else if (i == 'd') {
			cout << "ching" << endl;
			hopper = hopper + .25;
		}
		else if (i == 'r') { //restock
			cout << "the machine is restocked by a young fellow" << endl;
			bank = 0.00;
			L = 10;
			C = 10;
			G = 10;
			P = 10;
		}
		else if (i == 'q') {
			//quit
			cout << "quit.\n";
			cout << "Please come again!" << endl;
			quit = true;
		}
		else
			cout << "nothing happened." << endl;
	}
	return 0;

}