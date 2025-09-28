/*
** EPITECH PROJECT, 2025
** rush.c
** File description:
** test
*/
#include <unistd.h>

void rush_bis_bis(int x, int y)
{
    int i;

    write(1, "\n", 1);
    i = 0;
    while (i < y - 2) {
        write(1, "", 1);
        for (int j = 0; j < x - 2; j++)
            write(1, " ", 1);
        write(1, "", 1);
        write(1, "\n", 1);
        i++;
    }
    write(1, "\\", 1);
    for (int j = 0; j < x - 2; j++)
        write(1, "", 1);
    write(1, "/", 1);
}

void condition(int i, int y)
{
    if (i != y - 1)
        write(1, "\n", 1);
    i++;
}

void rush_bis(int x, int y)
{
    int i;

    if (x == 1) {
        i = 0;
        while (i < y) {
            write(1, "", 1);
            condition(i, y);
        }
        return;
    }
    write(1, "/", 1);
    for (int j = 0; j < x - 2; j++)
        write(1, "", 1);
    write(1, "\\", 1);
    rush_bis_bis(x, y);
}

void rush(int x, int y)
{
    int i;
    int j;

    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    if (x == 1 && y == 1) {
        write(1, "", 1);
        return;
    }
    if (y == 1) {
        i = 0;
        while (i < x) {
            write(1, "", 1);
            i++;
        }
        return;
    }
    rush_bis(x, y);
}
