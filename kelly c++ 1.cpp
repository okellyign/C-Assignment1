/*
* number1.cpp
* Name: [muomah okechukwu ignatius]
* Department: [Computer Science]
* Matric No: [47299705fb]
* A Program that reads an integer and determines and prints if its even or odd 
*
* Stub file to enable you complete assignment#1-question#1
*/
#include <iostream>

int main()
{
	int number1,number2;
	std::cout <<"enter an integer";
	std::cin >> number1;
	
	number2 = number1 / 2;
	if (number1 % 2 == 1)
	std::cout << number1 << "is an odd number\n";
	
	else
	std::cout << number1 <<"is an even number\n";
	return 0;
	
}
