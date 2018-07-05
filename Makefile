##
## EPITECH PROJECT, 2018
## str
## File description:
## Makefile
##

CC		=	clang

NAME		=	libstr.a

SRCDIR		=	src
OBJDIR		=	build

FILES		=	internal_lstr_concat_helpers		\
			internal_lstr_match_helpers		\
			internal_lstr_split_helpers		\
			lstr_append				\
			lstr_capitalize				\
			lstr_concat				\
			lstr_ends_with				\
			lstr_epur				\
			lstr_equals				\
			lstr_includes				\
			lstr_index_of				\
			lstr_match				\
			lstr_nb_occur				\
			lstr_prepend				\
			lstr_replace				\
			lstr_reverse				\
			lstr_slice				\
			lstr_split				\
			lstr_starts_with			\
			lstr_substr				\
			lstr_test				\
			lstr_to_lower_case			\
			lstr_to_upper_case			\
			lstr_trim

SORTEDFILES	=	$(sort $(FILES))
SRCS		=	$(SORTEDFILES:%=$(SRCDIR)/%.c)
OBJS		=	$(SORTEDFILES:%=$(OBJDIR)/%.o)

CFLAGS 		=	-I../vec/src -W -Wall -Wextra -Wunused -Wuninitialized
LDFLAGS		=

DIRS		=

SORTEDDIRS	=	$(sort $(DIRS))
SRCDIRS		=	$(SORTEDDIRS:%=$(SRCDIR)/%)
OBJDIRS		=	$(SORTEDDIRS:%=$(OBJDIR)/%)

REDDARK 	=       \033[31;2m
RED     	=       \033[31;1m
GREEN   	=       \033[32;1m
YEL     	=       \033[33;1m
BLUE    	=       \033[34;1m
PINK    	=       \033[35;1m
CYAN    	=       \033[36;1m
RES     	=       \033[0m

all:	$(NAME)

$(NAME):	$(OBJDIR) $(OBJDIRS) $(OBJS)
		@echo -e "[$(RED)LINKING$(RES)] $(YEL)$(OBJDIR)/*.o$(RES) $(BLUE)=>$(RES) $(YEL)$(NAME)$(RES)"
		@ar rc $(NAME) $(OBJS) $(LDFLAGS)

clean:
	@rm -rf $(OBJDIR)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

$(OBJDIR)/%.o:	$(SRCDIR)/%.c
	@echo -e "[$(RED)COMPILE$(RES)] $(YEL)$<$(RES) $(BLUE)=>$(RES) $(YEL)$@$(RES)"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	@echo -e "[$(RED)MKDIR$(RES)] $(YEL)build$(RES)"
	@mkdir -p $@

$(OBJDIR)/%:
	@echo -e "[$(RED)MKDIR$(RES)] $(YEL)$@$(RES)"
	@mkdir -p $@
