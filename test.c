#define _CRT_SECURE_NO_WARNINGS
 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<inttypes.h>
#include<math.h>
/****6.16±‡≥Ã¡∑œ∞****/
//1.
//#define LEN 26
//int main(void)
//{
//	char arr[LEN];
//	int n = 0;
//	while (n < LEN)
//	{
//		arr[n] = 'a' + n;
//		n++;
//	}
//	for (n = 0; n < LEN; n++)
//	{
//		printf("%c ", arr[n]);
//	}
//	return 0;
//}

//2.
//int main(void)
//{
//	char ch = '$';
//	int i;
//	int j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%c", ch);
//		}
//	printf("\n");
//	printf(" \n");
//	}
//	return 0;
//}

//3.
//int main(void)
//{
//	char ch = 'F';
//	int i;
//	int j;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c", ch - j);
//		}
//	printf("\n");
//	printf(" \n");
//	}
//	return 0;
//}

//4.
//int main(void)
//{
//	char ch = 'A';
//	int i;
//	int j;
// 	for (i = 0; i < 6; i++)
//	{
//		
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c",ch++);
//		}
//	printf("\n");
//	printf(" \n");
//	}
//	return 0;
//}

//5.
//int main(void)
//{
//	
//	char ch;
//	int i, j,len;
//	printf("«Î ‰»Î¥Û–¥◊÷ƒ∏ >£∫");
//	scanf("%c", &ch);
//	len = ch - 'A';
//	for (i = 0; i <= len; i++)
//	{
//		char t = 'A' - 1;
//		for (j = 0; j < len - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c", ++t);
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", --t);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6.
//int main(void)
//{
//	int i;
//	int max, min;
//	printf("Please enter max>:");
//	scanf("%d", &max);
//	printf("Please enter min>:");
//	scanf("%d", &min);
//	for (i = min; i <= max; i++)
//	{
//		printf("%d %d %d", i, i*i, i*i*i);
//	}
//	return 0;
//}#include <stdio.h>

//7.
//#define len 20
//int main(void)
//{
//	int i;
//	char str[len];
//	scanf("%s", str);
//	for (i = strlen(str) - 1; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}
#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main()
{
	float y, x, z, f;
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			z = x * x + y * y - 1;
			f = z * z*z - x * x*y*y*y;
			putchar(f <= 0.0f ? "*********"[(int)(f*-8.0f)] : ' ');
		}
		putchar('\n');
	}
	return 0;
}

