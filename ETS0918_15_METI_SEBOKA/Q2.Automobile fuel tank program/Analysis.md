#Problem Description:

Write a C++ program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallon the automobile can be driven. The program outputs the number of miles the automobile can be driven without refueling.

#Analysis

Input: capacity and miles per gallon
Output: The distance possible without refueling

# Pseudo code

  Step 1: start
  Step 2: read the capacity
  Step 3: read the miles per gallon
  Step 4: compute the possible distance
    Distance = capacity * miles per gallon
  Step 5: print the Distance
  Step 6: stop

#operation
 
- Prompt user for fuel tank capacity and miles per gallon
- Read the values of capacity and miles per gallon
- Calculate the number of miles the automobile can be driven without refueling using the formula: miles = capacity * miles per gallon
- Display the calculated number of miles

#. Design the program

1. Variable declaration and initialization (What and How?)
  double capacity, MPG, Pd;

2. Reading input data (How?)

 cout << "Please enter the automobile’s fuel gas tank capacity: ";
 cin >> capacity;
 cout << "Please enter the miles per gallon for the automobile: ";
 cin >> MPG;

3. Perform operation - compute the Possible distance without refueling(How?)
Pd = MPG * capacity;

4.Print result (Distance). (How?)
cout << “The automobile can go a distance of  ” << Pd << “ miles without refueling.”;


