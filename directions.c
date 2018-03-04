/*
** directions.c for directions.c in /Users/qu_j/Crusader/bayle_n
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Fri Apr 29 15:52:45 2016 QU Juliette
** Last update Wed May  4 10:24:47 2016 QU Juliette
*/

#include "header.h"

int	en_haut(int j, int i, int p, t_depart *go)
{
  p++;
  j--;
  go->no++;
  if (j >= 0 && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
	{
	  go->end_x = i;
	  go->end_y = j;
	}
      en_haut(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}

int	en_bas(int j, int i, int p, t_depart *go)
{
  p++;
  j++;
  go->no++;
  if (j < L && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
      {
        go->end_x = i;
        go->end_y = j;
      }
      en_bas(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}

int	en_droite(int j, int i, int p, t_depart *go)
{
  p++;
  i++;
  go->no++;
  if (i < C && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
	{
	  go->end_x = i;
	  go->end_y = j;
	}
      en_droite(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}

int	en_b_droite(int j, int i, int p, t_depart *go)
{
  p++;
  j++;
  i++;
  go->no++;
  if (j < L && i < C && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
	{
	  go->end_x = i;
	  go->end_y = j;
	}
      en_b_droite(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}
