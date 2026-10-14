#include <iostream>
using namespace std;
int main()
{
    string col;
    int choice;
    for (int i = 0;; i++)
    {
        cout << "enter a color from given\nred\nyellow\nblack\ngreen\n";
        cin >> col;
        if (col == "red" || col == "yellow" || col == "black" || col == "green")
        {
            if (col == "red" || col == "yellow")
            {
                cout << "select your choice\n1 ,2 ,3 ,4\n";
                cin >> choice;
                if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
                {
                    if (choice == 2 || choice == 4)
                    {
                        cout << "select your choice\n1 ,2 ,3 ,4\n";
                        cin >> choice;
                        if (choice == 1)
                        {
                            cout << "teri maa ka bhosda";
                        }
                        else if (choice == 2)
                        {
                            cout << "chotti lulli";
                        }
                        else if (choice == 3)
                        {
                            cout << "hizda";
                        }
                        else if (choice == 4)
                        {
                            cout << "gandu";
                        }
                    }
                    else
                    {
                        cout << "select your choice\n5 ,6 ,7 ,8\n";
                        cin >> choice;
                        if (choice == 5)
                        {
                            cout << "lund buddhi";
                        }
                        else if (choice == 6)
                        {
                            cout << "hunny";
                        }
                        else if (choice == 7)
                        {
                            cout << "bhaduaa";
                        }
                        else if (choice == 8)
                        {
                            cout << "jhaatu";
                        }
                    }
                }
            }
            else
            {
                cout << "select your choice\n5 ,6 ,7 ,8\n";
                cin >> choice;
                if (choice == 5 || choice == 6 || choice == 7 || choice == 8)
                {
                    if (choice == 6 || choice == 8)
                    {
                        cout << "select your choice\n1 ,2 ,3 ,4\n";
                        cin >> choice;
                        if (choice == 1)
                        {
                            cout << "teri maa ka bhosda";
                        }
                        else if (choice == 2)
                        {
                            cout << "chotti lulli";
                        }
                        else if (choice == 3)
                        {
                            cout << "hizda";
                        }
                        else if (choice == 4)
                        {
                            cout << "gandu";
                        }
                    }
                    else
                    {
                        cout << "select your choice\n5 ,6 ,7 ,8\n";
                        cin >> choice;
                        if (choice == 5)
                        {
                            cout << "lund buddhi";
                        }
                        else if (choice == 6)
                        {
                            cout << "hunny";
                        }
                        else if (choice == 7)
                        {
                            cout << "bhaduaa";
                        }
                        else if (choice == 8)
                        {
                            cout << "jhaatu";
                        }
                    }
                }
            }
            return 0;
        }
        else
        {
            cout << "invalid color\n";
        }
    }
}