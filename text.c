#define _CRT_SECURE_NO_WARNINGS
 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<inttypes.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
//***2.12编程练习***
//1.
//int main(void)
//{
//	printf("Gustav Mahler\n");
//	printf("Gustav\nMahler\n");
//	printf("Gustav");
//	printf(" Mahler");
//	return 0;
//}

//2.
//int main(void)
//{
//	printf("姓名：xxx\n");
//	printf("地址: xxx\n");
//	return 0;
//}

//3.
//int main(void)
//{
//	int age = 18;
//	int day = age * 365;
//	printf("年龄：%d\n", age);
//	printf("天数：%d\n", day);
//	return 0;
//}

//4.
//void jolly()
//{
//	printf("For he's a jolly good fellow!\n");
//	printf("For he's a jolly good fellow!\n");
//	printf("For he's a jolly good fellow!\n");
//}
//
//void deny()
//{
//	printf("Which nobody deny!\n");
//}
//
//int main(void)
//{
//	jolly();
//	deny();
//	return 0;
//}

//5.
void br()
{
	printf("Brazil,Russia");
}

void ic()
{
	printf("India, China,\n");
}

int main()
{
	br();
	printf(",");
	ic();
	ic();
	br();
	return 0;
}

//6.
//int main(void)
//{
//	int toes = 10;
//	int _2toes, _toes;
//	_2toes = 2 * toes;
//	_toes = toes * toes;
//	printf("toes = %d\n", toes);
//	printf("toes的两倍：%d\n", _2toes);
//	printf("tose的平方：%d\n", _toes);
//	return 0;
//}

//7.
//void SME()//定义函数
//{
//	printf("Smile!");
// }
//	
//int main(void)
//{
//	SME(), SME(), SME();
//	printf("\n");//换行打印
//	SME(), SME();
//	printf("\n");
//	SME();
//	return 0;
//}

//8.
//void one_three()
//{
//	printf("one\n");
//}
//
//void two()
//{
//	printf("two\n");
//	printf("three\n");
//}
//
//int main(void)
//{
//	printf("starting now:\n");
//	one_three();
//	two();
//	printf("done!\n");
//	return 0;
//}