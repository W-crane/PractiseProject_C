#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void func71()
{
	int a, b;
	int greatest_common_factor(int, int);
	int lest_common_multiple(int, int);
	printf("��������������:");
	scanf("%d%d", &a, &b);
	printf("�������Ϊ��%d\t��С������Ϊ��%d\n", greatest_common_factor(a, b), lest_common_multiple(a, b));
}


int greatest_common_factor(int a, int b)
{
	int i, gcf;
	for (i = 1; i <= ((a>b) ? a : b) / 2; i++)
	{
		if (a % i == 0 && b % i == 0)
			gcf = i;
	}
	return gcf;
}

int lest_common_multiple(int a, int b)
{
	int lcm = 1;
	while (1)
	{
		if (lcm % a == 0 && lcm % b == 0)
			return lcm;
		lcm++;
	}

}

void func72()
{
	double a, b, c, delta, *x;
	void greater_0(double a, double b, double c);
	void equal_0(double a, double b, double c);
	void less_0();
	printf("������������:");
	scanf("%lf%lf%lf", &a, &b, &c);
	delta = pow(b, 2) - 4 * a * c;
	if (delta > 0)
		greater_0(a, b, c);
	else if (delta == 0)
		equal_0(a, b, c);
	else
		less_0();
}

void greater_0(double a, double b, double c)
{
	double x[2];
	x[0] = (-1.0 * b + sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);
	x[1] = (-1.0 * b - sqrt(pow(b, 2.0) - 4.0 * a * c)) / (2.0 * a);
	printf("�������������⣬�ֱ�Ϊ��%f %f\n", x[0], x[1]);
}

void equal_0(double a, double b, double c)
{
	double x = (-1.0 * b) / (2.0 * a);
	printf("������ֻ��һ���⣬Ϊ��%f\n", x);
}

void less_0()
{
	printf("�������޽�!\n");
}

void func73()
{
	int a;
	int is_prime(int);
	printf("������1������:");
	scanf("%d", &a);
	if (is_prime(a))
		printf("����һ��������");
	else
		printf("�ⲻ��һ��������");
}

