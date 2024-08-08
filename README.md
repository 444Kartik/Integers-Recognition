# Integers-Recognition
Program To Recognize Integers up to 99,999

This program is designed to recognize and print the word representation of integers from 0 to 99,999. It uses several functions to handle different ranges of numbers:

1. `onedigit(int num)`: This function prints the word representation of a single-digit number (1 to 9).

2. `teens(int num)`: This function prints the word representation of a number in the teens (11 to 19).

3. `tens(int num)`: This function prints the word representation of a multiple of 10 (10, 20, 30, ..., 90).

4. `Hundreds(int num)`: This function prints the word representation of a multiple of 100 (100, 200, 300, ..., 900).

5. `Thousands(int num)`: This function prints the word representation of a multiple of 1,000 (1,000, 2,000, 3,000, ..., 9,000).

6. `TeenThousands(int num)`: This function prints the word representation of a number in the teen thousands (11,000 to 19,000).

The `main()` function takes the user's input, checks the range of the number, and calls the appropriate function(s) to print the word representation. It also handles invalid inputs by playing a beep sound, displaying an error message, and returning to the input prompt.

After the word representation is printed, the program asks the user if they want to restart the program. If the user enters 'y' or 'Y', the program clears the screen and returns to the input prompt. Otherwise, it exits with a thank you message.

Overall, this program provides a comprehensive solution for recognizing and printing the word representation of integers up to 99,999, with robust error handling and a user-friendly interface.
