#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main(void)
//{
//	int n;
//	int count = 0;
//	for (n = 1; n <= 1500; n++)
//	{
//		if (n % 3 == 0 || n % 5 == 0|| n % 7 == 0)
//			printf("%d\n", n);
//	//	count++;
//	}
//	//printf("%d", count);
//	return 0;
//}
 
//int main(void)
//{
//	int sum, i, ret;
//	sum = 0;
//	ret = 0;
//	for (i = 1; i <= 101; i = i + 4)
//	{
//		sum = sum + i;
//	}
//	printf("sum = %d\n", sum);
//	for (i = 3; i <= 99; i = i + 4)
//	{
//		ret = ret + i;
//	}
//	printf("ret = %d\n", ret);
//	printf("Sum = %d\n", sum - ret);
//	return 0;
//}

//int main(void)
//{
//	double SUM = 0;
//	double i = 1;;
//	for (i = 1; i <= 1000; i++)
//	{
//		SUM = SUM + 1.0 / i;
//	}
//	printf("SUM = %lf", SUM);
//	return 0;
//}

//int main(void)//爱因斯坦阶梯问题
//{
//    int i;
//	for (i = 1; i <= 1000; i++)
//	{
//		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//int main(void)
//{
//	int i, j, n;
//	char ch = 'Z';
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		for (j = 1; j <= (n-1) * i - 1; j++)
//		{
//			if (j == 1 || j == (n-1) * i - 1)
//				printf(" %c ", ch--);
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= n-1; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf(" ");
//		for (j = 1; j <= (2*n-1) - (n-1) * i; j++)
//		{
//			if (j == 1 || j == (2 * n - 1) - (n - 1) * i)
//				printf("%c", ch--);
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) 
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main(void)
//{
//	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
//	int arr[10];
//	int sum = 0;
//	int ave = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d%d%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	ave = sum / 10;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > ave)
//			count++;
//		else;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main(void)
//{
//	int a;
//	int i, j, k;
//	int c;
//	c = 0; 
//	i = 0; j = 0; k = 0;
//	for (a = 100; a <= 999; a++)
//	{		
//		i = a % 10;
//		c = a / 10;
//		j = c % 10;
//		k = c / 10;
//		if (i*i*i + j * j*j + k * k*k == a)
//			printf("%d\n",a);
//		else
//		   ;
//	}
//	
//    return 0;
//}