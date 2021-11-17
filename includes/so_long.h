/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:51:24 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:50:16 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define BUFFER_SIZE 1
# define BER ".ber"

# define ESC 65307
# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define ESP 32

# define ERR_MSG "Error\n"
# define ERR_L_ARG "I think there is something missing... Your self-esteem?\n"
# define ERR_H_ARG "One can never have too many arguments! In fact, it is!\n"
# define ERR_PATH "Error\nBut... but... where is our cute .be(a)r?\n"
# define ERR_FILE "Error\nBad boys, bad file!\n"
# define ERR_DIR "Error\nDid you try to scam me with a file? You asshole.\n"
# define ERR_WALL "Error\nMen build too many bridges and not enough walls\n"
# define ERR_MANY_LINES "Error\nWOOOOW, you've a BIG height under your trousers\n"
# define ERR_MANY_LEN "Error\nWOOOOW, you've a BIG width under your trousers\n"
# define ERR_CHAR "Error\nAn intruder is among us! Who is the guilty?\n"
# define ERR_NO_C "Error\nCollect moments, not things...\n"
# define ERR_NO_E "Error\nThere is no exit from the circle of one's beliefs\n"
# define ERR_NO_P "Error\nThere's no game without a hero, like you... ❤️\n"
# define ERR_LEN "Error\nHere, we look at life more in terms of rectangles.\n"

# define BACKGROUND "./textures/background.xpm"
# define BACON "./textures/bacon.xpm"
# define BUISSON_L "./textures/buisson_left.xpm"
# define BUISSON_R "./textures/buisson_right.xpm"
# define BUTCHER_L "./textures/butcher_left.xpm"
# define BUTCHER_R "./textures/butcher_right.xpm"
# define GEORGE "./textures/george.xpm"
# define SMILE_GEORGE "./textures/smile_george.xpm"
# define PEPPA_L "./textures/peppa_left.xpm"
# define PEPPA_R "./textures/peppa_right.xpm"
# define SMILE_L "./textures/peppa_smile_left.xpm"
# define SMILE_R "./textures/peppa_smile_right.xpm"
# define SKY "./textures/sky.xpm"
# define CLOUD_A "./textures/sky_cloud_1.xpm"
# define CLOUD_B "./textures/sky_cloud_2.xpm"
# define SUN "./textures/sky_sun.xpm"
# define HOUSE "./textures/house.xpm"
# define MUD "./textures/mud.xpm"
# define PAS_MUD "./textures/pas_mud.xpm"
# define PEPPA_MUD_L "./textures/peppa_mud_left.xpm"
# define PEPPA_MUD_D "./textures/peppa_mud_right.xpm"
# define PEPPA_SALE_L "./textures/peppa_sale_left.xpm"
# define PEPPA_SALE_D "./textures/peppa_sale_right.xpm"
# define INTRO "./textures/intro.xpm"
# define CREDITS "./textures/credits.xpm"
# define GOOD_GAME "./textures/good_game.xpm"
# define GAME_OVER_1 "./textures/game_over_1.xpm"
# define GAME_OVER_2 "./textures/game_over_2.xpm"
# define GAME_OVER_3 "./textures/game_over_3.xpm"
# define GAME_OVER_4 "./textures/game_over_4.xpm"

# include <string.h>
# include <stdio.h>
# include <stdlib.h> 
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../mlx/mlx.h"

typedef struct s_map
{
	char	**mappy;
	int		lines;
	int		len;
	int		pos_x;
	int		pos_y;
	int		wall;
	int		space;
	int		player;
	int		pos_x_play;
	int		pos_y_play;
	int		eye_peppa;
	int		super_peppa_sale;
	int		eye_butcher;
	int		exit;
	int		collect;
	int		enemy;
}	t_map;

