/******
 * Ky Fike on Mar 11, 2022
 * Exercise 8.7:
 * Two true or false questions
 * *****/

/*
A. Two pointers that point to different built-in arrays cannot be compared meaningfully.
    False. You can compare the pointers' addresses to one another, as well as the arrays they point to. It is still possible to access both the arrays' indexes and values using the pointers. Thus, they certainly can be compared meaningfully.

B. Because the name of a built-in array is implicitly convertible to a pointer to the first element of the built-in array, built-in array names can be manipulated in the same manner as pointers.
    False. While it is true that the name of a built-in array is practically a pointer to the array's first element, pointers and built-in array names will be manipulated in different ways because they are variables of differing types. Not only will syntax will be different, but you can accomplish dynamica allocation with pointers- not with built-in array names.
*/