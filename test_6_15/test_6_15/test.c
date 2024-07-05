#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>

//int step(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return (step(n - 2) + step(n - 1));
//}
//
//int main()
//{
//	int stair = 0;
//	do{
//	scanf("%d", &stair);
//	if (stair > 0 && stair <= 30)
//		break;
//	else
//		printf("输入错误，请重新输入\n");
//	} while (1);
//	step(stair);
//	printf("%d", step(stair));
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int del = 0;
//	scanf("%d", &n);
//	int arr1[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	scanf("%d", &del);
//	
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] != del)
//		{
//			arr1[j] = arr1[i];
//			j++;
//		}
//	}
//
//	//int arr2[50] = { 0 };
//
//	//for (i = 0; i < n; i++)
//	//{
//	//	if (arr1[i] != del)
//	//	{
//	//		arr2[j] = arr1[i];
//	//		j++;
//	//	}
//	//}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//

//int Lily(int n)
//{
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= 4; j++)
//	{
//		int k = (int)pow(10, j);
//		sum = sum + (n / k) * (n % k);
//	}
//	
//	if (sum == n)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		if (Lily(i))
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[2] = { a,b };
//	printf("%d %d", arr[0], arr[1]);
//	return 0;
//}

//int test(unsigned int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 0)
//		return 0;
//	else
//	{
//		return (n % 2 + test(n / 2));
//	}
//}

//int test(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int a = test(num1^num2);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf(" %d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int is_lunar_year(int n)
//{
//	return ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		d = days[m];
//		if (is_lunar_year(y) == 1)
//			d++;
//		printf("%d\n", d);
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	const int* const p = &a;
//	a = 20;
//
//	return 0;
//}

//
//void ranginglajsdijadi(int* arr)
//{
//	int temp = 0;
//	int i = 0;
//	int j = 0;
//	for (j = 1; j >= 0; j--)
//	{
//		for (i = 0; i <= j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				temp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[3] = { 0 };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//
//	ranginglajsdijadi(arr);
//
//	if ((arr[0] + arr[1]) > arr[2])
//		if (arr[0] == arr[1] || arr[1] == arr[2])
//			if (arr[0] == arr[2])
//				printf("dengbian!");
//			else
//				printf("dengyao!");
//		else
//			printf("sanjiaoxing!");
//
//	return 0;
//}

//void PT(int* arr, int x)
//{
//	int i = 0;
//	for(i = 0; i < x; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[5] = { 0,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	PT(arr, sz);
//	return 0;
//}
//void REVERSE(char* p, int x)
//{
//	int left = 0;
//	int right = x - 1;
//	char temp = 0;
//	for (left = 0, right = x - 1; left < right; left++, right--)
//	{
//		temp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = temp;
//	}
//}
//
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	REVERSE(arr, len);
//	printf("%s", arr);
//	return 0;
//}
//
//int Sn(int a, int b)
//{
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//
//	for (i = 0; i < b; i++)
//	{
//		k = (k * 10 + a);
//		sum += k;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int n = Sn(a, b);
//	printf("%d", n);
//	return 0;
//}

//int Lily(int x)
//{
//	int y = x;
//	int k = 1;
//	int sum = 0;
//	while (y / 10)
//	{
//		k++;
//		y /= 10;
//	}
//	y = x;
//	while(y)
//	{
//		sum += pow((y % 10), k);
//		y /= 10;
//	}
//	return sum == x;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (Lily(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < (2 * line - 1); j++)
//		{
//			if (abs(j - line + 1) <= i)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < (2 * line - 1); j++)
//		{
//			if (abs(j - line + 1) + i < line - 1)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d", total);
//	return 0;
//}
//int gys(int x, int y)
//{
//	if (x % y == 0)
//		return y;
//	else
//		return gys(y, x%y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", a * b / gys(a, b));
//	return 0;
//}

//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	int start = 0;
//	int end = 0;
//	int k = 0;
//	while (arr[k] != '\0')
//	{
//		
//		while (arr[end + 1] != ' ' && arr[end + 1] != '\0')
//			end++;
//		k = end + 1;
//		while (start < end)
//		{
//			int tmp = 0;
//			tmp = arr[start];
//			arr[start] = arr[end];
//			arr[end] = tmp;
//			start++;
//			end--;
//		}
//		start = k + 1;
//		end = k + 1;
//	}
//	printf("%s", arr);
//	return 0;
//
//}

//int test(int x)
//{
//	int sum = x / 2;
//	if (sum < 2)
//		return sum;
//	else
//		return sum + test(x / 2 + x % 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	test(2 * n);
//	printf("%d", test(2 * n));
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", arr + i);
	}

	int left = 0;
	int right = 9;
	while (left < right)
	{
		while ((left < right) && arr[left] % 2 == 1)
			left++;
		while ((left < right) && arr[right] % 2 == 0)
			right--;
		if(left < right)
		{ 
			int temp = 0;
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;

		}
		left++;
		right--;
			
	}


	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}