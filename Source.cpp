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
