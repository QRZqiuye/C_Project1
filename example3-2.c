#include <stdio.h>
#pragma warning(disable: 4996)
void main() {
	int in_money, coin_500, coin_100, coin_50, coin_10;
	printf("Enter the amount of money: ");
	scanf("%d", &in_money);
	coin_500 = in_money / 500;
	in_money = in_money % 500;
	coin_100 = in_money / 100;
	in_money = in_money % 100;
	coin_50 = in_money / 50;
	in_money = in_money % 50;
	coin_10 = in_money / 10;
	in_money = in_money % 10;
	printf("500 won coins: %d\n", coin_500);
	printf("100 won coins: %d\n", coin_100);
	printf("50 won coins: %d\n", coin_50);
	printf("10 won coins: %d\n", coin_10);
	printf("Remaining money: %d won\n", in_money);
}