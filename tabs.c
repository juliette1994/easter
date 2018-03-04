/*
** tabs.c for tabs.c in /Users/qu_j/Crusader/bayle_n
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Fri Apr 29 15:53:14 2016 QU Juliette
** Last update Mon May  2 15:49:38 2016 QU Juliette
*/

#include "header.h"

char	**tab_2_grille(char grille[G])
{
  int	aide;
  char	**tab;
  int	i;
  int	j;

  tab = malloc(L * sizeof(char*));
  if (tab == NULL)
    my_putstr("kO\n");
  aide = 0;
  for (i = 0; i < L && grille[aide]; i++)
    {
      tab[i] = malloc(C * sizeof(char));
      if (tab == NULL)
        my_putstr("kO\n");
      for (j = 0; j < C && grille[aide]; j++)
        {
          tab[i][j] = grille[aide];
          aide++;
        }
    }
  return (tab);
}

void	tab_2_liste(char liste[LISTE], char **g, t_funct var[D], t_depart *go)
{
  int	aide;
  char	**tab;
  int	i;
  int	j;

  tab = malloc(Ll * sizeof(char*));
  if (tab == NULL)
    my_putstr("kO\n");
  aide = 0;
  for (i = 0; i < Ll && liste[aide]; i++)
    {
      tab[i] = malloc(Cl * sizeof(char));
      if (tab[i] == NULL)
        my_putstr("KO\n");
      for (j = 0; liste[aide] && liste[aide] != '\n'; j++)
        {
	  tab[i][j] = liste[aide];
	  aide++;
        }
      aide++;
    }
  verification(tab, g, var, go);
  free(tab);
}
