#include <iostream>
using namespace std;

int main()
{
    char choice;

    do                
    {
        float Num1, Num2, Result;
        char Operation;

        cout << "Enter First Number: ";
        cin >> Num1;
        cout << "Enter Second Number : ";
        cin >> Num2;
        cout << "Choose Operator (+, -, *, /): ";
        cin >> Operation;

        switch (Operation)
        {            
        case '+':
            Result = Num1 + Num2;
            cout << "Result: " << Result;
            break;
        case '-':
            Result = Num1 - Num2;
            cout << "Result: " << Result;
            break;
        case '*':
            Result = Num1 * Num2;
            cout << "Result: " << Result;
            break;
        case '/':
            if (Num2 != 0)
            {
                Result = Num1 / Num2;
                cout << "Result: " << Result;
            }
            else
                cout << "Invalid Input";
            break;
        default:
            cout << "Invalid Operation.";
        }

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Exiting the calculator program.\n";
    return 0;
}
