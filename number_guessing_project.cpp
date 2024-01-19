#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int secret, guess, tries, level;


    srand(time(0));


    secret = rand() % 100 + 1;


    cout << "Welcome to the number guessing game!\n";
    cout << "Please choose a difficulty level:\n";
    cout << "1. Easy (10 tries)\n";
    cout << "2. Medium (7 tries)\n";
    cout << "3. Hard (5 tries)\n";
    cin >> level;


    switch (level)
    {
    case 1:
        tries = 10;
        break;
    case 2:
        tries = 7;
        break;
    case 3:
        tries = 5;
        break;
    default:
        cout << "Invalid choice. Exiting the game.\n";
        return 0;
    }


    do
    {

        cout << "Enter your guess (1-100): ";
        cin >> guess;


        if (guess > secret)
        {

            cout << "Your guess is too high.\n";
        }
        else if (guess < secret)
        {

            cout << "Your guess is too low.\n";
        }
        else
        {

            cout << "You guessed it! Congratulations!\n";
            break;


        tries--;


        cout << "You have " << tries << " tries left.\n";
    } while (tries > 0);


    if (tries == 0)
    {

        cout << "You ran out of tries. You lose.\n";
        cout << "The secret number was " << secret << ".\n";
    }

    return 0;
}

