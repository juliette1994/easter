/*
** directions2.c for directions2.c in /Users/qu_j/Crusader/bayle_n
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Fri Apr 29 15:52:14 2016 QU Juliette
** Last update Mon May  2 14:23:20 2016 QU Juliette
*/

#include "header.h"

int	en_h_gauche(int j, int i, int p, t_depart *go)
{
  p++;
  j--;
  i--;
  go->no++;
  if (j >= 0 && i >= 0 && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
	{
	  go->end_x = i;
	  go->end_y = j;
	}
      en_h_gauche(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}

int	en_b_gauche(int j, int i, int p, t_depart *go)
{
  p++;
  j++;
  i--;
  go->no++;
  if (j < L && i >= 0 && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
	{
	  go->end_x = i;
	  go->end_y = j;
	}
      en_b_gauche(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}

int	en_gauche(int j, int i, int p, t_depart *go)
{
  p++;
  i--;
  go->no++;
  if (i >= 0 && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
	{
	  go->end_x = i;
	  go->end_y = j;
	}
      en_gauche(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}

int	en_h_droite(int j, int i, int p, t_depart *go)
{
  p++;
  j--;
  i++;
  if (i < C && j >= 0 && go->g[j][i] == go->tab[go->d][p])
    {
      go->taille++;
      if (go->no == my_strlen(go->tab[go->d]) - 1)
	{
	  go->end_x = i;
	  go->end_y = j;
	}
      en_h_droite(j, i, p, go);
    }
  else
    return (0);
  return (go->taille);
}
