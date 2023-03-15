/*
** EPITECH PROJECT, 2023
** hehe
** File description:
** hehe
*/

#include "header/my.h"

void speed_increase(all_t *all)
{
    if (all->score == 9)
        all->speed = 42;
    if (all->score == 6)
        all->speed = 30;
    if (all->score == 3)
        all->speed = 20;
}

int check_hit(all_t *all)
{
    if (all->event.mouseButton.x >= all->position.x
    && all->event.mouseButton.x <= all->position.x + 110
    && all->event.mouseButton.y >= all->position.y
    && all->event.mouseButton.y <= all->position.y + 110) {
        all->score++;
        my_putstr("Nice shot hunter !\n");
        all->score;
        all->position.x = -330;
        all->position.y = rand() % 600;
        return 0;
    } else {
        my_putstr("You missed !\n");
        all->score;
        all->score--;
    }
    return 0;
}
