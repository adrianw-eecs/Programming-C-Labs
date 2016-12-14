#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
//variables
int exit = 0;
int size = 50;
int i = 0;
int j = 0;
int k = 0;
int m = 0;
char input1[size];
char input2[size];


//program
fgets(input1, size , stdin);
fgets(input2, size , stdin);
//printf("input 1: %s input 2: %s\n", input1,input2);
while (input1[i] != '\0' && exit == 0)
{
j = 0;
	while (input2[j] != '\0' && exit == 0)
	{
		
		//printf("1: %c 2: %c\n", input1[i], input2[j]);
		if(input1[i] == input2[j])
		{
			exit = 1;
			//printf("exit condtion triggered\n");
		}
		j = j + 1;
	}
i = i + 1;
}
i = i - 1;
j = j - 1;
//printf("i: %d     j: %d\n",i,j);
if (i > j)
{
	while (input2[j + k + 1] != '\0')
	{
		input1[i + k] = input2[j + k];
		k++;
	}
	while(input1[m] !='\0')
	{
	printf("%c", input1[m]);
	m = m + 1;
	}
//printf("method 1\n");
}
else
{

	while (input1[i + k + 1] != '\0')
	{
		input2[j + k] = input1[i + k];
		k++;
	}

	while(input2[m] !='\0')
	{
	printf("%c", input2[m]);
	m = m + 1;
	}
//printf("method 2\n");
}

}

