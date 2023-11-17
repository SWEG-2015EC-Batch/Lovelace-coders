# Problem Description:

Write a C++ program that will calculate how long it will take to send a file, given the file size.
The serial transmission line can transmit 960 characters a second.

 # Analysis
Input: file size in byte
Output: The time it takes to send the file

# operation

1. Prompt the user to enter the file size in bytes.
2. Calculate the time taken to send the file using the formula: time_taken = file_size / 960.
3. Display the time taken to send the file.

# Pseudo code
  Step 1: start
  Step 2: read the file size
  Step 3: compute the time it takes in seconds
    timeInSec = sizeInByte / 960
  Step 5: print the time in seconds
  Step 6: stop

# Design the program

1. Variable declaration and initialization (What and How?)
  double timeInSec, timeInMinute, timeInHr, sizeInByte;

2. Reading input data (How?)
  cout << "Input the file size in bytes: ";
  cin >> sizeInByte;

3. Perform operation - (How?)
  timeInSec = sizeInByte / 960; //960 characters = 960 bytes
  timeInMinute = timeInSec / 60;
  timeInHr = timeInMinute / 60;

4. Print result (time). (How?)
  cout << "Time needed in seconds is: " << timeInSec << '\n';
  cout << "Time needed in Minutes is: " << timeInMinute << '\n';

