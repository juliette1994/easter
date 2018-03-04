/*
** verif&recup.c for verif&recup.c in /Users/qu_j/Crusader/bayle_n
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Fri Apr 29 15:54:04 2016 QU Juliette
** Last update Tue May  3 14:50:56 2016 QU Juliette
*/

#include "header.h"

void	boucle_verification(int i, int j, t_depart *go, t_funct var[D])
{
  go->size = my_strlen(go->tab[go->d]) - 1;
  if (go->g[j][i] == go->tab[go->d][go->p])
    {
      while (go->v < D)
	{
	  go->taille = 0;
	  go->no = 0;
	  go->check = var[go->v](j, i, go->p, go);
	  if (go->check == go->size && go->ok == 0)
	    {
	      affichage(go->tab[go->d], i, j, go);
	      go->ok = 1;
	    }
	  go->v++;
	}
      go->v = 0;
    }
}

void	verification(char **tab, char **g, t_funct var[D], t_depart *go)
{
  int	j;
  int	i;

  init1(go, tab, g);
  while (go->d < Ll - 1)
    {
      i = 0;
      j = 0;
      while (j < L)
	{
	  for (; i < C; i++)
	    boucle_verification(i, j, go, var);
	  i = 0;
	  j++;
	}
      if (go->check != go->size && go->ok == 0)
	{
	  my_putstr("\t\t\e[40m|\e[0m\e[1;30m  ");
	  my_putstr(go->tab[go->d]);
	  aff2();
	}
      init2(go);
    }
  free(go);
  my_putchar('\n');
}

void	rc(char liste[LISTE], char grille[G], t_funct var[D], t_depart *go)
{
  char	**g;

  g = tab_2_grille(grille);
  tab_2_liste(liste, g, var, go);
  free(g);
}
