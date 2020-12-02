/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fportalo <fportalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:24:44 by fportalo          #+#    #+#             */
/*   Updated: 2020/12/01 10:52:34 by fportalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>

//para utilizar open
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

//para utilizar close
# include <unistd.h>

//po eso'
# include "gnl/get_next_line.h"
# include "libft/libft.h"

typedef struct mapstr {
	char	*res;
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	char	*sprite;
	char	*floor;
	char	*ceil;
	char	**map;
	int		rows;
	int		err;
	int x;
	int y;
} mapstr;


typedef struct mapclean {
	int		w;
	int		h;
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	char	*sprite;
	int		floor[3];
	int		ceil[3];
	char	**map;
} mapclean;


int		cub3d(int argc, char **argv);
int		check_ini_errors(int argc, char **argv);
int		check_extension(char *file, char *ext);
int		raw_info(char *file, mapstr *raw);
int		save_map_info(mapstr *raw, mapclean *map);
void	iniraw(mapstr *raw);
void	inimap(mapclean *map);
int		ft_nbrdigit(int i);
int		check_resolution(mapstr *raw, mapclean *map);
int		check_texture(mapstr *raw, mapclean *map);
int		check_north(mapstr *raw, mapclean *map);
int		check_floor_ceil(mapstr *raw, mapclean *map);
int		check_map(mapstr *raw, mapclean *map);


#endif
