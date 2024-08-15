# Integers-Recognition
Program To Recognize Integers up to 1 Crore

This program is designed to recognize and print the word representation of integers from 0 to 1 Crore (10,000,000) in Indian numbering system. Here's a simple and clear description of its functionality:

1. The program uses several functions to handle different number ranges:
   - `onedigit()`: For single digits (1-9)
   - `teens()`: For numbers 11-19
   - `tens()`: For multiples of 10 (10-90)
   - `Hundreds()`: For multiples of 100 (100-900)
   - `Thousands()`: For multiples of 1,000 (1,000-9,000)
   - `TeenThousands()`: For numbers 11,000-19,000
   - `lakhs()`: For multiples of 100,000 (1 Lakh to 9 Lakhs)
   - `TeenLakhs()`: For numbers 11 Lakhs to 19 Lakhs

2. The main function takes user input and processes numbers in these ranges:
   - 0 to 9: Uses `onedigit()`
   - 10 to 99: Combines `tens()` and `onedigit()`
   - 100 to 999: Uses `Hundreds()` with `tens()` and `onedigit()`
   - 1,000 to 9,999: Combines `Thousands()` with lower place values
   - 10,000 to 99,999: Handles teen thousands and regular thousands
   - 100,000 to 999,999: Processes lakhs and lower place values
   - 1,000,000 to 9,999,999: Handles ten lakhs, lakhs, and lower place values

3. The program handles special cases:
   - Prints "Zero" for 0
   - Prints "One Crore" for 10,000,000

4. It includes error handling for invalid inputs, playing a beep sound and prompting for re-entry.

5. After processing, it asks if the user wants to restart or exit the program.

This program provides a comprehensive solution for converting numbers to words in the Indian numbering system, handling all integers up to 1 Crore without errors or mistakes.

After the word representation is printed, the program asks the user if they want to restart the program. If the user enters 'y' or 'Y', the program clears the screen and returns to the input prompt. Otherwise, it exits with a thank you message.

Overall, this program provides a comprehensive solution for recognizing and printing the word representation of integers up to 1 Crore with robust error handling and a user-friendly interface.
