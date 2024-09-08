/*
AVERAGE OF 10 NUMBERS
-Ask the user to enter 10 positive numbers
-Display the 10 numbers and the average
*/

#include <iostream>
#include <map> 

using namespace std;

int main()
{
    int sum, num;
    map<int,int> numbers;

    for (int i = 0; i < 10; i++) {
        do {
            cout << "[" << i+1 << "] " << "Enter positive number: ";
            cin >> num;
        } while(num < 0);
        
        sum += num;
        numbers.insert({i+1,num});
    }

    
    cout << "\nList of Numbers: \n";
    
    for(const auto& nums: numbers) {
        cout << nums.first << ": " << nums.second << "\n";
    }   
    
    cout << "Average of the numbers: " << sum / 10;
}
