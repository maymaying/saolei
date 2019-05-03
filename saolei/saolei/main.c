#define _CRT_SECURE_NO_WARNINGS 1
#include "saolei.h"

int main()
{
	int select = 0;
	int quit = 0;
	while (!quit){
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			break;
		case 2:
			printf("I Am Quit!\n");
			quit = 1;
			break;
		default:
			printf("Select Error! Try Again!\n");
			break;
		}

	}

	return 0;
}