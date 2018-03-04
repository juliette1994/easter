/*
** header.h for header.h in /Users/qu_j/Crusader/bayle_n
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Fri Apr 29 15:55:46 2016 QU Juliette
** Last update Tue May  3 14:29:40 2016 QU Juliette
*/

#ifndef _HEADER_H_
# define _HEADER_H_
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define LISTE 200
# define G 500
# define D 8
# define L 7
# define C 6
# define Ll 4
# define Cl 8

typedef struct	s_first
{
  int	end_x;
  int	end_y;
  int	taille;
  int	no;
  char	**tab;
  char	**g;
  int	d;
  int	check;
  int	size;
  int	ok;
  int	v;
  int	p;
}		t_depart;

typedef int	(*t_funct)(int j, int i, int p, t_depart *go);

t_depart	*init_struct(void);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);
void	my_put_nbr(int n);
void	pt_sur_fct(t_funct var[D]);
char	**tab_2_grille(char grille[G]);
void	boucle_verification(int i, int j, t_depart *go, t_funct var[D]);
void	verification(char **tab, char **g, t_funct var[D], t_depart *go);
void	rc(char liste[LISTE], char grille[G], t_funct var[D], t_depart *go);
void	tab_2_liste(char liste[LISTE], char **g, t_funct var[D], t_depart *go);
void	affichage(char *tab, int i, int j, t_depart *go);
void	aff1(void);
void	aff2(void);
void	init2(t_depart *go);
void	init1(t_depart *go, char **tab, char **g);
int	en_haut(int j, int i, int p, t_depart *go);
int	en_bas(int j, int i, int p, t_depart *go);
int	en_droite(int j, int i, int p, t_depart *go);
int	en_b_droite(int j, int i, int p, t_depart *go);
int	en_h_droite(int j, int i, int p, t_depart *go);
int	en_b_gauche(int j, int i, int p, t_depart *go);
int	en_gauche(int j, int i, int p, t_depart *go);
int	en_h_gauche(int j, int i, int p, t_depart *go);

#endif
