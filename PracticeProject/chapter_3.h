#pragma once
//
// Created by 64432 on 2023/3/18.
//

#ifndef PRACTICEPROJECT_CHAPTER_3_H
#define PRACTICEPROJECT_CHAPTER_3_H
#define _CRT_SECURE_NO_WARNINGS 1

#endif //PRACTICEPROJECT_CHAPTER_3_H

#include "stdio.h"
#include "math.h"

void func32()
{
    long long int principal = 1000ll;
    double r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03, r_s = 0.0035, p1, p2, p3, p4, p_s;
    p1 = principal * (1 + r5);
    p2 = principal * (1.0 + r2) * (1.0 + r3);
    p3 = principal * (1.0 + r3) * (1.0 + r2);
    p4 = principal * pow((1.0 + r1), 5.0);
    p_s = principal * pow((1.0 + r_s), 20);
    printf("%f\n%f\n%f\n%f\n%f\n", p1, p2, p3, p4, p_s);

}

void func33()
{
    long long int d = 300000ll;
    int p = 6000;
    double r = 0.01, m;
    m = log(p / (p - d * r)) / log(1 + r);
    m = (int)(m * 10 + 0.5) / 10.0;
    printf("%.1f", m);
}

void func36()
{
    char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
    c1 += 1;
    c2 += 1;
    c3 += 1;
    c4 += 1;
    c5 += 1;
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    putchar('\n');
    printf("%c", c1);
    printf("%c", c2);
    printf("%c", c3);
    printf("%c", c4);
    printf("%c", c5);
}

void func37()
{
    double r, h, c_c;
    scanf_s("%lf%lf", &r, &h);
    c_c = 2 * 3.141592 * r;
    printf("圆的周长为：%.2f", c_c);

}

void func38()
{
    int c1, c2;
    c1 = getchar();
    c2 = getchar();
    putchar(c1);
    putchar(c2);
    putchar('\n');
    printf("%d", c1);
    printf("%d\n", c2);

}

