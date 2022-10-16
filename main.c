#include <stdio.h>

int main(int argc, char ** argv)
{
	if (argc < 2)
	{
		printf("\n");
		return 0;
	}

	if (argc == 2)
	{
		FILE *fp = fopen(argv[1], "r");
		if (fp == NULL)
		{
			printf("File no read\n");
			return 0;
		}

		int c = fgetc(fp);
		int i = 1;

		printf("%08x: ", i);

		while (c != EOF)
		{
			printf("%02x", c);
			if (i % 2 == 0)
			{
				putc(' ', stdout);
			}
			if (i % 16 == 0)
			{
				printf("\n%08x: ", i);
			}
			c = fgetc(fp);
			i++;
		}

		putc('\n', stdout);
	}
	if (argc > 2)
	{
		printf("Provide a file\n");
		return 0;
	}

	return 0;
}
