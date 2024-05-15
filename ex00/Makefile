NAME = megaphone

CC = g++ 

CFLAGS = -Wall -Wextra -Werror
# CFLAGS += -g

SRCS	:=	megaphone.cpp \

OBJS	:=	${SRCS:.cpp=.o}

RM    =    rm -rf

all:${NAME}

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re:fclean all

norm:
	norminette | grep -v "OK" || true

.PHONY:
	all clean fclean re 
