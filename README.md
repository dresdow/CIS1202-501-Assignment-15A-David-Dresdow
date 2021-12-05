# CIS1202-501-Assignment-15A-David-Dresdow

CIS 1202 Programming Assignment #15a
Exceptions
Write a function to calculate character offsets, throwing exceptions in error conditions.
Use a source code management tool as you develop this program.  Commit changes frequently using descriptive commit messages.  Push your changes to GitHub or other publicly accessible location for your instructor to clone.
Requirements
1.	Write a function according to this prototype:
char character(char start, int offset);
2.	If start is not a letter (A-Z, a-z), throw an invalidCharacterExcpeption.
3.	If the target is not a letter, throw an invalidRangeException.
4.	Otherwise, return the letter described by the start and offset.
5.	Build a driver in main to test this function and display its output.  Use try/catch blocks to call your function with different start and offset values.  Use the Sample Output below, or come up with your own test values.
6.	Functions must pass parameters and return values as needed, using only local variables.  Global variables are not allowed.
7.	Use comments to document your program as you see fit.  Include comments at the beginning of your program with your name, the class (with section), and the date.
    // Josh Junior

    // CIS 1202 101

    // January 31, 2021

8.	Submit the URL for your repository to the dropbox.  No screen shots are needed.

9. Sample Output

     character('a', 1) should return 'b'.

     character('a', -1) should throw an invalidRangeExpection.

     character('Z', -1) should return 'Y'.

     character('?', 5) should throw an invalidCharacterExcpeption.

Do not allow upper- and lower-case transitions.  character('A', 32) should throw an exception, not return 'a'.

