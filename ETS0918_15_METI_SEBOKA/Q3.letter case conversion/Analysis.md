Problem Description:

Write a program that takes a letter as input from the user and converts it to its uppercase or lowercase equivalent using the functions defined in the ctype.h library header file. The program should prompt the user to enter a letter and then display the converted letter in the appropriate case.

# Analysis

Input: a letter
Output: uppercase or lowercase version of the letter

# operation

- Prompt user for a letter
- Read the input letter
- Convert the letter to its uppercase or lowercase equivalent using the functions from the ctype.h library
- Display the converted letter


# Pseudo code
  
  Step 1: start
  Step 2: read the letter
  Step 3: convert the letter to its opposite case
  Step 5: print the converted letter
  Step 6: stop

# Design the program

1 .Variable declaration and initialization (What and How?)
 char letter;

2. Reading input data (How?)
 cout << "Please enter a letter: ";
  cin >> letter;

3 .Perform operation - (How?)
  1. Check if the letter is upper or lower case
 if (isupper(letter)){
  letter = tolower(letter);
  }

4 .Check if the letter is capital
 else if (islower(letter)){
  letter = toupper(letter);
  cout << "Your letter in upper case is: " << letter ;
  }

5 . If not both print an error message
 else {
  cout << "Invalid input";
 }

6. Print result (letter). (How?)
 cout << "Your letter in upper case is: " << letter


