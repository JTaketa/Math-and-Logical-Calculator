#include "calc.h"

int main(){

	calc num;
	int x, y;
	bool cont = true;
	char choice;

	/*
	num.setValueInt(1, 2);
	num.displayIntCalc();
	cout << num.isItNegativeInt() << endl;
	cout << num.isItPositiveInt() << endl;
	num.setRandomNumbers();
	num.displayIntCalc();
	cout << num.addInt() << endl;
	*/

	cout << "Welcome to the calculator here are the following options: " << endl;
	cout << " a: set a pair value \n b: set a pair of random number \n c: add the two numbers \n d: subtract the two numbers \n";
	cout << " e: multiply the pair numbers \n f: divide the pairs numbers \n g: find the remainder \n h: check if the number is positive \n i: check if the number is negative" << endl;
	cout << "j: checking for positive result \n k: checking for negative result \n q: quit" << endl;

	while (cont){
		cin >> choice;
		switch (choice){
		case 'a': cin >> x >> y; num.setValueInt(x, y); /*num.displayIntCalc();*/ break;
		case 'b': num.setRandomNumbers(); num.displayIntCalc(); break;
		case 'c': cout << num.addInt() << endl; break;
		case 'd': cout << num.subInt() << endl; break;
		case 'e': cout << num.multiplyInt() << endl; break;
		case 'f': cout << num.divideInt() << endl; break;
		case 'g': cout << num.whatsIntRemain() << endl; break;
		case 'h': num.isItPositiveInt(); break;
		case 'i': num.isItNegativeInt(); break;
		case 'j': num.isResultPositive(); break;
		case 'k': num.isResultNegative(); break;
		case 'q': cont = false; break;
		default: cout << "It's any choice above to choose." << endl;
		}
	}

	return 0;
}