typedef struct s_img
{
	void	*background;
	void	*bacon;
	void	*buisson_l;
	void	*buisson_d;
	void	*butcher_l;
	void	*butcher_d;
	void	*george;
	void	*smile_george;
	void	*peppa_l;
	void	*peppa_r;
	void	*smile_l;
	void	*smile_r;
	void	*sky;
	void	*cloud_a;
	void	*cloud_b;
	void	*sun;
	void	*house;
	void	*mud;
	void	*pas_mud;
	void	*peppa_mud_l;
	void	*peppa_mud_d;
	void	*peppa_sale_l;
	void	*peppa_sale_d;
	void	*intro;
	void	*credits;
	void	*game_over_1;
	void	*game_over_2;
	void	*game_over_3;
	void	*game_over_4;
	void	*good_game;
	int		pos_x;
	int		pos_y;
	int		img_width;
	int		img_height;
}	t_img;

typedef struct s_win
{
	int		win_width;
	int		win_height;
}	t_win;

typedef struct s_game
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		moves;
	int		intro_or_not;
	t_img	img;
	t_win	win;
	t_map	*map;
}	t_game;

/*		SO_LONG.C			*/

void		the_card_of_treasure(char **argv, t_map *map, t_game *game);
void		inspection_douaniere_of_map(char **argv, t_map *map);

/*		FREE_YOUR_SKILLS.C	*/

void		free_yes_free(t_map *map);
void		destroy_peppa_and_family(t_game *game);
void		destroy_pics(t_game *game);
void		destroy_your_life(t_game *game);

/*		404_ERROR.C			*/

void		ft_free_your_mum(t_map *map, int a);
void		carrefour_of_path(int a, t_map *map);
void		check_error_arg(int argc);

/*		CREATE_MAPPY.C		*/

void		ft_tabcalloc(size_t size, t_map *map);
void		read_between_the_lines(t_map *map, int fd, char **argv);
void		print_mappy_for_happy(t_map *map, int fd, char **argv);
int			check_your_body(char c);

/*		CHECK_MAPPY.C		*/

void		is_there_a_cute_ber_here(char *str, t_map *map);
void		first_walls_first(t_map *map);
void		last_walls_last(t_map *map);
void		check_objects(int power_switch, int a, int b, t_map *map);
void		between_walls_between(t_map *map);

/*		GET_NEXT_LINE.C		*/

char		*ft_pushinyourline(char *save, t_map *map);
int			ft_secu_av_tout(char *save);
int			ft_n_ta_race(char *str);
char		*ft_savebryan(char *save);
int			get_next_line(int fd, char **line, t_map *map);

/*		PEPPA_PIG_TO_SCHOOL		*/

void		map_to_reality(t_game *game, int pos_x, int pos_y);
void		the_beauty_of_nature_without_peppa(t_game *game, int x, int y);
void		hunter_follows_peppa_to_school(t_game *game, int x);

/*		PEPPA_PIG_BIRTH.C		*/

void		back_to_birth_map(t_map *map);
void		back_to_birth_game(t_game *game);
void		back_to_birth_img(t_game *game);
void		back_to_birth_transition(t_game *game);
void		peppa_pig_is_delivered(void);

/*		PEPPA_PIG_JUMP_TO_THE_HOLE.C	*/

void		peppa_pig_is_dumm(void);
void		peppa_pig_is_ugly(void);
void		peppa_pig_is_a_future_bad_girl(void);
void		peppa_pig_is_a_future_astronaut(void);
void		peppa_pig_is_a_future_podologue(void);

/*		GOD_CREATES_PEPPA_PIG.C	*/

void		thank_you_my_friends(t_game *game);
void		introduction_of_life_of_peppa_pig(t_game *game);

/*		PEPPA_PIG_LIVE.C	*/

int			game_become_reality(t_game *game);
int			birth_of_peppa_pig(t_map *map, t_game *game);
int			peppa_use_her_feet(int key_code, t_game *game);

/*		PEPPA_PIG_BE_HAPPY.C	*/

void		peppa_pig_plays_with_friends(void);
void		peppa_pig_plays_football(void);
void		peppa_pig_plays_a_la_montagne(void);
void		peppa_pig_plays_mikado(void);
void		peppa_pig_plays_ps4(void);

/*		PEPPA_PIG_AND_HER_CONNARD_OF_BROTHER.C	*/

void		snack_of_george_is_coming(t_game *game);
int			time_to_play_with_george(t_game *game, int direction);

