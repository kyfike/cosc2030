/******
 * Ky Fike on Mar 11, 2022
 * Exercise 8.13:
 * What does the program do?
 * *****/

/*
This program asks for the user to input two strings to be stored in 2 character arrays that can hold 80 characters. It then uses both strings as the arguments for the function that does not return a value, mystery1. The first function argument creates a pointer the character string, s1. There is another pointer to the second variable, s2, but this pointer is to a costant character.

The function first uses a while loop to move past all characters in the first string, stopping at the null character marking the end of the string. After that, a for loop is used to assign each character in the string2 array to the addresses immediately after string1. 


Because string1 had already allocated 80 spaces in the stack, string2 will be stored inside of it as well! (As long as the user input wasn't too large.) The program's last statement to print string1 will print out string1 directly followed by string2.
*/