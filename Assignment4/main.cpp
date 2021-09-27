// main.cpp

// Team: Anthony, An, Van, Vincent, Nhan
// Chapter 4: 
// 

#include <iostream>
#include <string>
#include "optionOne.h"
#include "optionTwo.h"
#include "optionThree.h"
#include "input.h"
#include "menus.h"

void mainMenu(void);
void programOne(void);
void programOneSubProgramA(void);
void programOneSubProgramB(void);
void programTwo(void);
void programTwoSubProgramA(void);
void programTwoSubProgramB(void);
void programThree(void);
void programThreeSubProgramA(void);

using namespace std;

int main(void)
{
    mainMenu();
	return 0;
}

//PreCondition: NA
//PostCondition: redirects user to different menus based on their choice
void mainMenu(void)
{

    do
    {
        clearScreen();

        displayMainMenu();

        int userInput = inputInteger("\t\tOption: ");
        switch (userInput)
        {
        case 0: clearScreen(); return;
        case 1: clearScreen(); programOne(); break;
        case 2: clearScreen(); programTwo(); break;
        case 3: clearScreen(); programThree(); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..3." << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programOne(void)
{

    do
    {
        clearScreen();
        displayOptionOneMenu();

        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': programOneSubProgramA(); pause("\n\t\tPress enter to continue..."); break;
        case 'b': case 'B': programOneSubProgramB(); pause("\n\t\tPress enter to continue...");  break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'" << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programOneSubProgramA(void)
{
    do
    {
        clearScreen();
        displayOptionOneMenuA();

        int option = inputInteger("\t\tOption: ");

        switch (option)
        {
        case 0: return;
        case 1: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 2: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 3: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 4: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 5: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 6: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 7: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 8: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..8." << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programOneSubProgramB(void)
{
    do
    {
        clearScreen();
        displayOptionOneMenuB();

        int option = inputInteger("\t\tOption: ");

        switch (option)
        {
        case 0: return;
        case 1: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 2: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 3: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 4: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 5: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..5." << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programTwo(void)
{
    do
    {
        clearScreen();
        displayOptionTwoMenu();

        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': programTwoSubProgramA(); pause("\n\t\tPress enter to continue..."); break;
        case 'b': case 'B': programTwoSubProgramB(); pause("\n\t\tPress enter to continue...");  break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'" << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programTwoSubProgramA(void)
{
    do
    {
        clearScreen();
        displayOptionTwoMenuA();

        int option = inputInteger("\t\tOption: ");

        switch (option)
        {
        case 0: return;
        case 1: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 2: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 3: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 4: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 5: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 6: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 7: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 8: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 9: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..9." << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programTwoSubProgramB(void)
{
    do
    {
        clearScreen();
        displayOptionTwoMenuB();

        int option = inputInteger("\t\tOption: ");

        switch (option)
        {
        case 0: return;
        case 1: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 2: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 3: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 4: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 5: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..5." << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programThree(void)
{
    do
    {
        clearScreen();
        displayOptionThreeMenu();

        int option = inputChar("\t\tOption: ");

        switch (option)
        {
        case '0': return;
        case 'a': case 'A': programThreeSubProgramA(); pause("\n\t\tPress enter to continue..."); break;
        case 'b': case 'B': /*function here;*/ pause("\n\t\tPress enter to continue...");  break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A', or 'B'" << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}

void programThreeSubProgramA(void)
{
    do
    {
        clearScreen();
        displayOptionThreeMenuA();

        int option = inputInteger("\t\tOption: ");

        switch (option)
        {
        case 0: return;
        case 1: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 2: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 3: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 4: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        case 5: /*function here;*/ pause("\n\t\tPress enter to continue..."); break;
        default: cout << "\t\tERROR-3A: Invalid input. Must be from 0..5." << endl;
            pause("\n\t\tPress enter to continue...");
        }

    } while (true);
}