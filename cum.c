#include <stdio.h>
#include <stdlib.h>

long int val;
long int hold;
int iter = 0;

int main() {
	res:
	system("clear");
	printf("%c]0;%s%c", '\033', "Collatz Finder", '\007');
	printf(" >> Please enter a starting value:\n> ");
	scanf(" %li", &val);
	long int org = val;
	printf("\n* %li", org);
	while (val > 1) {
		if (val % 2 == 0) {
			hold = val / 2;
			printf("\n* %li", hold);
			val = hold;
			iter++;
		}
		else {
			hold = val * 3 + 1;
			printf("\n* %li", hold);
			val = hold;
			iter++;
		}
	}
	if (val < 1) {
		printf("\n\n***  Overflow error. Please input a smaller number   ***\nPress <ENTER> to restart.\n");
		char fart;
		scanf("%c");
		getchar();
		goto res;
	}
	printf("\n\n >> The number %li takes %d iterations to reach 1.\n", org, iter);
	printf(" >> Press <ENTER> to go again, or use Ctrl+C to exit. \n> ");
	char ans;
	scanf("%c", &ans);
	getchar();
	goto res;

}

