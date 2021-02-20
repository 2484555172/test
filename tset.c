#define _CRT_SECURE_NO_WARNINGS
 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<inttypes.h>
#include<math.h>
//***5.11编程练习***
//1.
//#define MIN_PER_HOUR 60

//int main(void)
//{
//	int m, hour, min;
//
//	printf("Please enter a number for minute (<= 0 to quit): ");
//	while ((scanf("%d", &m) == 1) && (m > 0))
//	{
//		hour = m / MIN_PER_HOUR;
//		min = m % MIN_PER_HOUR;
//		printf("%d minutes = %d hours and %d minutes.\n", m, hour, min);
//		printf("You can enter again (<= 0 to quit): ");
//	}
//	printf("Done.\n");
//
//	return 0;
//}

//2.
//int main(void)
//{
//	int num = 0;
//	int i = 0;
//	printf("Please enter a integer num>:");
//	scanf("%d", &num);
//	while (i <= 10)
//	{
//		printf("%d ", num + i);
//		i++;
//	}
//	return 0;
//}

//3.
//#define week 7
//int main(void)
//{
//	int day;
//	int i = 0;
//	int j = 0;
//	printf("请输入天数>:");
//	scanf("%d", &day);
//	i = day / week;
//	j = day % week;
//	printf("%d天等于%d周%d天.\n",day, i, j);
//	return 0;
//}

//4.
//#define CM_PER_INCH 2.54f
//#define CM_PER_FEET 30.48f

//int main(void)
//{
//	int feet;
//	float cm, inch;
//
//	printf("Enter a height in centimeters: ");
//	while ((scanf("%f", &cm) == 1) && (cm > 0))
//	{
//		feet = (int)(cm / CM_PER_FEET);
//		inch = (cm - CM_PER_FEET * feet) / CM_PER_INCH;
//		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
//		printf("Enter a height in centimeters (<=0 to quit): ");
//	}
//	printf("bye\n");
//
//	return 0;
//}

//5.
/*addemup.c--几种常见的语句*/
//int main(void)     /*计算整数和*/
//{
//	int count, sum, i;
//	count = 0;
//	sum = 0;
//	printf("Plaese enter a number >:");
//	scanf("%d", &i);
//	while (count++ < i)
//	{
//		sum = sum + count;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//6.
//int main(void)    /*计算整数平方和*/
//{
//	int n, sum, i;
//	n = 0;
//	sum = 0;
//	printf("Plaese enter a number >:");
//	scanf("%d", &i);
//	while (n++ < i)
//	{
//		sum = sum + n*n;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//7.
//void fx(double i)
//{
//	double j;
//	j = i * i*i;
//	printf("j = %g", j);
//}
//int main(void)
//{
//	double i;
//	printf("Plaese enter a number >:");
//	scanf("%lf", &i);
//	fx(i);
//	return 0;
//}

//8.

void Temperatures(double i)
{
	double j, k;
	const double S = 32.0;
	const double K = 273.16;
	j = 5.0 / 9.0*(i - S);
	k = j + K;

	printf("i = %.2f j = %.2f k = %.2f\n", i, j, k);
}

int main(void)
{
	int a;
	double i;
	printf("Please enter a number >:");
		a = scanf("%lf", &i);
	while (a == 1)
	{
		Temperatures(i);
		printf("(q to quit)>:");
		a = scanf("%lf", &i);
	}
	return 0;
}
