a simple calculator made in C
compiled with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
betty compliant apart from length of the script (3 lines over) and 9 characters too many on line 12

Instructions for running:
Start program by entering "./calculator"
When prompted, enter one number representing the calculation you want to perform and hit "Enter"
Then enter your two numbers, separated by a space, and hit "Enter"
The result will then be displayed if the input was valid
If not you will be prompted to try again or press "Ctrl + C" to terminate the program

The calculator supports the basic mathematical operations addition, subtraction, multiplication and division

The calculator only accepts a sinlge integers when picking the operator. If an accepted integer is entered followed by anything but another number the program will take that integer as the choice. 
For the calculation the program accepts any integer or decimal and will print the result with 2 decimals or none if the result contained no decimals

known limitations:
"Inf" will always be the result if the result or either entered number has more than 38 integers.
In the option selection enterering a valid number directly followed by anything but a space or another number will make the selection succeed
but directly print "Invalid input. Try again or press Ctrl + C to terminate" as the invalid is passed on to the next scanf call.
In the option selection entering a valid number followed by a space and then another number will cause the second number to already be preloaded in the next scanf call. This means entering "1 1" then "2 2" will give the result "3". If you enter "1 2 3" at the start you will immediately see
"Enter two numbers separated by a space: Result: 5"
This could be prevented by creating and calling a separate function for handling the scanf input or calling another "while (getchar() != '\n')" before the second scanf to sanitize the input.
