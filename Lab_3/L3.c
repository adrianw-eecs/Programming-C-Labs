#include <stdio.h> 



void main()
{

int z[50];

int x = 0;

char string[7];

scanf("%s", string);

	while(string[0] != 'q')
	{
		if (atoi(string) < 0)
		{
			z[x] = atoi(string);
			x++;
		}
		else if (string[0] == '+')
		{
			z[x - 2] = z[x - 2] + z[x - 1]; 
			x--;
		}
		else if (string[0] == '-')
		{
			z[x - 2] = z[x - 2] - z[x - 1]; 
			x--;
		}

		else if (string[0] == '*')
		{
			z[x - 2] = z[x - 2] * z[x - 1]; 
			x--; 
		}

		else if (string[0] == '/')
		{
			z[x - 2] = z[x - 2] / z[x - 1]; 
			x--; 
		}

		else if (string[0] == 'p')
		{
			printf("%10d\n",z[x - 1]);
		}
		else
		{
			z[x] = atoi(string);
			x++;
		}
		scanf("%s", string);
	}
}



