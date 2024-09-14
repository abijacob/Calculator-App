#include <iostream>
using namespace std;

void displayMenu() {
  cout << "Simple Calculator\n";
  cout << "1. Perform a Calculation\n";
  cout << "2. Exit\n";
  cout << "Choose an option: ";
}

int main() {
  double num1, num2;
  char operation;
  int option;

  do {
    displayMenu();
    cin >> option;

    if (option == 1) {
      cout << "Enter the first number: ";
      cin >> num1;
      cout << "Enter operation (+, -, *, /): ";
      cin >> operation;
      cout << "Enter second number: ";
      cin >> num2;

      switch (operation) {
      case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
      case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
      case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
      case '/':
        if (num2 != 0) {
          cout << "Result: " << num1 / num2 << endl;
          break;
        } else {
          cout << "Error! Cannot divide by 0." << endl;
          break;
        }
      default:
        cout << "Invalid operation!" << endl;
      }
    } else if (option != 2) {
      cout << "Invalid option! Please choose again.\n";
    }
  } while (option != 2);

  cout << "Exiting the calculator.\n";

  return 0;
}