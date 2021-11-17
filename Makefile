	# Library Name #
NAME	= so_long

	# Variables #
SRCS	= 	404_error.c \
			check_mappy.c \
			create_mappy.c \
			free_your_skills.c \
			ft_itoa.c \
			get_next_line.c \
			god_creates_peppa_pig.c \
			peppa_pig_birth.c \
			peppa_pig_death.c \
			peppa_pig_live.c \
			peppa_pig_and_her_connard_of_brother.c \
			peppa_pig_and_the_gouter.c \
			peppa_pig_stalker.c \
			peppa_pig_walk_right.c \
			peppa_pig_walk_left.c \
			peppa_pig_walk_up.c \
			peppa_pig_walk_down.c \
			peppa_pig_walk_with_bacons.c \
			peppa_pig_makes_foolishness.c \
			peppa_pig_to_school.c \
			peppa_pig_jump_to_the_hole.c \
			peppa_pig_and_la_decadence.c \
			peppa_pig_be_happy.c \
			so_long.c \
			utils.c \
			utils_2.c \
			way_to_school.c\
			way_to_butcher.c

INCLUDES = includes/so_long.h


	# Colors #
YELLOW		=	\e[38;5;226m
GREEN		=	\033[1;32m
RED_CAP		=	\033[1;31m
RED			=	\033[0;41m
BLUE		=   \033[0;34m
BLEU		=	\033[0;44m
CYAN		=   \033[0;36m
BLACK		=	\033[0;40m
VERT		=	\033[0;42m
SKY			=	\033[0;46m
WHITE		=	\033[0;107m
GREY		=	\033[7;49;90m
JAUNE		=	\033[0;43m
RESET		=	\e[0m

	# Objects #
OBJS	= ${SRCS:.c=.o}
OBJS	:= $(addprefix objs/,${OBJS})

	# Flags #
FL_MLX	=	 -ldl -lmlx -Lmlx -lm -lXext -lX11 -Imlx mlx/libmlx.a

	# Rules #
all:		${NAME}
			@printf "\033[0;95m<3 <3 $(RESET)"
			@printf "$(RED_CAP)Manu le petit canard$(RESET)"
			@printf "\033[0;95m <3 <3 \n$(RESET)"

$(NAME):	${OBJS} ${INCLUDES} ${INCLUDES_MLX}
			@make -C ./mlx
			gcc -g -Wall -Werror -Wextra -I includes ${OBJS} -o $(NAME) $(FL_MLX) 
			@printf "\n\n$(SKY)                                                                                                   $(RESET)\n"
			@printf "$(SKY)                                                                                                   $(RESET)\n"
			@printf "$(SKY)                                                                                                   $(RESET)\n"
			@printf "$(SKY)                  $(RESET)$(BLACK)          $(RESET)$(SKY)                                                                       $(RESET)\n"
			@printf "$(SKY)               $(RESET)$(BLACK)   $(RESET)$(WHITE)          $(RESET)$(BLACK)  $(RESET)$(SKY)                                                                     $(RESET)\n"
			@printf "$(SKY)             $(RESET)$(BLACK)  $(RESET)$(WHITE)   $(RESET)$(GREY)  $(RESET)$(WHITE)          $(RESET)$(BLACK)   $(RESET)$(SKY)                                                                  $(RESET)\n"
			@printf "$(SKY)           $(RESET)$(BLACK)  $(RESET)$(WHITE)               $(RESET)$(GREY)  $(RESET)$(WHITE)   $(RESET)$(BLACK)  $(RESET)$(SKY)                                                                $(RESET)\n"
			@printf "$(SKY)           $(RESET)$(BLACK)  $(RESET)$(GREY)  $(RESET)$(WHITE)                  $(RESET)$(BLACK)  $(RESET)$(SKY)                                                                $(RESET)\n"
			@printf "$(SKY)             $(RESET)$(BLACK)  $(RESET)$(GREY)  $(RESET)$(WHITE)              $(RESET)$(BLACK)  $(RESET)$(SKY)                                                                  $(RESET)\n"
			@printf "$(SKY)               $(RESET)$(BLACK)                $(RESET)$(SKY)                     $(RESET)$(BLACK)  $(RESET)$(SKY)                    $(RESET)$(BLACK)  $(RESET)$(SKY)                       $(RESET)\n"
			@printf "$(SKY)                                                  $(RESET)$(BLACK)  $(RESET)$(WHITE)  $(RESET)$(BLACK)  $(RESET)$(SKY)                $(RESET)$(BLACK)  $(RESET)$(WHITE)  $(RESET)$(BLACK)  $(RESET)$(SKY)                     $(RESET)\n"
			@printf "$(SKY)                                                  $(RESET)$(BLACK)  $(RESET)$(WHITE)    $(RESET)$(BLACK)                $(RESET)$(WHITE)    $(RESET)$(BLACK)  $(RESET)$(SKY)                     $(RESET)\n"
			@printf "$(SKY)                                                  $(RESET)$(BLACK)  $(RESET)$(WHITE)  $(RESET)$(BLACK)  $(RESET)$(BLEU)    $(RESET)$(WHITE)      $(RESET)$(BLEU)      $(RESET)$(BLACK)  $(RESET)$(WHITE)  $(RESET)$(BLACK)  $(RESET)$(SKY)                     $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)      $(RESET)$(WHITE)  $(RESET)$(BLEU)  $(RESET)$(WHITE)  $(RESET)$(BLEU)        $(RESET)$(BLACK)  $(RESET)$(SKY)                       $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)      $(RESET)$(WHITE)      $(RESET)$(BLEU)        $(RESET)$(BLACK)  $(RESET)$(SKY)                       $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)      $(RESET)$(WHITE)  $(RESET)$(BLEU)  $(RESET)$(WHITE)  $(RESET)$(BLEU)        $(RESET)$(BLACK)  $(RESET)$(SKY)                       $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)    $(RESET)$(BLACK)  $(RESET)$(BLEU)      $(RESET)$(BLACK)  $(RESET)$(BLEU)      $(RESET)$(BLACK)  $(RESET)$(SKY)                       $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)                    $(RESET)$(BLACK)  $(RESET)$(SKY)                       $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)    $(RESET)$(GREY)  $(RESET)$(BLACK)      $(RESET)$(GREY)  $(RESET)$(BLEU)    $(RESET)$(BLACK)      $(RESET)$(SKY)                     $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)    $(RESET)$(GREY)          $(RESET)$(BLEU)  $(RESET)$(BLACK)  $(RESET)$(RED)      $(RESET)$(BLACK)  $(RESET)$(SKY)                   $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)    $(RESET)$(BLEU)  $(RESET)$(GREY)          $(RESET)$(BLACK)  $(RESET)$(RED)  $(RESET)$(WHITE)      $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(SKY)                 $(RESET)\n"
			@printf "$(SKY)                                                        $(RESET)$(BLACK)            $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)      $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(SKY)               $(RESET)\n"
			@printf "$(SKY)                                                      $(RESET)$(BLACK)  $(RESET)$(BLEU)        $(RESET)$(BLACK)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLEU)      $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(SKY)             $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)  $(RESET)$(BLACK)  $(RESET)$(BLEU)    $(RESET)$(WHITE)  $(RESET)$(BLACK)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLEU)  $(RESET)$(WHITE)  $(RESET)$(BLEU)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(SKY)             $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(BLEU)  $(RESET)$(BLACK)  $(RESET)$(BLEU)      $(RESET)$(BLACK)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLEU)      $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(SKY)             $(RESET)\n"
			@printf "$(SKY)                                                    $(RESET)$(BLACK)  $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)      $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(SKY)               $(RESET)\n"
			@printf "$(SKY)               $(RESET)$(VERT)  $(RESET)$(SKY)       $(RESET)$(VERT)  $(RESET)$(SKY)       $(RESET)$(VERT)  $(RESET)$(SKY)                   $(RESET)$(BLACK)    $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(RED)  $(RESET)$(WHITE)  $(RESET)$(BLACK)  $(RESET)$(RED)  $(RESET)$(WHITE)      $(RESET)$(RED)  $(RESET)$(BLACK)  $(RESET)$(SKY)                 $(RESET)\n"
			@printf "$(SKY)             $(RESET)$(VERT)      $(RESET)$(SKY)   $(RESET)$(VERT)      $(RESET)$(SKY)   $(RESET)$(VERT)      $(RESET)$(SKY)                   $(RESET)$(BLACK)  $(RESET)$(BLEU)            $(RESET)$(BLACK)  $(RESET)$(RED)      $(RESET)$(BLACK)  $(RESET)$(SKY)                   $(RESET)\n"
			@printf "$(SKY)               $(RESET)$(VERT)  $(RESET)$(SKY)       $(RESET)$(VERT)  $(RESET)$(SKY)       $(RESET)$(VERT)  $(RESET)$(SKY)                     $(RESET)$(BLACK)  $(RESET)$(RED)    $(RESET)$(BLACK)    $(RESET)$(RED)    $(RESET)$(BLACK)        $(RESET)$(SKY)                     $(RESET)\n"
			@printf "$(SKY)               $(RESET)$(VERT)  $(RESET)$(SKY)       $(RESET)$(VERT)  $(RESET)$(SKY)       $(RESET)$(VERT)  $(RESET)$(SKY)                     $(RESET)$(BLACK)      $(RESET)$(SKY)    $(RESET)$(BLACK)      $(RESET)$(SKY)                           $(RESET)\n\n"
			@printf "$(BLUE)L'essence de l'homme est d'être virtuel, parce qu'il ne peut se satisfaire de sa réalité passagère.\n\n$(RESET)"
			@printf "$(GREEN)La vie passe, la moulinette trepasse !\n\n$(RESET)"


objs/%.o:		srcs/%.c
					@mkdir -p objs
					@gcc -g -Wall -Werror -Wextra -lmlx -lbass -I includes -o $@ -c $< 

norme:		
			@norminette srcs/*
			@norminette includes/*
			@printf "$(YELLOW)\nLa normalité est une expérience plus extrême que ce que les gens veulent communément admettre.\n$(RESET)"
			@printf "$(YELLOW)============$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)La vie passe, la norminette trepasse !\n$(RESET)"

clean:
			@make -C ./mlx clean
			rm -f ${OBJS}
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)===$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"
fclean:
			@make -C ./mlx clean
			rm -f ${OBJS}
			rm -f ${NAME}
			rm -rf objs
			@printf "$(YELLOW)\nAu fond, est-ce que ranger ça ne revient pas un peu à foutre le bordel dans son désordre ? \n$(RESET)"
			@printf "$(YELLOW)===$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			@printf "$(GREEN)Que la paix regne sur ton foyer\n\n$(RESET)"

re:			fclean all
			@printf "$(YELLOW)\nAimer, désirer, c’est aussi souffrir, et être prêt à recommencer... \n$(RESET)"
			@printf "\e[38;5;227m============$(RESET)"
			@printf "\e[38;5;228m============$(RESET)"
			@printf "\e[38;5;229m============$(RESET)"
			@printf "\e[38;5;230m============$(RESET)"
			@printf "\e[38;5;231m============\n$(RESET)"
			
.PHONY: 	bonus all norme clean fclean re
