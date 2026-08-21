#include "main.h"
/**
 * prime_finder - calculates if the number is prime with recursion
 *@n: number to check
 *@i: number to divide and modulo with
 *Return: 1 if yes otherwise 0
 */
int prime_finder(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_finder(n, i + 1));
}
/**
 * is_prime_number - calculates if the number is prime with recursion
 *@n: number to check
 *Return: 1 if yes otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));

}
