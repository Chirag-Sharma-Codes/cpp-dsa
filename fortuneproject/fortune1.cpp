#include <iostream>
#include <string>
#include<limits>
using namespace std;
string col;
bool valid_color()
{
    if (col == "red" || col == "yellow" || col == "black" || col == "green")
    {
        return true;
    }
    else
    {
        return false;
    }
}
int checkcin(int choice)
{
    for (int i = 0;; i++)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "invalid choice enter again";
            cin >> choice;
        }
        else
            return choice;
    }
}
int valid_no(int choice, int min, int max)
{
    for (int i = 0;; i++)
    {
        if (choice >= min && choice <= max)
        {
            return choice;
        }
        else
        {
            cout << "invalid choice\n";
            cout << "select your choice\nfrom " << min << "to" << max << endl;
            cin >> choice;
            choice=checkcin(choice);
        }
    }
}
int main()
{
    int choice;
    cout << "enter a color from given\nred\nyellow\nblack\ngreen\n";
    cin >> col;
    while (valid_color() == false)
    {
        cout << "invalid color\n";
        cout << "enter a color from given\nred\nyellow\nblack\ngreen\n";
        cin >> col;
    }

    if (col == "red" || col == "yellow")
    {
        cout << "select your choice\n1 ,2 ,3 ,4\n";
        cin >> choice;
        choice = checkcin(choice);
        choice = valid_no(choice, 1, 4);
        if (choice == 2 || choice == 4)
        {
            cout << "select your choice\n1 ,2 ,3 ,4\n";
            cin >> choice;
            choice = checkcin(choice);
            choice = valid_no(choice, 1, 4);
            if (choice == 1)
            {
                cout << "f1";
            }
            else if (choice == 2)
            {
                cout << "f2";
            }
            else if (choice == 3)
            {
                cout << "f3";
            }
            else if (choice == 4)
            {
                cout << "f4";
            }
        }
        else
        {
            cout << "select your choice\n5 ,6 ,7 ,8\n";
            cin >> choice;
            choice = checkcin(choice);
            choice = valid_no(choice, 5, 8);
            if (choice == 5)
            {
                cout << "f5";
            }
            else if (choice == 6)
            {
                cout << "f6";
            }
            else if (choice == 7)
            {
                cout << "f7";
            }
            else if (choice == 8)
            {
                cout << "f8";
            }
        }
    }
    else
    {
        cout << "select your choice\n5 ,6 ,7 ,8\n";
        cin >> choice;
        choice = checkcin(choice);
        choice = valid_no(choice, 5, 8);
        if (choice == 6 || choice == 8)
        {
            cout << "select your choice\n1 ,2 ,3 ,4\n";
            cin >> choice;
            choice = checkcin(choice);
            choice = valid_no(choice, 1,4);
            if (choice == 1)
            {
                cout << "f1";
            }
            else if (choice == 2)
            {
                cout << "f2";
            }
            else if (choice == 3)
            {
                cout << "f3";
            }
            else if (choice == 4)
            {
                cout << "f4";
            }
        }
        else
        {
            cout << "select your choice\n5 ,6 ,7 ,8\n";
            cin >> choice;
            choice = checkcin(choice);
            choice = valid_no(choice, 5, 8);
            if (choice == 5)
            {
                cout << "f5";
            }
            else if (choice == 6)
            {
                cout << "f6";
            }
            else if (choice == 7)
            {
                cout << "f7";
            }
            else if (choice == 8)
            {
                cout << "f8";
            }
        }
    }
}