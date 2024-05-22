#include <iostream>

void showMenu() {
    std::cout << "Simple Calculator" << std::endl;
    std::cout << "1. Addition (+)" << std::endl;
    std::cout << "2. Subtraction (-)" << std::endl;
    std::cout << "3. Multiply (*)" << std::endl;
    std::cout << "4. Division (/)" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Choose an operation: ";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        showMenu();
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                    break;
                case 2:
                    result = num1 - num2;
                    std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                    break;
                case 3:
                    result = num1 * num2;
                    std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                    } else {
                        std::cout << "Error: Division by zero is not allowed." << std::endl;
                    }
                    break;
                default:
                    break;
            }
        } else if (choice == 5) {
            std::cout << "Exiting the calculator. Goodbye!" << std::endl;
        } else {
            std::cout << "Invalid choice. Please try again" << std::endl;
        }

    } while (choice != 5);

    return 0;
}
