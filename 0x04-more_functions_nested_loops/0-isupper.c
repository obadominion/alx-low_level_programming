#include "main.h"
/**
*_isupper - function that checks for uppercase characters
*@c: int type number
*Return: 1 if uppercase, else 0
*/
int _isupper(int c)

{
printf("please enter an alphabetical character\n");
scanf("%c", &c);
switch (c)
{
case 'A' ... 'Z':
return (1);
break;

case 'a' ... 'z':
return (0);
break;

default:
printf("invalid input");
}

}
