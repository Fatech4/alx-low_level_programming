Task 0- Write a function that converts a binary number to an unsigned int.
<br />
Prototype: unsigned int binary_to_uint(const char *b)*; <br />
where b is pointing to a string of 0 and 1 chars <br />
Return: the converted number, or 0 if <br />
there is one or more chars in the string b that is not 0 or 1
b is NULL <br />

Task 1- Write a function that prints the binary representation of a number.
<br />
Prototype: void print_binary(unsigned long int n); <br />
Format: see example <br />
You are not allowed to use arrays <br />
You are not allowed to use malloc <br />
You are not allowed to use the % or / operators
<br />
Task 2- Write a function that returns the value of a bit at a given index.
<br />
Prototype: int get_bit(unsigned long int n, unsigned int index); <br />
where index is the index, starting from 0 of the bit you want to get <br />
Returns: the value of the bit at index index or -1 if an error occured
<br />
Task 3- Write a function that sets the value of a bit to 1 at a given index.
<br />
Prototype: int set_bit(unsigned long int \*n, unsigned int index);<br />
where index is the index, starting from 0 of the bit you want to set <br />
Returns: 1 if it worked, or -1 if an error occurred
<br />
Task 4- Write a function that sets the value of a bit to 0 at a given index.
<br />
Prototype: int clear_bit(unsigned long int \*n, unsigned int index); <br />
where index is the index, starting from 0 of the bit you want to set <br />
Returns: 1 if it worked, or -1 if an error occurred
<br />
Task 5- Write a function that returns the number of bits you would need to flip to get from one number to another.
<br />
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m); <br />
You are not allowed to use the % or / operators <br />
<br />
Task 6- Write a function that checks the endianness. <br />
<br />
Prototype: int get_endianness(void); <br />
Returns: 0 if big endian, 1 if little endian
<br />
Task 7- Find the password for this program.
<br />
Save the password in the file 101-password <br  />
Your file should contain the exact password, no new line, no extra space <br />
