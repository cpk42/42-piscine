#include <unistd.h>

void	ft_putchar(char n)
{
  write(1, &n, 1);
}

void	ft_putnbr(int nbr)
{
  if (nbr < 0)
    {
      ft_putchar('-');
      ft_putnbr(-nbr);
    }
  if (nbr > 9)
    {
      ft_putnbr(nbr / 10);
      ft_putnbr(nbr % 10);
    }
  if (nbr <= 9)
    {
      ft_putchar(nbr + 48);
    }
}

int main()
{					
  ft_putnbr(123);
  return (0);
}
