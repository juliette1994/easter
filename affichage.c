/*
** affichage.c for affichage.c in /Users/qu_j/Crusader/bayle_n
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Mon May  2 12:39:05 2016 QU Juliette
** Last update Tue May  3 14:29:03 2016 QU Juliette
*/

#include "header.h"

void	affichage(char *tab, int i, int j, t_depart *go)
{
  my_putstr("\t\t\e[40m|\e[0m\e[1;30m  ");
  my_putstr(tab);
  my_putstr("  \e[0m\t");
  my_putstr("\e[40m|\e[0m [\e[1;95m");
  my_put_nbr(j);
  my_putstr("\e[0m.\e[1;96m");
  my_put_nbr(i);
  my_putstr("\e[0m / \e[1;95m");
  my_put_nbr(go->end_y);
  my_putstr("\e[0m.\e[1;96m");
  my_put_nbr(go->end_x);
  my_putstr("\e[0m] \e[40m|\e[0m");
  my_putchar('\n');
  my_putstr("\t\t\e[40m ----------------------------- \e[0m\n");
}

void	aff2(void)
{
  my_putstr("  \e[0m\t");
  my_putstr("\e[40m|\e[0m ");
  my_putstr("\e[1;91m  NO WORD \e[0m  \e[40m|\e[0m\n");
  my_putstr("\t\t\e[40m ----------------------------- \e[0m\n");
}

void	aff1(void)
{
  my_putstr("\n\t\t\e[40m ----------------------------- \e[0m");
  my_putstr("\n\t\t\e[40m|\e[0m  \e[1mWords\e[0m\t\e[1;40m|\e[0m");
  my_putstr("\e[1m first  last \e[0m\e[40m|\e[0m");
  my_putstr("\n\t\t\e[40m|\e[0m      \t\t\e[1;40m|\e[0m");
  my_putstr("\e[1m [y.x / y.x]\e[0m");
  my_putstr(" \e[40m|\e[0m");
  my_putstr("\n\t\t\e[40m ----------------------------- \e[0m\n");
}