int is_prime(int a)
{
	int i;
	if (a <= 1)
		return 0;
	for (i = 2; i <= a / 2; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

void func74()
{
	int nums[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int i, j;
	void swap_ij(int nums[3][3]);
	printf("ԭ����Ϊ��\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	swap_ij(nums);
	printf("ת�ú�����Ϊ��\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
}

void swap_ij(int nums[3][3])
{
	int nums_temp[3][3];
	int i, j;
	for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			nums_temp[i][j] = nums[j][i];

	for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			nums[i][j] = nums_temp[i][j];

}

void func75()
{
	char str[10];
	void reverse_str(char*);
	printf("������һ���ַ�����");
	scanf("%s", str);
	reverse_str(str);
	printf("�ַ�����ת��Ϊ��%s\n", str);
}

void reverse_str(char* str)
{
	int i, j;
	char str_temp[10];
	for (j = 0; j<10; j++)
	{
		if (str[j] == '\0')
		{
			j--;
			break;
		}
	}
	for (i = 0; i <= j; i++)
		str_temp[i] = str[j - i];
	for (i = 0; i <= j; i++)
		str[i] = str_temp[i];
}

void func78()
{
	int num;
	char str[9];
	void to_str_with_space(int num, char str_temp[9]);
	printf("������1����λ����:");
	scanf("%d", &num);
	to_str_with_space(num, str);
	printf("����ո��Ϊ��%s\n", str);
}

void to_str_with_space(int num, char str_temp[9])
{
	char str[9];
	int i;
	while (1)
	{
		if (num < 1000 || num > 9999)
		{
			printf("���������������λ����:");
			scanf("%d", &num);
		}
		else
			break;
	}


	itoa(num, str, 10);
	str[4] = '\0';
	for (i = 0; i<8; i++)
	{
		if (i % 2 == 0)
			str_temp[i] = str[i / 2];
		else
			str_temp[i] = ' ';
	}
	str_temp[8] = '\0';
}

void func710()
{
	char str[100], max_word[15] = " ";
	void find_longest_word(char *str, char *word);

	printf("������һ�е���:");
	gets(str);

	find_longest_word(str, max_word);
	printf("��ĵ���Ϊ��%s", max_word);

}

void find_longest_word(char *str, char *word)
{
	char *temp;
	int max = 0;

	temp = strtok(str, " ");

	while (temp != NULL)
	{
		if (strlen(temp) >= max)
		{
			max = strlen(temp);
			strcpy(word, temp);
		}
		temp = strtok(NULL, " ");
	}

}


void func713()
{
	int n, x;
	double p(int n, int x);
	printf("������n��x��ֵ:");
	scanf("%d%d", &n, &x);
	printf("%d��%d�����õ¶���ʽֵΪ��%f", x, n, p(n, x));
}

double p(int n, int x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else if (n < 0)
		return 0;
	else
		return ((2 * n - 1) * x - p(n - 1, x) - (n - 1) * p(n - 2, x)) / (double)n;
}

void func715()
{
	char list[10][2][10];
	char search_name[10], searched_id[10];

	void init_list(char list[10][2][10]);
	void print_list(char list[10][2][10]);
	void sort_list(char list[10][2][10]);
	char* search_id(char list[10][2][10], char id[10]);

	init_list(list);
	print_list(list);

	sort_list(list);
	print_list(list);

	printf("��������Ҫ���ҵ�ְ���ţ�");
	gets(searched_id);
	strcpy(search_name, search_id(list, searched_id));
	printf("��ְ��������Ϊ��%s", search_name);

}

void init_list(char list[10][2][10])
{
	int i, j;
	char info[20], *name, *id;
	for (i = 0; i<10; i++)
	{
		printf("�������%dλԱ����ְ������������", i + 1);
		gets(info);
		id = strtok(info, " ");
		strcpy(list[i][0], id);
		name = strtok(NULL, " ");
		strcpy(list[i][1], name);
	}
}

void print_list(char list[10][2][10])
{
	int i;
	printf("ְ����\t����\n");
	for (i = 0; i<10; i++)
	{
		printf("%s\t%s\n", list[i][0], list[i][1]);
	}
}

void sort_list(char list[10][2][10])
{
	char temp[2][10];
	char max_id[10];
	int i, j, max_index = 0;
	for (i = 9; i >= 0; i--)
	{
		strcpy(max_id, list[0][0]);
		max_index = 0;
		for (j = 0; j <= i; j++)
		{
			if (strcmp(list[j][0], max_id) == 1)
			{
				strcpy(max_id, list[j][0]);
				max_index = j;
			}

		}
		strcpy(temp[0], list[max_index][0]);
		strcpy(list[max_index][0], list[i][0]);
		strcpy(list[i][0], temp[0]);

		strcpy(temp[1], list[max_index][1]);
		strcpy(list[max_index][1], list[i][1]);
		strcpy(list[i][1], temp[1]);

	}

}


char* search_id(char list[10][2][10], char id[10])
{
	int left = 0, right = 9, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (strcmp(id, list[mid][0]) == 0)
			return list[mid][1];
		else if ((strcmp(id, list[mid][0]) == 1))
			left = mid + 1;
		else if ((strcmp(id, list[mid][0]) == -1))
			right = mid - 1;
	}
}


void func717()
{
	int a, w;
	char *b;
	void convert_int_to_string(int num, int w, char* str);
	int compute_w(int a);

	printf("������һ�����֣�");
	scanf("%d", &a);
	w = compute_w(a);
	b = (char*)malloc(sizeof(char) * (w + 1));

	convert_int_to_string(a, w, b);
	b[w] = '\0';
	printf("ת��Ϊ���ַ���Ϊ��%s\n", b);
}

int compute_w(int a)
{
	int i = 0;
	if (a == 0)
		return 1;
	if (a < 0)
		a = abs(a);
	while (a)
	{
		a /= 10;
		i++;
	}
}

void convert_int_to_string(int num, int w, char* str)
{
	if (num >= 0 && num <= 9)
	{
		str[w - 1] = num + 48;
	}
	else
	{
		convert_int_to_string(num % 10, w, str);
		convert_int_to_string(num / 10, w - 1, str);
	}
}

void func718()
{
	int year, month, day, total_days;
	printf("�����������գ�");
	scanf("%d%d%d", &year, &month, &day);
	total_days = compute_day(year, month, day);
	if (total_days != -1)
		printf("��һ����%d��ĵ�%d�졣\n", year, total_days);
	else
		printf("��һ�겻������һ�죡\n");
}

int compute_day(int year, int month, int day)
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i, total_days = 0;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		days[1] = 29;

	if ((month < 1 || month > 12) || (day < 1 || day > days[month - 1]))
		return -1;

	for (i = 0; i<month - 1; i++)
	{
		total_days += days[i];
	}

	total_days += day;
	return total_days;

}