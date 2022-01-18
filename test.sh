#! /bin/bash

#make -C va fouiller dans mon dossier libft pour chercher le makefile
make -C libft 
#-L dit va chercher dans mon dossier libft pour la libra
#-l le petit l dit link sur mon fichier ft
# ca s'apelle ft parceque gcc sait que les librarires commencent toujours par lib
# -I. veut dire ya des .h dans le dossier dans lequel tu es

gcc -Wall -Werror -Wextra -Llibft -lft -I. -g parse.c main.c init_stacks.c stacks.c push.c
# TESTING THE INTPUT PART 
printf "\033[1;31mThis is the test  with : \033[0;32m 1 2 3\033[0m\n"
./a.out 1 2 3
printf "\033[1;31mThis is the test  with : \033[0;32m5 1 2 3 4 0\033[0m\n"
./a.out 5 1 2 3 4 0
printf "\033[1;31mThis is the test  with : \033[0;32m1\033[0m\n"
./a.out 1
printf "\033[1;31mThis is the test with : \033[0;32mnothing\033[0m\n"
./a.out 
printf "\033[1;31mThis is the test with : \033[0;32m5 4 3 2 1 5\033[0m\n"
./a.out 5 4 2 1 5
printf "\033[1;31mThis is the test with : \033[0;32m\"5 4 3 2 1\" in a sentence \033[0m\n"
./a.out "5 4 3 2 1"
printf "\033[1;31mThis is the test with : \033[0;32m\"5 4 3 2 1 0\" in a sentence \033[0m\n"
./a.out "5 4 3 2 1 0"
printf "\033[1;31mThis is the test with : \033[0;32m\"-2000 5 4 3 2 1 0\" in a sentence \033[0m\n"
./a.out "-2000 5 4 3 2 1 0"
printf "\033[1;31mThis is the test with : \033[0;32m\"-20000000000000 5 4 3 2 1 0\" in a sentence \033[0m\n"
./a.out "-20000000000000 5 4 3 2 1 0"
printf "\033[1;31mThis is the test with : \033[0;32m\"5 4 3 2 1 0 TOTO\" in a sentence \033[0m\n"
./a.out "5 4 3 2 1 0 TOTO"
printf "\033[1;31mThis is the test with : \033[0;32m5 4 3 2 1 0 TOTO not int a sentence\033[0m\n"
./a.out 5 4 3 2 1 0 TOTO
printf "\033[1;31mThis is the test with : \033[0;32m TOTO \033[0m\n"
./a.out TOTO
printf "\033[1;31mThis is the test with : \033[0;32m-22222222222222222222 5 4 3 2 1 0 \033[0m\n"
./a.out -22222222222222222222 5 4 3 2 1 0
printf "\033[1;31mThis is the test with : \033[0;32m5 4 3 2 1 0 -22222222222222222222\033[0m\n"
./a.out  5 4 3 2 1 0 -22222222222222222222
printf "\033[1;31mThis is the test with : \033[0;32m5 4 3 -22222222222222222222 2 1 0 \033[0m\n"
./a.out  5 4 3 -22222222222222222222 2 1 0 
printf "\033[1;31mThis is the test  with : \033[0;32m400 3 2 7 89 30009876 489032 12 -200 487909 -20000 0\033[0m\n"
./a.out 400 3 2 7 89 30009876 489032 12 -200 487909 -20000 0
printf "\033[1;31mThis is the test  with : \033[0;32m0 1 2 3 4 5 6 7 8 9 10\033[0m\n"
./a.out 0 1 2 3 4 5 6 7 8 9 10
