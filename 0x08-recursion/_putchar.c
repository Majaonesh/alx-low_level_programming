#include <unistd.h>



/**

 *

 * _putchar - writes the character _putchar to stdout

 *     * Return: On success 0

 */



int _putchar(char c)
  
{
  

  
  return (write(1, &c, 1));
  

  
}
