#include <stdio.h>

int main(void)
{
	int dice1, dice2, dice3;
	scanf("%d", &dice1);
	scanf("%d", &dice2);
	scanf("%d", &dice3);

	if (dice1 == dice2 && dice2 == dice3) 
		printf("%d\n", 10000 + 1000 * dice1);
	else if (dice1 == dice2 || dice2 == dice3 || dice3 == dice1) { 
		int sameval=0;
		if (dice1 == dice2)
			sameval = dice1;
		else if (dice2 == dice3)
			sameval = dice2;
		else if (dice3 == dice1)
			sameval = dice3;
		printf("%d\n", 1000 + 100 * sameval);
	}
	else {  //case3: 다 다른 경우
		int max = dice1;
		if (max < dice2) {
			max = dice2;
		}
			
		if (max < dice3) {
			max = dice3;
		}
		
		printf("%d\n", 100 * max);
	}
		
}