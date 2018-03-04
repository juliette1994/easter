/*
** main.c for main.c in /Users/qu_j/Crusader
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Mon Apr 25 12:56:22 2016 QU Juliette
** Last update Tue May  3 14:38:07 2016 QU Juliette
*/

#include "header.h"

int	check_open(int file)
{
  if (file == -1)
    return (0);
  return (1);
}

int	check_read(int caractere)
{
  if (caractere == -1)
    return (0);
  return (1);
}

void	files(char *argv[])
{
  int	file;
  int	caractere;
  char	liste[LISTE];
  char	grille[G];
  t_funct	var[D];
  t_depart	*go;

  pt_sur_fct(var);
  go = init_struct();
  file = open(argv[1], O_RDONLY, 0);
  check_open(file);
  caractere = read(file, (char*)liste, LISTE);
  check_read(caractere);
  while (caractere > 0)
    caractere = read(file, (char*)liste, sizeof(liste));
  close(file);
  file = open(argv[2], O_RDONLY, 0);
  check_open(file);
  caractere = read(file, (char*)grille, GRILLE);
  check_read(caractere);
  while (caractere > 0)
    caractere = read(file, (char*)grille, sizeof(grille));
  close(file);
  aff1();
  rc(liste, grille, var, go);
}

int	main(int argc, char *argv[])
{
  my_putstr("\033c");
  if (argc == 3 && my_strcmp(argv[1], "Liste.txt") == 0
      && my_strcmp(argv[2], "Grille.txt") == 0)
    files(argv);
  else
    {
      my_putstr("\n    \e[1;5;91mNot enough or too much arguments: ");
      my_putstr("[./crusader] [Liste.txt] [Grille.txt]\e[0m\n\n");
    }
  return (0);
}
