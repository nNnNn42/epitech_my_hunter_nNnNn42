/*
** EPITECH PROJECT, 2023
** hehe
** File description:
** hehe
*/


#pragma once

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

typedef struct texture {
    sfTexture *tex_duck;
    sfTexture *tex_back;
    sfSprite *sp_back;
    sfSprite *sp_duck;
    sfVector2f text_position;
    sfIntRect *ar;
} texture_t;

typedef struct all {
    sfRenderWindow *window;
    sfClock *cl;
    sfVector2f position;
    short i;
    short score;
    short speed;
    sfEvent event;
    sfTime time;
    float sec;
    sfText *text;
    sfFont *font;
    sfMusic *music;
    sfMusic *gun;
} all_t;

texture_t *tex(void);
all_t *set_all(void);
void clean(texture_t *, all_t *);
int game(short, short);
void draw(texture_t *, all_t *);
void set_items(texture_t *, all_t *);
void checking_all(texture_t *, all_t *, short);
void set_variables(void);
int my_putstr(char const *str);
int check_hit(all_t *all);
void speed_increase(all_t *all);
