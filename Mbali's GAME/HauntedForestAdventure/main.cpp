#include <iostream>
#include <string>
using namespace std;

string playerName;
int health = 15;
int choice;

void forest()
{
    cout << "You entered the dark forest and a branch fell on you!" << endl;
    cout << "You lost 5 health points." << endl;
    health = health - 5;
    cout << "Remaining health: " << health << endl;
}

void river()
{
    cout << "You crossed the river and found a magic fruit!" << endl;
    cout << "You gained 4 health points." << endl;
    health = health + 4;
    cout << "Remaining health: " << health << endl;
}

void mountain()
{
    cout << "You climbed the mountain and discovered a treasure!" << endl;
    cout << "You gained 2 health points." << endl;
    health = health + 2;
    cout << "Remaining health: " << health << endl;
}

void displayMenu()
{
    cout << "========================================" << endl;
    cout << "       HAUNTED FOREST ADVENTURE" << endl;
    cout << "========================================" << endl;

    cout << endl;
    cout << "PLAYER INFORMATION" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Player Name: " << playerName << endl;
    cout << "Location: Dark Forest" << endl;
    cout << "Health Points: " << health << endl;
    cout << "----------------------------------------" << endl;

    cout << endl;
    cout << "CHOOSE YOUR NEXT MOVE" << endl;
    cout << "1. Enter the forest" << endl;
    cout << "2. Cross the river" << endl;
    cout << "3. Climb the mountain" << endl;
    cout << "4. Leave the game" << endl;

    cout << "Your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            forest();
            break;

        case 2:
            river();
            break;

        case 3:
            mountain();
            break;

        case 4:
            cout << "Goodbye " << playerName << "!" << endl;
            cout << "Thanks for exploring the forest!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    if(health <= 0)
    {
        cout << "You have run out of health!" << endl;
        cout << "GAME OVER!" << endl;
        choice = 4;
    }
}

int main()
{
    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << endl;
    cout << "Welcome " << playerName << "!" << endl;
    cout << "You are lost in a haunted forest." << endl;
    cout << "Find your way out and try to survive!" << endl;

    do
    {
        displayMenu();
    }
    while(choice != 4);

    return 0;
}
