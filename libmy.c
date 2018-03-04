/*
** libmy.c for libmy.c in /Users/qu_j/Crusader
** 
** Made by QU Juliette
** Login   <qu_j@etna-alternance.net>
** 
** Started on  Mon Apr 25 13:08:05 2016 QU Juliette
** Last update Tue May  3 14:45:23 2016 QU Juliette
*/

#include "header.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    i = i + 1;
  return (i);
}

void	my_put_nbr(int n)
{
  int	i;
  int	nb;
  int	ok;

  i = 1;
  nb = n;
  ok = 0;
  if (nb == -2147483648)
    my_putstr("-2147483648");
  else if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
      n = n * (-1);
    }
  while (nb / i >= 10)
    i = i * 10;
  while ((i > 0) && (nb != -2147483648))
    {
      nb = (n / i) % 10;
      ok = nb * i;
      n = n - ok;
      my_putchar(nb + 48);
      i = i / 10;
    }
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	a;

  a = 0;
  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] > s2[i])
        return (1);
      else if (s1[i] < s2[i])
        return (-1);
      i = i + 1;
    }
  return (a);
}
