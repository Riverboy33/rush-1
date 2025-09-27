/*
** EPITECH PROJECT, 2025
** rush.c
** File description:
** test
*/
#include <unistd.h>

void column(int x, int y)
{
    for (int i = 0; i < y - 2; i++){
        if (x > 1)
            write(1, "|", 1);
        for (int j = 0; j < x - 2; j++)
            write(1, " ", 1);
        write(1, "|\n", 2);
    }
}

void line(int x)
{
    write(1, "o", 1);
    for (int i = 0; i < x - 2; i++)
        write(1, "-", 1);
    write(1, "o\n", 2);
}

void condition(int x, int y)
{
    if (x == 1 && y == 1)
        write(1, "o\n", 2);
    if (y == 1 && x != 1)
        line(x);
    else if (x == 1){
        write(1, "o\n", 2);
        column(x, y);
        write(1, "o\n", 2);
    } else {
        line(x);
        column(x, y);
        line(x);
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        write(1, "Invalid size\n", 13);
    else
        condition(x, y);
}
