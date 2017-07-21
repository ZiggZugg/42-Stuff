#include "libft.h"

int **gen_grid()
{
	int **grid;
	int i;
	int q;

	grid = malloc(sizeof(int **) * 9);
	i = 0;
	while (i < 9)
	{
		grid[i] = malloc(sizeof(int *) * 9);
		q = 0;
		while (q < 9)
		{
			grid[i][q] = 0;
			//printf("%d ", grid[i][q]);
			q++;
		}
		//printf("\n");
		i++;
	}
	return grid;
}


void display_grid(int **grid)
{
	int i;
	int q;

	i = 0;
	while (i < sizeof(grid)/sizeof(char) + 1)
	{
		q = 0;
		while (q < sizeof(grid)/sizeof(char) + 1)
		{
			printf("%d ", grid[i][q]);
			q++;
		}
		printf("\n");
		i++;
	}
}


int main()
{
	int **grid;

	grid = gen_grid();
	display_grid(grid);
	//printf("%lu", sizeof(grid));

	return (0);
}
