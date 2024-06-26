# Array-Index-Summation-Recusion
Suppose there is an array of 50 numbers. Using the formula: (addition of all the digits of your roll
number)/2, you can calculate a number.
E.g. If your roll number is 21i-0865
2+1+0+8+6+5=22
22/2=11
Now, you just have to add the numbers from the array that are at this number's multiple indexes.
In this case, only the numbers at positions 11, 22, 33, and 44 should be added. There should be
two functions: one to calculate your roll number and another recursive function to add the numbers
of the array.
Your function prototypes should be as follows:
int additionOfRollNumber(string rollnumber);
int FillArray(int arr[], int index, int calculatedNumber);
