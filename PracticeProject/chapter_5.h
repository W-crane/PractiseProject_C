#pragma once
//
// Created by 64432 on 2023/3/22.
//

#ifndef PRACTICEPROJECT_CHAPTER_5_H
#define PRACTICEPROJECT_CHAPTER_5_H
#define _CRT_SECURE_NO_WARNINGS 1
#endif //PRACTICEPROJECT_CHAPTER_5_H

#include <stdbool.h>
#include "stdio.h"
#include "math.h"

void func54()
{
    int num_c = 0, num_space = 0, num_n = 0, num_o = 0;
    char scan;

    scanf_s("%c", &scan);
    while (scan != '\n') {
        if ((scan > 'a' && scan < 'z') || (scan > 'A' && scan < 'Z'))
            num_c++;
        else if (scan > '0' && scan < '9')
            num_n++;
        else if (scan == ' ')
            num_space++;
        else
            num_o++;
        scanf_s("%c", &scan);
    }
    printf("有个%d英文字母，%d个空格，%d个数字，%d个其他字符", num_c, num_space, num_n, num_o);
}

float external(float a, float x)
{
    float i, num = 0;
    for (i = 0; i < x; i++) {
        num = num + a * pow(10, i);
    }

    return num;
}

void func55()
{
    int n, i, num = 0;

    scanf_s("%d", &n);
    for (i = 0; i <= n; i++) {
        num += external(2.0, (float)i);
    }
    printf("%d", num);
}

int factorial(int n)
{
    int num = 1, i;
    for (i = 1; i <= n; i++) {
        num = num * i;
    }
    return num;
}

void func56()
{
    int n = 0, num = 0;
    for (int i = 0; i <= 20; i++) {
        num += factorial(i);
    }
    printf("%d", num);
}

void func57()
{
    int i = 0;
    float num = 0;
    for (i = 1; i <= 100; i++) {
        num += i;
    }
    for (i = 1; i <= 50; i++) {
        num += pow(i, 2);
    }
    for (i = 1; i <= 10; i++) {
        num += 1.0 / i;
    }
    printf("%lf", num);
}

void func58()
{
    int num, h_n, t_n, g_n;
    printf("请输入一个三位数：");
    fflush(stdout);
    scanf_s("%d", &num);
    while (num < 100 || num > 999)
    {
        printf("请输入三位数!\n");
        fflush(stdout);
        scanf_s("%d", &num);
    }
    h_n = num / 100;
    t_n = num % 100 / 10;
    g_n = num % 10;
    if (num == pow(h_n, 3) + pow(t_n, 3) + pow(g_n, 3)) {
        printf("这是一个水仙花数");
    }
    else {
        printf("这不是一个水仙花数");
    }

}

int isComplete(int n)
{
    int num = 0, i;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            num += i;
    }
    if (num == n) {
        return 1;
    }
    else
        return 0;

}

void func59()
{
    int i;
    for (i = 1; i <= 1000; i++) {
        if (isComplete(i)) {
            printf("%d its factors are ", i);
            for (int x = 1; x <= i / 2; x++) {
                if (x == 1) {
                    printf("1");
                    continue;
                }
                if (i % x == 0) {
                    printf(",%d", x);
                }
            }
            printf("\n");
        }
    }
}

float fibonacci(int n)
{
    if (n == 1) {
        return 1.0;
    }
    else if (n == 2) {
        return 2.0;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void func510()
{
    double sum = 0;
    for (int i = 1; i <= 20; i++) {
        sum += fibonacci(i + 1) / fibonacci(i);
    }
    printf("%f", sum);
}

double ball_fall(int n)
{
    int i;
    if (n == 1)
    {
        return 50.0;
    }
    return ball_fall(n - 1) / 2.0;
}

void func511()
{
    double total_dis = 100;
    printf("第十次反弹%f米\n", ball_fall(10));
    for (int i = 1; i <= 10; i++)
    {
        total_dis += 2 * ball_fall(i);
    }
    printf("一共经过%f米", total_dis);
}

void func512()
{
    int sum = 1;
    for (int i = 1; i <= 9; i++)
    {
        sum = 2 * sum + 2;
    }
    printf("%d", sum);
}

void func513()
{
    int a;
    double x1, x2;
    scanf_s("%d", &a);
    x2 = 1.0;
    while (1)
    {
        x1 = x2;
        x2 = 0.5 * (x1 + a / x1);
        if (fabs(x2 - x1) < 0.00001)
            break;
    }
    printf("%llf  %llf", x2, x1);

}

double cubic_function(double x)
{
    return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
}

void func515()
{
    double left = 10, right = -10, mid;
    while (1) {
        mid = (left + right) / 2.0;
        if (cubic_function(mid) * cubic_function(left) < 0) {
            right = mid;
        }
        else {
            left = mid;
        }
        if (fabs(left - right) < 0.000001)
            break;
    }
    printf("%f", left);
}

void func516()
{
    char cs[7][8] = { "   *", "  ***", " *****", "*******", " *****", "  ***", "   *" };
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", cs[i]);
    }
}

void swap_char(char* c1, char* c2)
{
    char temp;
    temp = *c2;
    *c2 = *c1;
    *c1 = temp;
}

void func517()
{
    char cs1[4] = { 'A', 'B', 'C' };
    char cs2[4] = { 'X', 'Y', 'Z' };
    for (int i = 0; i < 3; i++) {
        if (cs2[2] == 'X' || cs2[2] == 'Z') {
            swap_char(cs2 + 2, cs2 + i);
        }
    } for (int i = 0; i < 2; i++)
    {
        if (cs2[0] == 'X') {
            swap_char(cs2, cs2 + i);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c的对手是%c\n", cs1[i], cs2[i]);
    }

}








