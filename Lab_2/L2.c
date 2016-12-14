#include <stdio.h> 


int main(void) {

char teamName[30];
int win;
int ties;
int losses;
int streak;
int points;
int maxStreak;
int maxPoints = 0;
int input;

while (scanf("%s %d %d %d %d", &teamName, &win, &ties, &losses, &streak) > 0)
	{
		//printf("%s\t %d\t %d\t %d\t %d", &teamName, &win, &ties, &losses, &streak);
		//printf("%s\t %d\t %d\t %d\t %d", teamName, win, ties, losses, streak);

		if(win < 0 || ties < 0 || losses < 0 )
		{
			printf("negative number of games\n");
		}
		else
		{
			if((win + ties + losses) > 99)
			{
				printf("games played are more than 99\n");
			}

			if (streak > maxStreak)
			{
				maxStreak = streak;
			}
			
			points = (win * 3) + (ties * 1) + (losses * 0);
			//printf("%d max %d", points, maxPoints);
			if (points > maxPoints)
			{
				maxPoints = points;
			}
			printf("%s\t%3d\t%+3d\n", teamName, points, streak);
		}
	}
	printf("The maximum points by any team is   %5d\n", maxPoints);
	printf("The longest winning streak is    %5d\n", maxStreak);
}

