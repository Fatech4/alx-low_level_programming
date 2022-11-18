Task 0- Write a function that returns the sum of all its parameters.
<br />
Prototype: int sum_them_all(const unsigned int n, ...); <br />
If n == 0, return 0 <br />
Task 1- Write a function that prints numbers, followed by a new line. <br />

*Prototype: void print_numbers(const char *separator, const unsigned int n, ...); <br />
*where separator is the string to be printed between numbers* <br />
*and n is the number of integers passed to the function* <br />
*You are allowed to use printf* <br />
*If separator is NULL, don’t print it* <br />
*Print a new line at the end of your function* <br />

Task 2- Write a function that prints strings, followed by a new line. <br />
*Prototype: void print_strings(const char *separator, const unsigned int n, ...); <br />
where separator is the string to be printed between the strings <br />
and n is the number of strings passed to the function <br />
You are allowed to use printf <br />
If separator is NULL, don’t print it <br />
If one of the string is NULL, print (nil) instead <br />
Print a new line at the end of your function <br />

Task 3- Write a function that prints anything. <br />
Prototype: void print_all(const char * const format, ...); <br />
where format is a list of types of arguments passed to the function <br />
c: char <br />
i: integer <br />
f: float <br />
s: char * (if the string is NULL, print (nil) instead <br />
any other char should be ignored <br />
 
