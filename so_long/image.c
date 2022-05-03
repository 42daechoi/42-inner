/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 00:35:04 by daechoi           #+#    #+#             */
/*   Updated: 2022/05/03 18:36:12 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	image_put(t_gameset g, t_imgset img)
{
	int	h;
	int	w;

	h = 0;
	while (h < g.map_height)
	{
		w = 0;
		while (w < g.map_width)
		{
			if (g.map_line[h * g.map_width + w] == '1')
				mlx_put_image_to_window(g.mlx, g.win, img.wall, w * 64, h * 64);
			else if (g.map_line[h * g.map_width + w] == 'C')
				mlx_put_image_to_window(g.mlx, g.win, img.coll, w * 64, h * 64);
			else if (g.map_line[h * g.map_width + w] == 'P')
				mlx_put_image_to_window(g.mlx, g.win, img.player, w * 64, h * 64);
			else if (g.map_line[h * g.map_width + w] == 'E')
				mlx_put_image_to_window(g.mlx, g.win, img.exit, w * 64, h * 64);
			else if (g.map_line[h * g.map_width + w] == '0')
				mlx_put_image_to_window(g.mlx, g.win, img.tile, w * 64, h * 64);
			w++;
		}
		h++;
	}
}

void	image_init(t_gameset g, t_imgset *imgset)
{
	int	img_size;
	
	imgset->wall = mlx_xpm_file_to_image(g.mlx, "./wall.xpm", &img_size, &img_size);
	imgset->tile = mlx_xpm_file_to_image(g.mlx, "./tile.xpm", &img_size, &img_size);
	imgset->player = mlx_xpm_file_to_image(g.mlx, "./player.xpm", &img_size, &img_size);
	imgset->coll = mlx_xpm_file_to_image(g.mlx, "./collectible.xpm", &img_size, &img_size);
	imgset->exit = mlx_xpm_file_to_image(g.mlx, "./exit.xpm", &img_size, &img_size);
}

void	image_rendering(t_gameset g)
{
	int 		img_size;
	t_imgset	imgset;

	image_init(g, &imgset);
	image_put(g, imgset);
}