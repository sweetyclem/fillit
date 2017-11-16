/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpirlot <cpirlot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 09:36:43 by cpirlot           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/11/16 17:19:42 by yvillepo         ###   ########.fr       */
=======
/*   Updated: 2017/11/16 17:36:44 by cpirlot          ###   ########.fr       */
>>>>>>> 814a5424feb0a270ef4d8ccd9c99b03e9ea9908d
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_point
{
	int		x;
	int		y;
}				t_point;

typedef struct	s_tetriminos
{
	t_point				two;
	t_point				three;
	t_point				four;
	char				letter;
	struct s_tetriminos	*next;
}				t_tetri;

typedef struct	s_map
{
	int			size;
	char		**map;
}				t_map;

void			read_input(const char *file, t_tetri *tetri_array);
t_tetri			get_tetri_pos(char *block, t_tetri tetri);
int				block_valid(char *block);
void			error();
void			close_file(int fd);
void			close_error(int fd);
void			tetri_list_add(t_tetri **begin_list, t_tetri *tetri);
t_tetri			new_tetri(void);

#endif
