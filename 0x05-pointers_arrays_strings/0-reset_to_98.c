/**
 * This program resets a memory location
 * resets the value n to 98
 * void reset_to_98(int *n) - we use this function
 * 
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    _putchar("n=%d\n", n);
    reset_to_98(&n);
    _putchar("n=%d\n", n);
    return (0);
}
