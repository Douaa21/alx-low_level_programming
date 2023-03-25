#include <stdio.h>

/**
<<<<<<< HEAD
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
=======
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
 int i;

 printf("Infinite loop incoming :(\n");

 i = 0;

 /*while (i < 10)*/
 /*{*/
 /* putchar(i);*/
 /*}*/

 printf("Infinite loop avoided! \\o/\n");

 return (0);
>>>>>>> 4fbc9dfeeb2884ba87196c9517f2639740cd9b94
}
