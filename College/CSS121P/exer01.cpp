/*
  Extracting Digits:
    - Extract and display ones, tens, hundreds, thousands, and ten thousands digit
    - Display reversed number
    - Do not use loops and if-else-statement
*/

#include <iostream>

using namespace std;

int main() {
	int num, reversedNum, ones, tens, hundreds, thousands, tenThousands;

	cout << "Enter a 5-digit number: ";
	cin >> num;

	ones = num % 10;
	tens = num % 100 / 10;
	hundreds = num % 1000 / 100;
	thousands = num % 10000 / 1000;
	tenThousands = num / 10000;

	reversedNum = (ones * 10000) + (tens * 1000) + (hundreds * 100) + (thousands * 10) + tenThousands;

	cout << "Ten Thousand's Digit is " << tenThousands << "\n";
	cout << "Thousand's Digit is " << thousands << "\n";
	cout << "Hundreds's Digit is " << hundreds << "\n";
	cout << "Ten's Digit is " << tens << "\n";
	cout << "One's Digit is " << ones << "\n";
	cout << "The reverse order is " << reversedNum;
}


/* 
- Using for loop

int main() {
	string reversedNum = "";
	string values[5] = {"Ten Thousands", "Thousands", "Hundreds", "Tens", "Ones"};

	for (int i = 0; to_string(num).length()-1; i >= 0; i--) {
		cout << values[i] << " : " << to_string(num)[i] << "\n";
		reversedNum += to_string(num)[i];
	}
}

*/
