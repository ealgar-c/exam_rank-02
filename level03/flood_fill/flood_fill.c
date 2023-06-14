  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void flood_fill(char **tab, t_point size, t_point begin)
{
	int x = begin.x;
	int y = begin.y;
	char c = tab[y][x];
	t_point new_begin;

	tab[y][x] = 'F';
	if (y - 1 >= 0 && tab[y - 1][x] == c)
	{
		 new_begin = {x, y - 1};
		flood_fill(tab, size, new_begin);
	}
	if (y + 1 < size.y && tab[y + 1][x] == c)
	{
		new_begin = {x, y + 1};
		flood_fill(tab, size, new_begin);
	}
	if (x - 1 >= 0 && tab[y][x - 1] == c)
	{
		new_begin = {x - 1, y};
		flood_fill(tab, size, new_begin);
	}
	if (x + 1 < size.x && tab[y][x + 1] == c)
	{
		new_begin = {x + 1, y};
		flood_fill(tab, size, new_begin);
	}
}

