#include<unistd.h>
void	ft_ias(char *h, char *ha)
{
	(*h)++;
	*ha = *h + 1;
}

void	ft_print_comb(void)
{
	char	ijk[3];

	ijk[0] = '0';
	ijk[1] = '1';
	ijk[2] = '2';
	while (ijk[0] <= '7')
	{
		while (ijk[1] <= '8')
		{
			while (ijk[2] <= '9')
			{
				write(1, ijk, 3);
				if (ijk[0] != '7')
					write(1, ", ", 2);
				(ijk[2])++;
			}
			ft_ias(&ijk[1], &ijk[2]);
		}
		ft_ias(&ijk[0], &ijk[1]);
		ijk[1]--;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

/*	
 *	Written by	Aaron Menadue (amenadue)
 *				IsCoffeeTho#0001
 *
 *	ft_print_comb();
 *
 *	Visually Explained
 *
 *	+-=============-+
 *	
 *	0 1 2 3 4 5 6 7 8 9
 *
 *	I J K
 *	___
 *	
 *	Imagine you have three pointers
 *	and these pointers must follow specific rules
 *
 *	1.	A pointer must always be at a higher value than
 *		the pointer before it (exclude I)
 *	2.	A pointer must iterate if the pointer above
 *		is at the end of line (exclude K)
 *	3.	When a pointer reaches its highest value,
 *		it must be set to 1+ the pointer before it. (exclude I)
 *	4.	A pointer must never be geater or equal to the pointer above it
 *
 *	with these rules the next iteration would be
 *
 *	0 1 2 3 4 5 6 7 8 9
 *
 *	I J   K
 *	___
 *
 *	Once K has reached the end it must iterate J
 *
 *	0 1 2 3 4 5 6 7 8 9
 *
 *	I J               K
 *
 *	turning into
 *
 *	0 1 2 3 4 5 6 7 8 9
 *
 *	I   J K
 *
 *	and K continues iterating
 *	___
 *
 *	After some time J will be at the end of its iterating phase
 *
 *	0 1 2 3 4 5 6 7 8 9
 *
 *	I               J K
 *
 *	This step goes into another loop as I iterates and
 *	the other two pointers are reset
 *	
 *	0 1 2 3 4 5 6 7 8 9
 *
 *	  I J K
 *	__
 *
 *	This continues untill the last step and
 *	all are iterated to its highest value
 *
 *	0 1 2 3 4 5 6 7 8 9
 *
 *	              I J K
 *
 *	As each iteration of K happens, it is appended to a list and printed
 *	___
 *
 *	In the case of printing the entry, there must be logic telling the ", "
 *	characters to not print. In my case im using a not if all are equal test.
 *	
 *	(!(ijk[0] == '7' && ijk[1] == '8' & ijk[2] == '9'))
 *	
 *	This is equivalent to 
 *
 *	(!(I == 7 && J == 8 && K == 9))
 *
 *	lets break this up to its four segments
 *	___
 *
 *	I == 7
 *	
 *	This test is looking at the first pointer I and seing if its at its limit
 *	7 is the limit of I due to the comb looking for 3 spots
 *	
 *	10 - position = limit
 * 	==
 *	10 - 3 = 7 so the first header is 7
 *	
 *	This continues on down the chain
 *
 *	J == 8
 *	
 *	K == 9
 *	___
 *
 * It then checks if they are all true
 * with the && operator A.K.A logical AND
 *
 * if
 * Pointer I is at limit AND
 * Pointer J is at limit AND
 * Pointer K is at limit then continue
 * ___
 *
 * the last part is the inversion of the steps leading
 *
 * the !() refers to NOT the test in the parenthesis,
 * as they contain the steps required for the chain to
 * be at the end of iteration.
 *
 * The NOT test looks for if it is NOT at the end of iteration,
 * if so continue and print the ", " characters.
 */
