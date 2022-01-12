#! /bin/bash

#make -C va fouiller dans mon dossier libft pour chercher le makefile
make -C libft 
#-L dit va chercher dans mon dossier libft pour la libra
#-l le petit l dit link sur mon fichier ft
# ca s'apelle ft parceque gcc sait que les librarires commencent toujours par lib
# -I. veut dire ya des .h dans le dossier dans lequel tu es
gcc -Wall -Werror -Wextra -Llibft -lft -I. parse.c bubblesort.c init_arrays.c

printf "\033[1;31mThis is the test  with 400 555 5 4 3 2 1 0\033[0m\n"
./a.out 400 555 5 4 3 2 1 0
printf "\033[1;31mThis is the test  with 1\033[0m\n"
./a.out 1
printf "\033[1;31mThis is the test with nothing\033[0m\n"
./a.out 
printf "\033[1;31mThis is the test with 5 4 3 2 1 5\033[0m\n"
./a.out 5 4 2 1 5
printf "\033[1;31mThis is the test with 5 4 3 2 1 0 in a sentence \033[0m\n"
./a.out "5 4 3 2 1 0"
printf "\033[1;31mThis is the test with 5 4 3 2 1 0 TOTO in a sentence \033[0m\n"
./a.out "5 4 3 2 1 0 TOTO"
printf "\033[1;31mThis is the test with 5 4 3 2 1 0 TOTO not int a sentence\033[0m\n"
./a.out 5 4 3 2 1 0 TOTO
printf "\033[1;31mThis is the test with -22222222222222222222 5 4 3 2 1 0 \033[0m\n"
./a.out -22222222222222222222 5 4 3 2 1 0
printf "\033[1;31mThis is the test with  5 4 3 2 1 0 -22222222222222222222\033[0m\n"
./a.out  5 4 3 2 1 0 -22222222222222222222
printf "\033[1;31mThis is the test with  5 4 3 -22222222222222222222 2 1 0 \033[0m\n"
./a.out  5 4 3 -22222222222222222222 2 1 0 
printf "\033[1;31mThis is the test  with 400 3 2 7 89 30009876 489032 12 -200 487909 -20000 0\033[0m\n"
./a.out 400 3 2 7 89 30009876 489032 12 -200 487909 -20000
