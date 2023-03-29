#pragma once

//
// Created by 64432 on 2023/3/18.
//

#ifndef PRACTICEPROJECT_CHAPTER_4_H
#define PRACTICEPROJECT_CHAPTER_4_H
#define _CRT_SECURE_NO_WARNINGS 1

#endif //PRACTICEPROJECT_CHAPTER_4_H

#include "stdio.h"
#include "math.h"

void func43()
{
    int a = 3, b = 4, c = 5;
    printf("%d", !(a + b) + c - 1 && b + c / 2);
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void func44()
{
    int a, b, c, max;
    scanf_s("%d%d%d", &a, &b, &c);
    max = a;
    if (b > a)
    {
        if (b > c)
            max = b;
        else
            max = c;
    }
    else
    {
        if (c > a)
        {
            max = c;
        }
    }
    printf("������Ϊ��%d", max);
}

void func45()
{
    int num, a;
    scanf_s("%d", &num);
    getchar();
    a = num < 1000 && num > 0;
    if (a)
        printf("%.0f", sqrt(num));
    else
    {
        printf("����������������룺");
        fflush(stdout);
        scanf_s("%d", &num);
    }
}

void func46()
{
    double x, y;
    scanf_s("%lf", &x);
    if (x < 1)
        y = x;
    else if (x >= 1 && x < 10)
        y = 2 * x - 1;
    else
        y = 3 * x - 11;
    printf("y��ֵΪ��%5.3f", y);
}

void func47()
{
    int grade;
    char level;
    printf("������ɼ�:");
    fflush(stdout);
    scanf_s("%d", &grade);
    switch (grade / 10)
    {
    case 9:
        level = 'A';
        break;
    case 8:
        level = 'B';
        break;
    case 7:
        level = 'C';
        break;
    case 6:
        level = 'D';
        break;
    default:
        level = 'E';
    }
    printf("��ĵȼ�Ϊ��%c", level);
}

void func49()
{
    int num, n1, n2, n3, n4, n5, reverse_num;
    printf("������һ����������λ������:");
    fflush(stdout);
    scanf_s("%d", &num);
    n1 = num % 10;
    n2 = num % 100 / 10;
    n3 = num % 1000 / 100;
    n4 = num % 10000 / 1000;
    n5 = num / 10000;
    reverse_num = n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5;
    if (n5 != 0)
    {
        printf("����5λ��\n");
        printf("��λΪ��%d\t", n5);
        printf("ǧλΪ��%d\t", n4);
        printf("��λΪ��%d\t", n3);
        printf("ʮλΪ��%d\t", n2);
        printf("��λΪ��%d\n", n1);
        printf("�������Ϊ��%d\n", reverse_num);
    }
    else if (n4 != 0)
    {
        printf("����4λ��\n");
        printf("ǧλΪ��%d\t", n4);
        printf("��λΪ��%d\t", n3);
        printf("ʮλΪ��%d\t", n2);
        printf("��λΪ��%d\n", n1);
        printf("�������Ϊ��%d\n", reverse_num);
    }
    else if (n3 != 0)
    {
        printf("����3λ��\n");
        printf("��λΪ��%d\t", n3);
        printf("ʮλΪ��%d\t", n2);
        printf("��λΪ��%d\n", n1);
        printf("�������Ϊ��%d\n", reverse_num);
    }
    else if (n2 != 0)
    {
        printf("����2λ��\n");
        printf("ʮλΪ��%d\t", n2);
        printf("��λΪ��%d\n", n1);
        printf("�������Ϊ��%d\n", reverse_num);
    }
    else if (n1 != 0)
    {
        printf("����1λ��\n");
        printf("��λΪ��%d\n", n1);
        printf("�������Ϊ��%d\n", reverse_num);
    }
}

void func411()
{
    int a, b, c, d;
    printf("�������ĸ�������");
    fflush(stdout);
    scanf_s("%d%d%d%d", &a, &b, &c, &d);
    if (a > b)
    {
        swap(&a, &b);
    }if (a > c)
    {
        swap(&a, &c);
    }if (a > d)
    {
        swap(&a, &d);
    }if (b > c)
    {
        swap(&b, &c);
    }if (b > d)
    {
        swap(&b, &d);
    }if (c > d)
    {
        swap(&c, &d);
    }
    printf("��С�����˳��Ϊ��%d\t%d\t%d\t%d\t", a, b, c, d);
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

void func412()
{
    double x1, y1;
    int h;
    printf("�������ĺ������������:");
    fflush(stdout);
    scanf_s("%lf%lf", &x1, &y1);
    if (distance(x1, y1, 2.0, 2.0) <= 1)
        h = 10;
    else if (distance(x1, y1, 2.0, -2.0) <= 1)
        h = 10;
    else if (distance(x1, y1, -2.0, 2.0) <= 1)
        h = 10;
    else if (distance(x1, y1, -2.0, -2.0) <= 1)
        h = 10;
    else
        h = 0;
    printf("�ĵ�߶�Ϊ��%d", h);

}