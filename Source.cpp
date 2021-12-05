/*********************************************************************************************************************************/
/*  David Dresdow                                                                                                                */
/*                                                                                                                               */
/*  CIS 1202 501                                                                                                                 */
/*                                                                                                                               */
/*  December 4, 2021                                                                                                             */
/*                                                                                                                               */
/*  Program Name - Programming Assignment 15a  - Exceptions                                                                     */
/*                                                                                                                               */
/* This program will allow users to:                                                                                             */
/*   1) Calculate and output character offsets and throw exceptions based on the results of character function defined below     */
/*   2) For the letters (A-Z, a-z)                                                                                               */
/*   3) Examples:          character('a',1)   should return 'b'                                                                  */
/*                         character('a',-1)   should print an error message                                                     */
/*                         character('Z',-1)  should return 'Y'                                                                  */
/*                         character('?',5)   should return an error message                                                     */
/*                                                                                                                               */
/********************************************************************************************************************************/

#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

// Dummy classes used for multiple catch statements
class invalidCharacterException
{ };
class invalidRangeException
{};

// Function Prototypes
bool isNumeric(string);          // used to determin if an offset is numeric (inlcudes + or - check for first character)
char character(char, int);      // prototype to determine offset character from starting character

int main()
{
    char inputChar;
    char offsetChar;
    int offset = 0;
    string input;
    bool number = false;
    string doAnother;

    do                                       // allow users to enter characters and offsets
    {
        //    Enter a character
        cout << "\n";
        cout << "\nEnter a character from A to Z or a to z:  ";
        cin >> inputChar;
        cin.ignore();

        //  Enter an offset number

        cout << "\nEnter an offset number:  ";
        getline(cin, input);


        // loop until user enters a number
        while (number == false)
        {

            number = isNumeric(input);                       // call to function to see if it is numeric

            if (number == true)  offset = stoi(input);
            else
            {
                cout << "\nYou did not enter a number, please enter again";
                cout << "\n";
                cout << "\nEnter an offset number:  ";
                getline(cin, input);
            }

        }   // end of while loop


        try
        {
            offsetChar = character(inputChar, offset);                    // call to function to use offset to find new character
            cout << "\nAnswer is " << offsetChar;
        }

        catch (invalidCharacterException)
        {
            cout << "\nINVALID CHARACTER ENTERED";
            cout << "\nCharacter must be either a lower or upper case alphabetic character";
            cout << "\nPlease try entering all values again";
        }


        catch (invalidRangeException)
        {
            cout << "\nOUT OF RANGE ERROR";
            cout << "\nIf character entered is a lower case letter, the character plus offset must still be a lower case letter";
            cout << "\nIf character entered is an upper case letter, the character plus offset must still be an upper case letter";
            cout << "\nPlease try entering all values again";
        }

        cout << "\n";
        cout << "\nDo another character offset ( enter Y or y) ";
        cin >> doAnother;
        cin.ignore();

        number = false;

    } while (doAnother == "Y" || doAnother == "y");              ///   end of do loop


    system("pause");
    return 0;
}


/************************************************************************************************************************************************/
/*  Function to see if offset string entered is a number                                                                                                  */
/************************************************************************************************************************************************/

bool isNumeric(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) == false)
        {
            if (i == 0 && (str[i] == '+' || str[i] == '-'));
            else return false;
        }
    }
    return true;
}
