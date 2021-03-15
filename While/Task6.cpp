#include <iostream>
#include "Header.h"
#include <conio.h>
using namespace std;

int main()
{
    int n, k;
    double eps;
    while (true)
    {
        cout << "1. Task 1\n2. Task 2\n3. Task 3\n4. Task 4\n5. Task 5\n6. Exit\n";
        switch (_getch())
        {
        case '1':
            system("cls");
            cout << "Task1. Enter quantity of numbers to sum: ";
            cin >> n;
            cout << "Sum is: " << summ(n)<<endl;
            cout << "Press any key to return to menu\n";
            _getch();
            break;

        case '2':
            system("cls");
            cout << "Task2. Enter precision: ";
            cin >> eps;
            cout << "Sum is: " << summ2(eps) << endl;
            cout << "Press any key to return to menu\n";
            _getch();
            break;
        case '3':
            system("cls");
            cout << "Task3. Enter quantity and frequency of numbers to display: ";
            cin >> n >> k;
            cout << "Sequence:\n";
            print(n, k);
            cout << "\nPress any key to return to menu\n";
            _getch();
            break;
        case '4':
            system("cls");
            cout << "Task4. Enter precision: ";
            cin >> eps;
            cout << "Number of first precised element: " << findFirstElement(eps) << endl;
            cout << "Press any key to return to menu\n";
            _getch();
            break;
        case '5':
            system("cls");
            cout << "Task5. Enter precision: ";
            cin >> eps;
            cout << "Number of first negative precised element: " << findFirstNegativeElement(eps) << endl;
            cout << "Press any key to return to menu\n";
            _getch(); 
            break;
        case '6':
            system("cls");
            return 0;
        default:
            cout << "Either you missed or a fool. Try another key" << endl;
            break;
        }

    }
}
