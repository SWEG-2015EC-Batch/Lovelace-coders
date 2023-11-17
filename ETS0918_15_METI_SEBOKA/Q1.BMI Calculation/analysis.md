#. Problem Description:
Write a C++ program to calculate the Body mass index of a user by accepting the user’s height and weight

#. Analysis
Input: Height and Weight
Output: The Body mass index

#operation
Variable declaration: height and weight
Prompt the user to enter their weight and height respectively
Accept the user input.
Calculate the Body mass index as BMI = weight / height squared
Display the user’s BMI

# Pseudo code
Step 1: start
Step 2: read the weight
Step 3: read the height
Step 4: compute the BMI
BMI = weight / height^2
Step 5: print the BMI
Step 6: stop

# Design the program
1 .Variable declaration and initialization (What and How?)
double height, weight;

2. Reading input data (How?)
cout << "Please enter your mass in kilograms: ";
cin >> mass;
cout << "Please enter your height in meters: ";
cin >> height;

3. Perform operation - compute the BMI (How?)
BMI = mass/ (height * height);
4. Print result (BMI). (How?)
cout << “Your Body mass index is ” << BMI;




