#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > 47 && ch < 58)
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//	int i = 0;
//	while(i <= 11)
//	{
//		printf("%c", ch[i]);
//		i++;
//	}
//	
//
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year = %04d\n", year);
//	printf("month = %02d\n", month);
//	printf("date = %02d\n", date);
//	
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	float a1 = 0.0f;
//	float a2 = 0.0f;
//	float a3 = 0.0f;
//	scanf("%8d;%f,%f,%f", &num, &a1, &a2, &a3);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, a1, a2, a3);
//
//	return 0;
//}
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");
//
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (max < arr[i])
//			max = arr[i];
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while(left <= right)
//	{ 
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 2;
//	
//	printf("%s\n", arr2);
//	for (left = 0, right = sz - 2; left <= right; left++, right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//
//	return 0;
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	printf("请猜数字:>");
//	while (1)
//	{
//		scanf("%d", &guess);
//
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	
//	do
//	{
//		printf("开始游戏请按1\n");
//		printf("结束游戏请按0\n");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//		{
//			game();
//			break;
//		}
//		case 0:
//		{
//			printf("游戏结束\n");
//			break;
//		}
//
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (a != 0);
//	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		int b = sqrt(i);
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a[] = { 12,4,17,25,27,16 };
//	int b[] = { 27,13,4,25,23,16 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 6; i++)
//	{
//		for(j = 0; j < 6; j++)
//		{ 
//			if (a[i] == b[j])
//				break;
//		}
//		if (j < 6)
//		{
//			printf("%d\n", a[i]);
//		}
//		
//	}
//	printf("\n");
//	return 0;
//
//}
//void ADD()
//{
//	int a = 0;
//}
//
//int main()
//{
//	int a = 0;
//	return 0;
//}

//void move(pos1, pos2)
//{
//	printf(" %c -> %c ", pos1, pos2);
//}
//
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (1 == n)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//}

//int fuc(int n)
//{
//	int b = 0;
//	switch (n)
//	{
//	default: b = 0;
//		break;
//	case 1:b = 30;
//	case 2:b = 16;
//	
//	}
//	
//	return b;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",fuc(a));
//
//	return 0;
//}

//void Swap(int* px, int* py)
//{
//	int temp = 0;
//	temp = * px;
//	* px = * py;
//	*py = temp;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if(a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int Min(int x, int y)
//{
//	if (x > y)
//		return y;
//	else
//		return x;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	for (i = Min(a, b); i >= 2; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//			break;
//		
//	}
//	printf("最大公约数为%d", i);
//
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b != 0)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int Max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (Max < arr[i])
//			Max = arr[i];
//	}
//	printf("%d", Max);
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d", &k);
//	for (i = 1; i <= k; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 
// 
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	
//	
//	while (1)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	srand((unsigned int) time(NULL));
//	while (1)
//	{
//		printf("开始游戏请按1\n结束游戏请按0\n");
//		scanf("%d", &a);
//		if (1 == a)
//		{
//			game();
//		}
//		else if (0 == a)
//			break;
//		else
//			printf("输入错误，请重新输入\n");
//
//	}
//	return 0;
//}
//void Swap(int* px, int* py)
//{
//	int c = *px;
//	*px = *py;
//	*py = c;
//}
//
//int main()
//{
//	int arr[] = { 1 };
//	int a = 12;
//	int z = sizeof(char);
//	int* p = &a;
//	int* q = &p;
//
//	return 0;
//}
//void print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

////非递归求阶乘
//int fec(int n)
//{
//	int j = 0;
//	int ret = 1;
//	for (j = 1; j <= n; j++)
//	{
//		ret = ret * j;
//	}
//	return ret;
//}

////递归求阶乘
//int fec(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fec(n - 1) * n;
//	}
//	
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", fec(i));
//
//	return 0;
//}

//int strl(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; 1; i++)
//	{
//		
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		count++;
//	}
//
//	return count;
//}

//int strl(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + strl(arr + 1);
//}

//int main()
//{
//	char arr[] = "sadafgtra";
//	
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strl(arr));
//	return 0;
//}

//void reverse_str(char arr[])
//{
//	
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	char a = '0';
//	while (left < right)
//	{
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//	
//}

////递归 逆序字符串
//void reverse_str(char* str)
//{
//
//	int sz = strlen(str);
//	int left = 0;
//	int right = sz - 1;
//	char a = '0';
//	if (left < right)
//	{
//		a = str[left];
//		str[left] = str[right];
//		str[right] = '\0';
//		reverse_str(str+1);
//		str[right] = a;
//	
//	}
//	
//
//
//}
//
//
//
//int main()
//{
//	char arr[] = "abcdefghijklmn";
//	
//
//	reverse_str(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int DigitSum(unsigned int n)
//{
//	int sum = n % 10;
//	if (n >= 10)
//	{
//		return sum+DigitSum(n / 10);
//	}
//	
//	return sum;
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	DigitSum(a);
//	printf("%d\n", DigitSum(a));
//	return 0;
//}

////模拟pow函数
//double expexp(n, k)
//{
//	if (k > 0)
//		return n * expexp(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / expexp(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	expexp(n, k);
//	printf("%lf\n", expexp(n, k));
//	return 0;
//}

////斐波那契数列
////递归
//int Feb(int n)
//{
//	if (n > 2)
//		return Feb(n - 1) + Feb(n - 2);
//	else
//		return 1;
//}

//非递归
//
//int Feb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Feb(n);
//	printf("%d\n", Feb(n));
//	return 0;
//}

//冒泡排序法

//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}