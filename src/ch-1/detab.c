#include <stdio.h>

#define TABSTOP   4    /* number of spaces that represent a tab */

void detab(int lineidx, int tabstop);

int main()
{
	int c, lineidx;

	lineidx = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			detab(lineidx++, TABSTOP);
			continue;
		}
		else if (c == '\n') {
			lineidx = 0;
		} else {
			putchar(c);
			lineidx++;
		}
	}

	return 0;
}

void detab(int lineidx, int tabstop)
{
	int spaces, i;

	spaces = tabstop - (lineidx % tabstop) + 1;
	for (i = 0; i < spaces; ++i) {
		putchar(' ');
	}
}
