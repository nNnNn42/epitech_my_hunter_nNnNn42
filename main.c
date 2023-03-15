/*
** EPITECH PROJECT, 2023
** hehe
** File description:
** hehe
*/

#include "header/my.h"

int my_strlen(char const *str)
{
    int c = 0;
    while (*str != 0) {
        c = c + 1;
        str++;
    }
    return c;
}

void my_puterr(char const *str)
{
    write(2, str, my_strlen(str));
}

int description(void)
{
    my_putstr("my_hunter, a simple duck hunt game\n");
    my_putstr("Touche le plus de canards possibles !\n");
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] == '-'
    && argv[1][1] == 'h' && argv[1][2] == '\0') {
    if (argc == 2 && argv[1][0] == '-'
    && argv[1][1] == 'h' && argv[1][2] == '\0') {
        description();
    }
    return 0;
    }
    if (game(1280, 769)) {
        my_puterr("ERROR !\n");
        return 84;
    }
    return 0;
}
