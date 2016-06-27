#include <iostream>;
#include <math.h>;
#include <time.h>;
#include <exception>;

using namespace std;


class calc {

private:
	int a, b, result;

public:

	void setValueInt(int z, int y){
		a = z;
		b = y;
	}


	void displayIntCalc(){
		cout << a << " " << b << endl;
	}

	void setRandomNumbers(){
		srand(time(NULL));
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
	}

	int addInt(){
		result = a + b;
		return result;
	}

	int subInt(){
		result = a - b;
		return result;
	}

	void isItNegativeInt(){
		if (a < 0 || b < 0)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	void isItPositiveInt(){
		if (a > 0 || b > 0)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	void isResultPositive(){
		if (result > 0)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	void isResultNegative(){
		if (result < 0)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	int multiplyInt(){
		result = a * b;
		return result;
	}

	int divideInt(){
		
		result = a / b;
		/*
		try{
			a / b;
			throw logic_error("Cannot be divided by zero value number");
		}
		catch (exception e){
			cout << e.what() << endl;
		}
		*/
		if (b == 0){
			cout << "cannot divide by zero" << endl;
			return 0;
		}
		else
			return result;
	}

	int whatsIntRemain(){
		result = a % b;
		/*
		try{
			a % b;
			throw logic_error("Cannot be mod by a zero value number");
		}
		catch (exception e){
			cout << e.what() << endl;
		}
		*/
		if (b == 0){
			cout << "cannot mod by zero" << endl;
			return 0;
		}
		else
			return result;
	}

};