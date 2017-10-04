#include <unistd.h>

void	ft_putstr(char *str)
{
  int i;
 
  i = 0;
  while (str[i] != '\0')
    {
      write(1, &str[i], 1);
      i++;
    }
}

//{s,t,r,i,n,g,\0}

int main()
{
  ft_putstr("string");
  return (0);
}
