/*
** initialisation.c for initialisation.c in /Users/qu_j/Crusader/bayle_n
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Fri Apr 29 15:55:00 2016 QU Juliette
** Last update Mon May  2 14:26:07 2016 QU Juliette
*/

#include "header.h"

t_depart	*init_struct(void)
{
  t_depart	*go;

  go = malloc(sizeof(struct first));
  go->end_x = 0;
  go->end_y = 0;
  go->taille = 0;
  go->no = 0;
  go->g = NULL;
  go->tab = NULL;
  go->check = 0;
  go->size = 0;
  go->ok = 0;
  go->v = 0;
  go->p = 0;
  return (go);
}

void	init1(t_depart *go, char **tab, char **g)
{
  go->ok = 0;
  go->d = 0;
  go->p = 0;
  go->v = 0;
  go->tab = tab;
  go->g = g;
}

void	init2(t_depart *go)
{
  go->d++;
  go->ok = 0;
}
