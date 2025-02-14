/*
Name: Prabhdeep Singh
Date: 09/1/2024

Program:
Program to calculate the sum of numbers from m to n.

Hint: Input two numbers m and n. Find the sum of all numbers from m to n.
For example m=3 and n=8 then sum will be 3 + 4 + 5 + 6 + 7 + 8 = 33.

# Breakdown:
- How to Calculate the sum of numbers from m to n.
Sum = k/2​ *( a + l )

Where:
a is the first term
l is the last term
k is the number of terms

- How to find number of terms
k = l - a + 1
k = 8 - 3 + 1 = 6

Sum = 6/2 * (3 + 8)
Sum = 3 * 11
Sum = 33

(ChatGPT)

Input:
first_term (double)
last_term (double)

# Variable(s)
double first_term, last_term, sum_of_number, number_of_terms

# Method
None

Input:


Process:


Output:


Return:


Process:
- Ask user for first_term and last_term

- Calculate number of terms
number_of_terms = last_term - first_term + 1

- Calculate the sum of numbers from first term to last term
sum_of_number = number_of_terms/2​ *( first_term + last_term )

- Output sum_of_number

# Dependency:
None

Output:
sum of numbers from first term to last term
*/
#include <iostream>

using namespace std;

int main()
{
    double first_term, last_term, sum_of_number, number_of_terms;

    cout << "Please enter the first term: ";
    cin >> first_term;

    cout << "Please enter the last term: ";
    cin >> last_term;
    cout << "\n";

    // Calculate number of terms
    number_of_terms = last_term - first_term + 1;

    // Calculate the sum of numbers from first term to last term
    // sum_of_number = (number_of_terms / 2)​ * (first_term + last_term);
    sum_of_number = (number_of_terms / 2) * (first_term + last_term);

    // Output sum_of_number
    cout << "The sum of numbers from " << first_term << " to " << last_term << " is " << sum_of_number << "\n";

    return 0;
}
