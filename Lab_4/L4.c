#include <stdio.h>
#include <string.h>

void main()
{

	char in[20];
	int find = 0;

	while (scanf("%s", &in) > 0)
	{
		FILE *file;
		file = fopen("dictionary.txt", "r");
		char thing[20];
		if (file)
		{
			while (fgets(thing, 20, file) != NULL)
			{

				if (thing[strlen(thing)-1] == '\n')
				{
					thing[strlen(thing)-1] = '\0';
				}

				if (strcmp(in, thing) == 0)
				{
					find = 1;
					break;
				}
				else
				{
					find = 0;
				}
			}
			if (find == 0)
			{
				printf("Error: %s\n", in);
			}
			fclose(file);
		}
	}
}