/*
** EPITECH PROJECT, 2023
** hehe
** File description:
** hehe
*/

#include "header/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;

}
