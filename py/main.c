#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void	run_fork()
{
	pid_t	pid;
	pid = fork();
//	if (pid == 0)
//		execvp();
}

void	count_words(char *s, unsigned int *words)
{
	unsigned int	i;

	i = 0;
	*words = 1;
	while (s[i])
	{
		if (s[i] == ' ')
			++(*words);
		++i;
	}
}

int	main(int ac, char **av)
{
	unsigned int	words;
	char		*cmd_line;
	char		**cmdparts;

	if (0)
		return (1);
	cmd_line = strdup("echo hello");
	count_words(cmd_line, &words);
	printf("debug words:%d\n", words);
	run_fork(cmd_line);
	free(cmd_line);
	return (0);
}
