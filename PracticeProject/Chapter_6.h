#pragma once

//
// Created by 64432 on 2023/3/24.
//

#ifndef PRACTICEPROJECT_CHAPTER_6_H
#define PRACTICEPROJECT_CHAPTER_6_H

#endif //PRACTICEPROJECT_CHAPTER_6_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define n1 3
#define n2 4

int isPir(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}


void func61()
{
    int i;
    printf("100内的质数有：");
    for (i = 2; i <= 100; i++)
    {
        if (isPir(i))
            printf("%d  ", i);
    }
}

void swap_num(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int find_max_index(int* head, int num)
{
    int max = head[0], index = 0, i;
    for (i = 0; i < num; i++)
    {
        if (head[i] > max)
        {
            max = head[i];
            index = i;
        }
    }
    return index;
}

void func62()
{
    int i, max_index;
    int nums[10];
    printf("请输入十个数字：");
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", nums + i);
    }
    for (i = 9; i >= 0; i--)
    {
        max_index = find_max_index(nums, i + 1);
        swap_num(nums + i, nums + max_index);
    }
    printf("\n从小到大的顺序为：");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", nums[i]);
    }
}


void func63()
{
    int matrix[3][3] = { {2,4,2}, {3,7,3}, {7,5,8} };
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                printf("%d ", matrix[i][j]);
        }
}

void insert_num(int* nums, int num, int index, int end)
{
    int i;
    for (i = end; i >= index; i--)
    {
        nums[i + 1] = nums[i];
    }
    nums[index] = num;
}

void func64()
{
    int nums[10] = { 1,2,3,4,6,7,8,9,10 };
    int i, num;
    printf("初始数组内容为：");
    for (i = 0; nums[i] != 0; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n请输入要插入的数字：");
    scanf_s("%d", &num);
    for (i = 0; i < sizeof(nums) / sizeof(int); i++)
    {
        if (num <= nums[i])
        {
            insert_num(nums, num, i, 8);
            break;
        }
        if (i == sizeof(nums) / sizeof(int) - 1)
            nums[9] = num;
    }

    printf("插入后数组内容为：");
    for (i = 0; i < sizeof(nums) / sizeof(int); i++)
    {
        printf("%d ", nums[i]);
    }
}

void func66()
{
    int yh_tria[10][10];
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
        {
            if (j == 0)
                yh_tria[i][j] = 1;
            else
                yh_tria[i][j] = 0;
        }
    for (i = 1; i < 10; i++)
        for (j = 1; j <= i; j++)
        {
            yh_tria[i][j] = yh_tria[i - 1][j - 1] + yh_tria[i - 1][j];
        }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d\t", yh_tria[i][j]);
        }
        printf("\n");
    }

}


void func67_1()
{
    int magic[n1][n1];
    int i, j, num;
    for (i = 0; i < n1; i++)
        for (j = 0; j < n1; j++)
            magic[i][j] = 0;
    i = 0, j = n1 / 2;
    magic[i][j] = 1;
    for (num = 2; num < pow(n1, 2.0) + 1; num++)
    {
        if (i > 0 && j < n1 - 1 && magic[i - 1][j + 1] == 0)
        {
            i--;
            j++;
        }
        else if (i == 0 && j < n1 - 1 && magic[n1 - 1][j + 1] == 0)
        {
            i = n1 - 1;
            j++;
        }
        else if (i > 0 && j == n1 - 1 && magic[i - 1][0] == 0)
        {
            i--;
            j = 0;
        }
        else if (i == 0 && j == n1 - 1 && magic[n1 - 1][0] == 0)
        {
            i = n1 - 1;
            j = 0;
        }
        else if ((i == 0 && j == n1 - 1 && magic[n1 - 1][0] != 0) || (i > 0 && j == n1 - 1 && magic[i - 1][0] != 0) || (i == 0 && j < n1 - 1 && magic[n1 - 1][j + 1] != 0) || (i > 0 && j < n1 - 1 && magic[i - 1][j + 1] != 0))
        {
            if (i < n1 - 1)
                i++;
            else if (i == n1 - 1)
                i = 0;
        }
        magic[i][j] = num;
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d\t", magic[i][j]);
        }
        printf("\n");
    }

}

