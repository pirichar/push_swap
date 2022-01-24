#! /bin/bash

#make -C va fouiller dans mon dossier libft pour chercher le makefile
make -C libft 
#-L dit va chercher dans mon dossier libft pour la libra
#-l le petit l dit link sur mon fichier ft
# ca s'apelle ft parceque gcc sait que les librarires commencent toujours par lib
# -I. veut dire ya des .h dans le dossier dans lequel tu es

gcc -Wall -Werror -Wextra -Llibft -lft -I. -g parse.c main.c init_stacks.c stacks.c push.c swap.c rotate.c rev_rotate.c sorts.c s_sort.c
# TESTING THE INTPUT PART 

#test for 2
printf "\n\n\e[1;94m------TESTING FOR 2 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 2000 1000\033[0m\n"
./a.out 2000 1000
printf "\033[1;31mThis is the test  with : \033[0;32m 1000 2000\033[0m\n"
./a.out 1000 2000

# TEST FOR 3
printf "\n\n\e[1;94m------TESTING FOR 3 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 3 1 2\033[0m\n"
./a.out 3 1 2
printf "\033[1;31mThis is the test  with : \033[0;32m 3 2 1\033[0m\n"
./a.out 3 2 1
printf "\033[1;31mThis is the test  with : \033[0;32m 2 3 1\033[0m\n"
./a.out 2 3 1
printf "\033[1;31mThis is the test  with : \033[0;32m 2 1 3\033[0m\n"
./a.out 2 1 3
printf "\033[1;31mThis is the test  with : \033[0;32m 1 2 3\033[0m\n"
./a.out 1 2 3
printf "\033[1;31mThis is the test  with : \033[0;32m 1 3 2\033[0m\n"
./a.out 1 3 2

# TEST FOR 4
printf "\n\n\e[1;94m------TESTING FOR 4 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 1 2 3 4\033[0m\n"
./a.out 1 2 3 4
printf "\033[1;31mThis is the test  with : \033[0;32m 1 2 4 3\033[0m\n"
./a.out 1 2 4 3
printf "\033[1;31mThis is the test  with : \033[0;32m 1 3 2 4\033[0m\n"
./a.out 1 3 2 4
printf "\033[1;31mThis is the test  with : \033[0;32m 1 3 4 2\033[0m\n"
./a.out 1 3 4 2
printf "\033[1;31mThis is the test  with : \033[0;32m 1 4 2 3\033[0m\n"
./a.out 1 4 2 3
printf "\033[1;31mThis is the test  with : \033[0;32m 1 4 3 2\033[0m\n"
./a.out 1 4 3 2
printf "\033[1;31mThis is the test  with : \033[0;32m 2 1 3 4\033[0m\n"
./a.out 2 1 3 4
printf "\033[1;31mThis is the test  with : \033[0;32m 2 1 4 3\033[0m\n"
./a.out 2 1 4 3
printf "\033[1;31mThis is the test  with : \033[0;32m 2 3 1 4\033[0m\n"
./a.out 2 3 1 4
printf "\033[1;31mThis is the test  with : \033[0;32m 2 3 4 1\033[0m\n"
./a.out 2 3 4 1
printf "\033[1;31mThis is the test  with : \033[0;32m 2 4 1 3\033[0m\n"
./a.out 2 4 1 3
printf "\033[1;31mThis is the test  with : \033[0;32m 2 4 3 1\033[0m\n"
./a.out 2 4 3 1
printf "\033[1;31mThis is the test  with : \033[0;32m 3 1 2 4\033[0m\n"
./a.out 3 1 2 4
printf "\033[1;31mThis is the test  with : \033[0;32m 3 1 4 2\033[0m\n"
./a.out 3 1 4 2
printf "\033[1;31mThis is the test  with : \033[0;32m 3 2 1 4\033[0m\n"
./a.out 3 2 1 4
printf "\033[1;31mThis is the test  with : \033[0;32m 3 2 4 1\033[0m\n"
./a.out 3 2 4 1
printf "\033[1;31mThis is the test  with : \033[0;32m 3 4 1 2\033[0m\n"
./a.out 3 4 1 2
printf "\033[1;31mThis is the test  with : \033[0;32m 3 4 2 1\033[0m\n"
./a.out 3 4 2 1
printf "\033[1;31mThis is the test  with : \033[0;32m 4 1 2 3\033[0m\n"
./a.out 4 1 2 3
printf "\033[1;31mThis is the test  with : \033[0;32m 4 1 3 2\033[0m\n"
./a.out 4 1 3 2
printf "\033[1;31mThis is the test  with : \033[0;32m 4 2 1 3\033[0m\n"
./a.out 4 2 1 3
printf "\033[1;31mThis is the test  with : \033[0;32m 4 2 3 1\033[0m\n"
./a.out 4 2 3 1
printf "\033[1;31mThis is the test  with : \033[0;32m 4 3 1 2\033[0m\n"
./a.out 4 3 1 2
printf "\033[1;31mThis is the test  with : \033[0;32m 4 3 2 1\033[0m\n"
./a.out 4 3 2 1


# TEST FOR 5
printf "\n\n\e[1;94m------TESTING FOR 5 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 4 3 2 1 5\033[0m\n"
./a.out 1 2 3 5 4
printf "\033[1;31mThis is the test  with : \033[0;32m 5 4 2 3 1\033[0m\n"
./a.out 5 4 2 3 1
printf "\033[1;31mThis is the test  with : \033[0;32m \"5 4 2 3 1\"\033[0m\n"
./a.out "5 4 2 3 1"
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./a.out $ARG 
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./a.out $ARG 
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./a.out $ARG 
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./a.out $ARG 
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./a.out $ARG 
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./a.out $ARG 
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./a.out $ARG 



# TEST FOR PROBLEMS
printf "\n\n\e[1;94m------TESTING FOR PROBLEMS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m1\033[0m\n"
./a.out 1
printf "\033[1;31mThis is the test with : \033[0;32mnothing\033[0m\n"
./a.out 
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





# printf "\033[1;31mThis is the test  with : \033[0;32m2 1 3 6 5 8\033[0m\n"
# ./a.out 2 1 3 6 5 8
# printf "\033[1;31mThis is the test  with : \033[0;32m 158 289 11756 5 4987 421456 12 57 3\033[0m\n"
# ./a.out 158 289 11756 5 4987 421456 12 57 3
# printf "\033[1;31mThis is the test  with : \033[0;32m \"158 289 11756 5 4987 421456 12 57 3\" in a sentence \033[0m\n"
# ./a.out "158 289 11756 5 4987 421456 12 57 3"