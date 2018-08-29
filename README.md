#### Day 1: Data Types  
**Task**   
The variables i, d, and s are already declared and initialized for you. You must:  
- Declare 3 variables: one of type int, one of type double, and one of type String.  
- Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.  
- Use the + operator to perform the following operations: 
  
1. Print the sum of i plus your int variable on a new line.  
2. Print the sum of d plus your double variable to a scale of one decimal place on a new line.  
3. Concatenate s with the string you read as input and print the result on a new line.  
**Input Format**  
The first line contains an integer that you must sum with i. 
The second line contains a double that you must sum with d. 
The third line contains a string that you must concatenate with s.  
**Output Format**  
Print the sum of both integers on the first line, the sum of both doubles (scaled to 1 decimal place) on the second line, 
and then the two concatenated strings on the third line.  
#### Day 2: Operators    
**Task**   
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.  
**Input Format**  
There are 3 lines of numeric input:  
The first line has a double, mealCost (the cost of the meal before tax and tip).  
The second line has an integer, tipPercent (the percentage of mealCost being added as tip).  
The third line has an integer, taxPercent (the percentage of mealCost being added as tax).  
**Output Format**  
 Print The total meal cost is totalCost dollars., where totalCost is the rounded integer result of the entire bill (mealCost with added tax and tip).  
#### Day 3: Intro to Conditional Statements    
**Task**   
Given an integer, n, perform the following conditional actions:  
- If n is odd, print Weird
- If n is even and in the inclusive range of 2 to 5, print Not Weird  
- If n is even and in the inclusive range of 6 to 20, print Weird  
- If n is even and greater than 20, print Not Weird  
  
Complete the stub code provided in your editor to print whether or not  is weird.  
**Input Format**  
A single line containing a positive integer, n.  
**Output Format**  
Print Weird if the number is weird; otherwise, print Not Weird.  
#### Day 4: Class vs. Instance    
**Task**   
Write a Person class with an instance variable, age, and a constructor that takes an integer, initialAge, as a parameter. The constructor must assign initialAge to age after confirming the argument passed as initialAge is not negative; if a negative argument is passed as initialAge, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:  
1. yearPasses() should increase the age instance variable by 1.   
2. amIOld() should perform the following conditional actions:  
- If age<13, print You are young..  
- If age>=13 and age<18, print You are a teenager..  
- Otherwise, print You are old..  
  
**Input Format**  
The first line contains an integer, T (the number of test cases), and the T subsequent lines each contain an integer denoting the age of a Person instance.  
**Output Format**  
Complete the method definitions provided in the editor so they meet the specifications outlined above.   
#### Day 5: Loops    
**Task**   
Given an integern, , print its first 10 multiples. Each multiple n x i (where 1<=i<=10) should be printed on a new line in the form: 
n x i = result.  
**Input Format**  
A single integer, n.  
**Output Format**  
Print 10 lines of output; each line i (where 1<=i<=10) contains the result of n x i in the form: 
n x i = result.  
#### Day 6: Let's Review    
**Task**   
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).  
**Note:** 0 is considered to be an even index.  
**Input Format**  
The first line contains an integer, T (the number of test cases).  
Each line i of the T subsequent lines contain a String, S.  
**Output Format**  
For each String Sj (where 0<=j<=T-1), print Sj's even-indexed characters, followed by a space, followed by Sj's odd-indexed characters. 
#### Day 7: Arrays    
**Task**   
Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers.    
**Input Format**   
The first line contains an integer, N (the size of our array).  
The second line contains N space-separated integers describing array A's elements.  
**Output Format**    
Print the elements of array A in reverse order as a single line of space-separated numbers.   
