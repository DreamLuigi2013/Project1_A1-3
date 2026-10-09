#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
// Declared subtract function.
void subtract();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		// Added a break statement to prevent it from continuing to the subtract after finishing the add function.
		break;
	// Added a second case for subtraction, followed by a subtract function call and a break statement.
	case 2:
		subtract();
		break;
	}
	
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value: ");
	scanf_s("%lf", &num1);
	printf("Enter the second value: ");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}
// A subtraction function that takes two user inputted numbers and calculates the difference of them.
void subtract() {
	// Declares num1, and num2 to collect user input, and declares result to store the calculated difference of the two.
	double num1, num2, result;
	// Print and scan statments to collect user input for calculation.
	printf("Enter the first value: ");
	scanf_s("%lf", &num1);
	printf("Enter the second value: ");
	scanf_s("%lf", &num2);
	// Initializes result using the calculated difference between num1 and num2. The next line is a print statment that shows what math was done, and then prints the result.
	result = num1 - num2;
	printf("%lf - %lf = %lf\n", num1, num2, result);
}