#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void) {
	ft_putchar('a');
}
*/
/*
 * The write function uses three parameters
 * the prototype of write is
 * write(int fildes, const void buf*, size_t nbytes);
 *
 * fildes means file descriptor with 1 meaning standard out or stdout
 *
 * buf* is a buffer of chars or string to be printed
 *
 * nbytes is just the size of characters in bytes is being printed
 */
