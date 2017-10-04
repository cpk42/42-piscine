#include <stdio.h>
#include <unistd.h>
void print (int sudoku[9][9])
{
  int i;
  int j;

  i = 0;
  while (i < 9)
    {
      j = 0;
      while (j < 9)
	{
	  printf("%2d", sudoku[i][j]);
	  j++;
	}
      printf("\n");
      i++;
    }
}

void loops(int s[9][9], int depth)
{
  int x = depth / 9;
  int y = depth % 9; 
  int n_x = (x / 3) * 3;
  int n_y = (y / 3) * 3;
  int j;
  int k;
  int p[10] = {0};
   
  if(depth==81)
    print(s);
  else if(s[x][y] != 0)
    {
      loops(s, depth + 1);
    }
  else
    {
      j = 0;
      while(j<9)
	{
	  p[s[x][j]]=1;
	  p[s[j][y]]=1;
	  p[s[n_x + j / 3][n_y + j % 3]]=1;
	  j++;
	}
      j = 1;
      while(j<10)
	{
	  if(p[j]==0)
	    {
	      s[x][y]=j;
	      loops(s, depth+1);
	      s[x][y]=0;
	    }
	  j++;
	}
    }
}

void    grid(char **argv, int arr[9][9])
{
  int x;
  int y;

  x = 1;
  while (x < 10)
    {
      y = 0;
      while (y < 9)
	{
	  if (argv[x][y] == '.')
	    arr[x - 1][y] = 0;
	  else
	    arr[x - 1][y] = argv[x][y] - '0';
	  y++;
	}
      x++;
    }
}

int main(int argc, char **argv)
{
  int s[9][9];
  int i;
  int j;

  if (argc != 10)
    write(1, "Error\n", 6);
  else
    {
      grid(argv, s);
      loops(s, 0);
    }
  return (0);
}
