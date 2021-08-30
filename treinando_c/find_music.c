#include <stdio.h>
#include <string.h>

char	tracks[][80] = {
	"I let my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl form Iwo Jima",
};

void	find_track(char search_for[])
{
	int	i;
	i = 0;
	while (i < 5) {
		if (strstr(tracks[i], search_for))
			printf("Track %i: '%s'\n", i, tracks[i]);
	i++;
	}
}

int	main()
{
	char	search_for[80];
	printf("Search for: \n");
	scanf("%s", search_for);
	find_track(search_for);
	printf("%c", tracks[2][20]);
	return (0);
}
