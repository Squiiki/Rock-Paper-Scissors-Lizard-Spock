/*
 Purpose:     This basic program will allow users to play rock, paper, scissors, lizard, spock! Its just a simple terminal game
 Author:      Braeden Corr
 Date:        May 12th, 2022
*/

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Variables related to player and computer player
    srand(time(NULL));      
    int computer = rand() % 5 + 1;
    int user = 0;
    bool userWin = false;
    bool tie = false;
    bool compWin = false;

    //Print  a title screen
    cout << "=================================\n";
    cout << "Rock Paper Scissors Lizard Spock!\n";
    cout << "=================================\n\n";

    //Display options
    cout << "1) ROCK\n";
    cout << "2) PAPER\n";
    cout << "3) SCISSORS\n";
    cout << "4) LIZARD\n";
    cout << "5) SPOCK\n\n\n";  

    //User picks
    cin >> user;
    cout << "\n...\n\n";
    cout << "Shoot!\n\n";

    //**********************************
    //Ridiculous Logic
    //**********************************
    if (user == 1 && computer == 2)
    {
        compWin = true;
    }
    else if (user == 1 && computer == 3)
    {
        userWin = true;
    }
    else if (user == 1 && computer == 4)
    {
        userWin = true;
    }
    else if (user == 1 && computer == 5)
    {
        compWin = true;
    }
    else if (user == 2 && computer == 1)
    {
        userWin = true;
    }
    else if (user == 2 && computer == 3)
    {
        compWin = true;
    }
    else if (user == 2 && computer == 4)
    {
        compWin = true;
    }
    else if (user == 2 && computer == 5)
    {
        userWin = true;
    }
    else if (user == 3 && computer == 1)
    {
        compWin = true;
    }
    else if (user == 3 && computer == 2)
    {
        userWin = true;
    }
    else if (user == 3 && computer == 4)
    {
        userWin = true;
    }
    else if (user == 3 && computer == 5)
    {
        compWin = true;
    }
    else if (user == 4 && computer == 1)
    {
        compWin = true;
    }
    else if (user == 4 && computer == 2)
    {
        userWin = true;
    }
    else if (user == 4 && computer == 3)
    {
        compWin = true;
    }
    else if (user == 4 && computer == 5)
    {
        userWin = true;
    }
    else if (user == 5 && computer == 1)
    {
        userWin = true;
    }
    else if (user == 5 && computer == 2)
    {
        compWin = true;
    }
    else if (user == 5 && computer == 3)
    {
        userWin = true;
    }
    else if (user == 5 && computer == 4)
    {
        compWin = true;
    }
    else if (user == computer)
    {
        tie = true;
    }
    else
    {
        cout << "Not a Valid Response.\n\n\n";
    }

    //Output computer choice
    switch (computer)
    {
    case 1:
        cout << "\nThe Computer chose ROCK...\n";
        break;
    case 2:
        cout << "\nThe Computer chose PAPER...\n";
        break;
    case 3:
        cout << "\nThe Computer chose SCISSORS...\n";
        break;
    case 4:
        cout << "\nThe Computer chose LIZARD...\n";
        break;
    case 5:
        cout << "\nThe Computer chose SPOCK...\n";
        break;
    default:
        cout << "\nInvalid Input.\n\n\n";
    }

    //Results
    if (userWin)
    {
        cout << "Congrats!! You won! Your ribbon is in the mail.\n\n\n";
    }
    else if (compWin)
    {
        cout << "So sorry, you were outbested by technology.\n\n\n";
    }
    else if (tie)
    {
        cout << "You tied! Now you're as smart as a computer.\n\n\n";
    }
    
}


