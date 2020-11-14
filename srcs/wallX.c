#include "../includes/main.h"

void get_wallX(t_game *game,int *side,double *perpWallDist)
{

	//calculate value of wallX
	if (side == 0)
		(game->new_val.wallX) = game->val.pos.y + (*perpWallDist) * game->val.ray_dir.y;
	else
		(game->new_val.wallX) = game->val.pos.x + (*perpWallDist) * game->val.ray_dir.x;
	(game->new_val.wallX) -= floor(game->new_val.wallX);
}
