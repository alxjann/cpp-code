/*
Write a program that simulates movie theatre admittance. It asks the user for their age
and whether they have a student ID, and then determines if the person is eligible for a
student discount end eligible to watch the movie. Please consider invalid age. Display if
the student is allowed to watch the movie, with discount and the price of the ticket to
be paid.
*/

#include <iostream>

using namespace std;

int age;
char hasParentalSupervision, hasStudentID;
const int price = 200;

void getDiscountedPrice() {
	if (hasStudentID == 'y' || hasStudentID == 'Y') {
		if (age >= 4 && age <= 15) {
			cout << "Amount to be paid: " << price * 0.85 << " (with discount)";
		}
		else if (age > 15 && age < 18) {
			 cout << "Amount to be paid: " << price * 0.95 << " (with discount)";
		}
	}
	else  cout << "Amount to be paid: " << price << " (full price)";
}

void checkParentalSupervision() {
	if (hasParentalSupervision == 'y' || hasParentalSupervision == 'Y') {
		cout << "You are allowed to watch the movie!\n";
		
		if (age == 2 || age == 3) {
			cout << "Amount to be paid: FREE!";
		} 
		else getDiscountedPrice();
	}
	else {
		cout << "You are not allowed to watch. Parental supervision is required!";
	}
}

int main() {
	cout << "Enter your age: ";
	cin >> age;

	if (age < 2 || age > 18) {
		cout << "Invalid Age!";
		return 0;
	}

	if (age >= 4 && age < 18) {
		cout << "Do you have a student id? (y/n): ";
		cin >> hasStudentID;
	}

	if (age >= 2 && age <= 15) {
		cout << "With Parental Supervision (y/n): ";
		cin >> hasParentalSupervision;
	}

	if (age == 2 || age == 3) {
		checkParentalSupervision();
	} 
	else if (age >= 4 && age <= 15) {
		checkParentalSupervision();
	}
	else if (age > 15 && age < 18) {
		getDiscountedPrice();
	}

}