/*		PEPPA_PIG_STALKER.C	*/

void		keen_gaze_of_butcher(t_game *game, int x, int y);
void		desire_to_kill_peppa(t_game *game, int x, int y);
void		butcher_like_dexter(t_game *game, int x, int y);
void		butcher_stalking(t_game *game);

/*		PEPPA_PIG_WALK_WITH_BACONS.C	*/

void		fried_bacon_to_up(t_game *game);
void		caramalized_bacon_up_like_gros_degueu(t_game *game);
void		fried_bacon_to_down(t_game *game);
void		caramalized_bacon_down_like_gros_degueu(t_game *game);
void		vive_la_gadou(void);

/*		PEPPA_PIG_WALK_RIGHT.C	*/

void		peppa_walks_right(t_game *game);
void		to_right_for_bacons(t_game *game);
void		to_right_to_be_sale(t_game *game);
void		to_right_to_be_continued_sale(t_game *game);
void		peppa_is_rightly_a_good_pig_girl(t_game *game);

/*		PEPPA_PIG_WALK_LEFT.C	*/

void		peppa_walks_left(t_game *game);
void		to_left_for_bacons(t_game *game);
void		to_left_to_be_sale(t_game *game);
void		to_left_to_be_continued_sale(t_game *game);
void		peppa_is_leftly_a_good_pig_girl(t_game *game);

/*		PEPPA_PIG_WALK_UP.C	*/

void		peppa_walks_up(t_game *game);
void		to_up_for_bacons(t_game *game);
void		to_up_to_be_sale(t_game *game);
void		to_up_to_be_continued_sale(t_game *game);
void		peppa_is_upply_a_good_pig_girl(t_game *game);

/*		PEPPA_PIG_WALK_DOWN.C	*/

void		peppa_walks_down(t_game *game);
void		to_down_for_bacons(t_game *game);
void		to_down_to_be_sale(t_game *game);
void		to_down_to_be_continued_sale(t_game *game);
void		peppa_is_downly_a_good_pig_girl(t_game *game);

/*		PEPPA_PIG_MAKES_FOOLISHNESS.C	*/

void		why_str_are_on_the_sky(t_game *game, int pos_img_x, int pos_map_x);
void		there_is_something_in_the_sky(t_game *game);
void		peppa_counts_her_foolishness(t_game *game);

/*		PEPPA_PIG_DEATH.C	*/

void		head_of_peppa_on_the_table(t_game *game);
int			suicide_of_peppa_pig(t_game *game);
void		peppa_becomes_bacon(t_game *game);

/*		PEPPA_PIG_THE_DELINQUANTE.C		*/

void		peppa_pig_the_delinquante(void);
void		peppa_pig_satanique(void);
void		peppa_pig_red_lucifer(void);
void		peppa_pig_is_the_demon_of_minuit(void);
void		peppa_pig_is_in_hell(void);

/*		PEPPA_PIG_AND_THE_GOUTER.C	*/

void		peppa_fucks_and_loves_bacon(t_game *game);
void		peppa_good_job(t_game *game);

/*		WAY_TO_SCHOOL.C		*/

void		way_to_school(t_game *game);
void		way_to_background(t_game *game);
void		way_to_people(t_game *game);
void		way_to_mirror_self(t_game *game);
void		way_to_screen(t_game *game);

/*		WAY_TO_BUTCHER.C		*/

void		way_to_suicide(t_game *game);
void		way_to_blood(t_game *game);
void		way_to_sky(t_game *game);

/*		UTILS.C				*/

void		ft_putchar(char c, int fd);
int			ft_strlen(char *str);
void		ft_putnbr(int nb, int fd);
void		ft_putstr(char *str, int fd);
int			ft_nbrlen(int n);

/*		UTILS_2.C			*/

char		*ft_strjoin(char *s1, char *s2);
char		*ft_strcalloc(size_t size);
void		*ft_memcpy(void *dest, const void *src, size_t count);

/*		FT_ITOA.C			*/

char		ft_check(long int nb, unsigned int len, char *str);
char		*ft_itoa(int n);

#endif
