// Program: Two players start from 0 and alternatively add a number from 1 to 10 to the sum. The player who reaches 100 wins.

// Author: Ahmed Hassan Abdel Hamed_20230014 >>> no section in this time

// Version: 4.0

// Date: 2/3/2024


#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n\t\t\t\t\t\t*** Welcome to the 100 Game! ***\n\n";
    cout << "Two players start from 0 and alternatively add a number from 1 to 10 to the sum.\n";
    cout << "The player who reaches 100 wins.\n\n\n";
    //int number[] = {1,2,3,4,5,6,7,8,9,10}; // List of avaliable numbers
    int total = 0; // initial value
    int sub = 0;
    int points_p1,points_p2,player_1,player_2;
    while (true)
    {    
        while (true)    
        {
            if (total >= 90)
            {
                sub = 100 - total;
                cout << "Player 1, enter a number between 1 and " << sub << ": ";
                
                while (!(cin >> points_p1)) // Check input only integer 
                {
                    cout << "Invalid input. Please p1 enter a valid number: ";
                    cin.clear();
                    cin.ignore(123,'\n');
                }

                if (1 <= points_p1 && points_p1 <= sub)
                {
                    total = total + points_p1;
                    cout << "Total: " << total << endl;
                    break;
                }
                
                if (!(1 <= points_p1 && points_p1 <= sub)) // Check for error input number
                    cout << "Please p1 enter a number between 1 and "<< sub << ".\n" << endl;
            }
            else
            {
                cout << "Player 1, enter a number between 1 and 10: ";
                while (!(cin >> player_1)) // Check input only integer 
                {
                    cout << "Invalid input. Please p1 enter a valid number: ";
                    cin.clear();
                    cin.ignore(10,'\n');
                }

                if (1 <= player_1 && player_1 <= 10)
                {
                    total = total + player_1;
                    cout << "Total: " << total << endl;
                    break;
                }

                if (!(1 <= player_1 && player_1 <= 10)) // Check dor error input number
                    cout << "Please enter number between 1 and 10.\n" << endl;
            }
        }
        if (total == 100)
        {
            cout << "\n Player 1 is winner! \n" << endl;
            break;
        }   
        while (true)    
        {
            if (total >= 90)
            {
                sub = 100 - total;
                cout << "Player 2, enter a number between 1 and " << sub << ": ";
                
                while (!(cin >> points_p2)) // Check input only integer 
                {
                    cout << "Invalid input. Please p2 enter a valid number: ";
                    cin.clear();
                    cin.ignore(123,'\n');
                }
                
                if (1 <= points_p2 && points_p2 <= sub)
                {
                    total = total + points_p2;
                    cout << "Total: " << total << endl;
                    break;
                }
                
                if (!(1 <= points_p2 && points_p2 <= sub)) // Check dor error input number
                    cout << "Please p2 enter a number between 1 and " << sub << ".\n" << endl;
            }
            else
            {
                cout << "Player 2, enter a number between 1 and 10: ";
                while (!(cin >> player_2)) // Check input only integer 
                {
                    cout << "Invalid input. Please p2 enter a valid number: ";
                    cin.clear();
                    cin.ignore(123,'\n');
                }

                if (1 <= player_2 && player_2 <= 10)
                {
                    total = total + player_2;
                    cout << "Total: " << total << endl;
                    break;
                }

                if (!(1 <= player_2 && player_2 <= 10)) // Check dor error input number
                    cout << "Please enter number between 1 and 10.\n" << endl;
            }
        }
        if (total == 100)
        {
            cout << "\n Player 2 is winner! \n" << endl;
            break;
        }
    }
    return 0;
}