int on_angle(int x, int y, int num)
{
    if (x == y || x + y == num - 1)
        return 1;
    return 0;
}

void func67_2()
{
    int magic[n2][n2];
    int i, j, num;
    for (i = 0; i < n2; i++)
        for (j = 0; j < n2; j++)
        {
            if (on_angle(i, j, n2))
                magic[i][j] = pow(n2, 2.0) - (i * n2 + j);
            else
                magic[i][j] = i * n2 + j + 1;
        }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d\t", magic[i][j]);
        }
        printf("\n");
    }
}


int is_an(int nums[5][5], int x, int y, int dimension)
{
    int num = nums[x][y], i;
    int* copy_col = (int*)malloc(sizeof(int) * dimension);

    for (i = 0; i < dimension; i++)
        copy_col[i] = nums[i][y];

    if (find_max_index(nums[x], dimension) == y && find_max_index(copy_col, dimension) == x)
        return 1;
    return 0;
}

void func68()
{
    int nums[5][5] = { {4, 3, 5, 2, 1}, {1, 2, 3, 4, 5}, {5, 4 ,3, 2, 1}, {4, 5, 3, 2, 1}, {1, 2, 3, 5, 4} };
    int an_matrix[5][5];
    int i, j;
    printf("原矩阵为：\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", nums[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            if (is_an(nums, i, j, 5))
                an_matrix[i][j] = 1;
            else
                an_matrix[i][j] = 0;
        }
    printf("原矩阵的鞍矩阵为：\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", an_matrix[i][j]);
        }
        printf("\n");
    }

}

int log_find(int* nums, int length, int num)
{
    int left = 0, right = length - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == num)
            return mid;
        else if (nums[mid] > num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

void func69()
{
    int nums[15];
    int num, i, index;
    for (i = 0; i < 15; i++)
    {
        nums[i] = 15 - i;
    }
    nums[4] = 10;
    printf("原数组为：");
    for (i = 0; i < 15; i++)
    {
        printf("%d  ", nums[i]);
    }
    printf("\n请输入要查找的数：");
    scanf_s("%d", &num);
    index = log_find(nums, 15, num);
    if (index != 0)
        printf("该数字在第%d个!", index + 1);
    else
        printf("数组中没有该数字！");
}


void func613()
{
    char s1[] = "hello";
    char s2[] = "world!";
    char s3[20];
    int i;
    for (i = 0; i < strlen(s1); i++)
        s3[i] = s1[i];
    s3[strlen(s1)] = ' ';
    for (i = 0; i < strlen(s2) + 1; i++)
        s3[i + strlen(s1) + 1] = s2[i];
    printf("第一个字符串:%s\n", s1);
    printf("第二个字符串:%s\n", s2);
    printf("拼接成的字符串:%s\n", s3);
}

void func614()
{
    char s1[20];
    char s2[20];
    int i, diff;
    printf("请输入第一个字符串：");
    gets_s(s1, 20);
    printf("请输入第二个字符串：");
    gets_s(s2, 20);
    for (i = 0; i < 20; i++)
    {
        diff = s1[i] - s2[i];
        if (diff != 0)
        {
            printf("%d\n", diff);
            break;
        }
    }
}


void func615()
{
    char s1[20];
    char s2[20];
    int i;
    printf("请输入第一个字符串：");
    gets_s(s1, 20);
    for (i = 0; i < 20; i++)
    {
        s2[i] = s1[i];
        if (s1[i] == '\0')
            break;
    }
    printf("复制后的字符串：%s\n", s2);
}