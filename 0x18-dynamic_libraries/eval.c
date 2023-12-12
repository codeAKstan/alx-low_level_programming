int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
* add - adds two integers
* @a: first integer to add
* @b: second integer to add
* Return: the sum
*/

int add(int a, int b)
{
	return (a + b);
}

/**
* sub - subtracts two integers
* @a: first integer to sub
* @b: second integer to sub
* Return: the subtract
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplies two integers
* @a: first integer to multiply
* @b: second integer to multiply
* Return: the multiple
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divideds two integers
* @a: first integer to divide
* @b: second integer to divide
* Return: the divided integer
*/

int div(int a, int b)
{
	return (a / b);
}

/**
  mod - finds the modulus of two integers
  @a: first integer to mod
  @b: second integer to mod
  Return: the modulus
*/

int mod(int a, int b)
{
	return (a % b);
}
