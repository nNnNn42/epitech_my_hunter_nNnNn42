/*
** EPITECH PROJECT, 2023
** hehe
** File description:
** hehe
*/

#include "header/my.h"

texture_t *tex(void)
{
    texture_t *text = malloc(sizeof(texture_t));

    text->ar = malloc(sizeof(sfIntRect));
    text->ar->left = 0;
    text->ar->top = 0;
    text->ar->width = 225;
    text->ar->height = 58;
    text->tex_duck = sfTexture_createFromFile("./sprites/spritesheet.png",
                        text->ar);
    text->ar->width = 68;
    text->tex_back = sfTexture_createFromFile("./sprites/bg.png",
                            NULL);
    text->sp_back = sfSprite_create();
    text->sp_duck = sfSprite_create();
    text->text_position.x = 1000;
    text->text_position.y = 700;
    return (text);
}

all_t *set_all(void)
{
    all_t *all = malloc(sizeof(all_t));

    all->i = 0;
    all->sec = 0;
    all->text = sfText_create();
    all->font = sfFont_createFromFile("sprites/Hunter.ttf");
    all->music = sfMusic_createFromFile("sprites/fuckduckhunt.ogg");
    all->gun = sfMusic_createFromFile("sprites/shotgun.ogg");
    all->position.x = -110;
    all->position.y = rand() % 600;
    all->cl = sfClock_create();

    all->score = 0;
    all->speed = 10;
    return (all);
}
