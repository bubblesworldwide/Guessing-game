// Guessing game for random values.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//A guessing game where the user has to guess the randomly generated number

int main()
{
    //declaration of variables
    int value = 0;
    int generatedValue = 0;
    char choice = ' ';
    bool cond = false;
    string name = " ";
    int count ;

    //srand function
    srand(time(NULL));

    //introduction to do while loop
    do
    {
        //update condition for new round
        cond = false;


        //allow user to enter values
        cout << "Enter your name : ";
        cin >> name;
        
        //render new line
        cout << endl;
        
        //introduce user to the game
        cout << "Hi " << name << " this is a guessing game where you need to guess the randomly generated values.\n";
        cout << "All the best\n";

        //first stage of the game
        cout << "Guess the generated number " << name << endl;
        cout << "Ranges between 10 and 50\n";
        cout << "Enter value : ";
        cin >> value;
        //check if value is greater than minimum
        //introduction to if statement
        if (value > 10 && value <= 30)
        {
            //render new line
            cout << endl;

            //initialize count for each new game
            count = 0;

            //generate the value
            generatedValue = 10 + rand() % (30 - 10 + 1);

            //introduction to for loop
            while (count < 5)
            {
                //introduction to if else statement
                if (value == generatedValue)
                {
                    //display a message
                    cout << "Congratulations you got it right on your "<<count<<" try!!!!!!" << endl;
                    break;
                }
                else if (value < generatedValue)
                {
                    //display
                    cout << "Too low.\n";
                }
                else
                {
                    //display
                    cout << "Too high.\n";
                }

                //allow user to enter new value
                cout << "Enter value : ";
                cin >> value;

                //render new line
                cout << endl;

                //update count
                count++;
            }
            //introduction to if statement
            if (value != generatedValue)
            {
                //display
                cout << "You failed to guess the randomly generated value after 5 tries.\n";
                cout << "The value was " << generatedValue << endl;
                break;

            }
        }
        else
        {
            //display
            cout << "Value is less than minimum or greater than maximum.\n";
            //break;
        }


        //ask user if they would like to try again
        //introduction to if statement
        cout << "Would you like to give it another try ? \n";
        cout << "Y - Yes and N- No\n";
        cin >> choice;

        //introduction to if statement
        if (toupper(choice) == 'Y')
        {
            //update condition
            cond = true;
        }
    } while (cond==true);
    //display
    cout << "Thank you " << name << " for trying out the guessing game. Best of luck\n";


    _getch();
    return 0;
}


