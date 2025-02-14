/*
Name: Prabhdeep Singh
Date: 09/1/2024

Program:
Program to print Fibonacci series up to 100.

    Hint: Fibonacci Series is 1, 1, 2, 3, 5, 8, 13, 21, ...



# Breakdown:
- How to write Fibonacci series
The Fibonacci series is the sequence where each number is the sum of the previous two numbers of the sequence.
The first two numbers of the Fibonacci series are 0 and 1 and are used to generate the Fibonacci series.

F_n = preNum_1 + preNum_2
F_1 = 1 + 0
F_2 = 0 + 1
F_3 = 1 + 2

Where:
preNum_1 is the first previous number
preNum_2 is the second previous number

- How to update preNum_1 and preNum_2
> Setup a loop through nth term e.g. 5

> Start with preNum_1 being 1 and preNum_2 to current loop iteration being 0
preNum_1 = 1
preNum_2 = 0

> Add the two number together
F_0 = preNum_1 + preNum_2
F_0 = 1

> Set to preNum_1 = preNum_2 and preNum_2 = F_0
preNum_1 = 1
preNum_2 = 1
F_1 = 1 + 1
F_1 = 2

> Repeat
preNum_1 = 1
preNum_2 = 2
F_2 = 2 + 1
F_2 = 3

(https://www.geeksforgeeks.org/fibonacci-series/#)

Input:
None

# Variable(s)
int range = 100
int preNum_1 = 0
int preNum_2 = 1
int sum

# Method
None

Input:


Process:


Output:


Return:


Process:
- Create a for loop based on range=100
- Output the preNum1 and preNum2
    > cout << preNum_1+2 << " ";
- Inside the loop
    - Get the sum of previous two numbers
        sum = preNum1 + preNum2
    - Output the sum
        cout << sum << " ";
    - Update the variables for next iteration
        preNum1 = preNum2
        preNum2 = sum
- Repeat until loop is finished

# Dependency:
None

Output:
sum of preNum1 and preNum2
*/
#include <iostream>

using namespace std;

int main()
{
    double range = 100;
    double preNum_1 = 0;
    double preNum_2 = 1;
    double sum;

    cout << preNum_1 << " ";
    cout << preNum_2 << " ";

    for( int i = 0; i < range; i++ ){

        // 1 = 0 + 1
        sum = preNum_1 + preNum_2;

        // 0 <- 1
        preNum_1 = preNum_2;

        // 1 <- 1(sum)
        preNum_2 = sum;

        cout << sum << " ";

    }

    return 0;
}
