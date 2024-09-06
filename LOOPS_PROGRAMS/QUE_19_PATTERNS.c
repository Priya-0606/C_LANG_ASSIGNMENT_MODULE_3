/*19. Patterns:
1 
1  0
1  0  1
1  0  1  0
1  0  1  0  1
*/

#include<stdio.h>
main()
{
	int r, c, z = 1, n, s;
	r = 1;
	printf("\n\n\t Lines for Triangle : ");
	scanf("%d",&n);
	while(r <= n)
	{
	    c = 1;
		while(c <= r)
		{
			if (r%2 ==0)
			{
				printf(" 1");
			}
			else
			{
				printf(" 0");
			}
			c++;
		}
		
		printf("\n");
		r++;
		
	}
	printf("\n\n\n");
/* 1
 	2 3
 	4 5 6
 	7 8 9 10
 	11 12 13 14 15 */

	for(r = 1; r <= n; r++)
	{ 
		c = 1;
		for(c = 1; c <= r; c++)
		{
			printf(" %d",z++);
		}
		printf("\n");
	}
	printf("\n\n\n");
	
/*
A
B	C
D	E	F
G	H	I	J
K	L	M	N	O
*/

	char ch = 'A';
	
	for(r = 1; r <= n; r++)
	{ 
		c = 1;
		for(c = 1; c <= r; c++)
		{
			printf(" %c",ch++);
		}
		printf("\n");
	}
	printf("\n\n\n");

/*
A
A B
A B C
A B C D
A B C D E
*/
	for(r=1;r<=n;r++)
	{
		ch='A';
		c=1;
		
		for(c = 1; c <= r; c++)
		{
			printf(" %c",ch++);
		}
		printf("\n");
	}
	printf("\n\n\n");
	
/*
        *
	  * * * 
	* * * * *
  * * * * * * *
* * * * * * * * * 
  */
  
  	for(r=1;r<=5;r++)
  	{
  		for(s = 1; s <= 5 - r; s++) 
		{
			printf("  "); // Two spaces
		}
		for(c = 1; c <= 2 * r - 1; c++)
		{ 
			printf("* "); 
		}
  		printf("\n");
	}
	printf("\n\n\n");
	
/*
*	
*	*	
*	*	*	
*	*	*	*	
*	*	*	*	*
*	*	*	*	*	*
*	*	*	*	*
*	*	*	*	
*	*	*
*	*	
*	
*/

  	for (r = 1; r <= 6; ++r) 
	{
    	for(c = 1; c <= r; c++) 
		{
      		printf("* ");
    	}
    
		printf("\n");
	}
	for (r = 1; r <= 6; ++r) 
	{
		for(c = 5; c>=r; c--) 
		{
			printf("* ");
		}
		printf("\n");
		
	}
	
/*
1   2  3  4  5  6  7  8  9 10 
36 37 38 39 40 41 42 43 44 11
35 64 65 66 67 68 69 70 45 12 
34 63 84 85 86 87 88 71 46 13 
33 62 83 96 97 98 89 72 47 14 
32 61 82 95 100 99 90 73 48 15 
31 60 81 94 93 92 91 74 49 16 
30 59 80 79 78 77 76 75 50 17 
29 58 57 56 55 54 53 52 51 18 
28 27 26 25 24 23 22 21 20 19
*/	
	for(r=1;r<=10;r++)
	{
		for(c=1;c<=10;c++)
		{
			printf(" %d",z++);
		}
		printf("\n");
	}
}

	
	

