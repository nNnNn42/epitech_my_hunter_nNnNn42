/*
** EPITECH PROJECT, 2023
** hee
** File description:
** hehe
*/

#include "header/my.h"

int get_events(all_t *all)
{
    while (sfRenderWindow_pollEvent(all->window, &all->event)) {
        if (all->event.type == sfEvtClosed)
            sfRenderWindow_close(all->window);
        if (all->event.type == sfEvtMouseButtonPressed) {
            check_hit(all);
            sfMusic_play(all->gun);
        }
        if (all->event.type == sfEvtKeyPressed
        && all->event.key.code == sfKeyEscape)
            sfRenderWindow_close(all->window);
    }
    return 0;
}

int check_score(texture_t *texture, all_t *all)
{
    if (all->score == 10) {
        my_putstr("You won !!\n");
        clean(texture, all);
        return 0;
    }
    if (all->score < 0) {
        my_putstr("Mission failed !!\n");
        clean(texture, all);
        return 0;
    }
    return (42);
}

int setup_window(short x, short y, texture_t *t, all_t *a)
{
    sfVideoMode m = {x, y, 60};
    char const n[9] = "My_hunter";
    a->window = sfRenderWindow_create(m, n, sfClose, NULL);
    if (!a->window || !a->music) return (84);
    set_items(t, a);
    sfMusic_play(a->music);
}

void loop_game(texture_t *t, all_t *a, short x)
{
    while (sfRenderWindow_isOpen(a->window)) {
        sfText_setString(a->text, "my_hunter");
        a->time = sfClock_getElapsedTime(a->cl);
        a->sec = sfTime_asSeconds(a->time);
        a->position.x = a->position.x + a->speed;
        get_events(a);
        speed_increase(a);
        checking_all(t, a, x);
        sfSprite_setPosition(t->sp_duck, a->position);
        draw(t, a);
    }
}

int game(short x, short y)
{
    texture_t *t = tex();
    all_t *a = set_all();
    setup_window(x, y, t, a);
    loop_game(t, a, x);
    clean(t, a);
    return 0;
}
