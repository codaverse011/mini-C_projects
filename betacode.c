#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Number Guesssing Game Developed by Yankho Ngolleka AKA codaverse011
 * In this Game, user enters three numbers which should match the systems generated numbers.
 * If num1, num2 and num3 equals num1, num2 and num3 from the system the the user wins.
 * The amount won is the product of stake entered by 36, the minimum stake is mwk 100 and maxium is 5000 mwk.
 *
 * Return: Always 0 (success)
 */

void bet_stake()

{
	int stake;
	int num1;
	int num2;
	int num3;
	
	printf("Please Enter Valid stake.\nMinimum stake is MWK 100 and  maximum is MWK 5000\n");
	printf("\nStake: MWK  ");
	scanf("%d", &stake);
}

void Betacode()
{
	char name[30];
	int stake;
	int num1;
	int num2;
	int num3;
	int count, tim = 1;
	
	printf("Enter Your Name: ");
	scanf("%s", name);
	printf("\nHello %s, Welcome to BetaCode Games Developed By Yankho Ngolleka\n\nPlace your Bets now\n\n", name);
	printf("Stake: MWK  ");
	scanf("%d", &stake);
	
	for (count = 0; count < 2; count++)
	{
		if (stake < 100)
		{
			bet_stake();
			tim++;
		}
		else if (stake > 100)
		{
			break;
		}
	}
	printf("\nYour possible winnings: MWK %d\n\n", stake * 36);
	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("Enter third number: ");
	scanf("%d", &num3);
	
	if (num1 == name[0] && num2 == name[1] && num3 == name[2])
	{
		printf("\nCongratulations You Won!! :)\n\n");
		printf("Amount Won: MWK %d\n\n",stake * 36);
		printf("\nUse this token number %d to collect your money at any of our agents\n");
	}
	else
	{
		printf("\n\nOops!! You missed it\n\n");
	}
}

int main()
{
	int trial;
	
	Betacode();
	printf("\nDo you want to try again\n\n1.Yes\t\t2.No\n.:");
	scanf("%d", &trial);
	
	if (trial == 1)
	{
		Betacode();
	}
	else
	{
		printf("\nThank For Playing BetaCode\n\nDeveloped By Yankho Ngolleka (codaverse011)");
	}
}


