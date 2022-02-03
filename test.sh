#! /bin/bash

#make -C va fouiller dans mon dossier libft pour chercher le makefile
#make -C libft 
#-L dit va chercher dans mon dossier libft pour la libra
#-l le petit l dit link sur mon fichier ft
# ca s'apelle ft parceque gcc sait que les librarires commencent toujours par lib
# -I. veut dire ya des .h dans le dossier dans lequel tu es

#gcc -Wall -Werror -Wextra ./src/*.c -Llibft -lft -I. -o push_swap

#to test in evals
#ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | ./checker_MAC $ARG

# TESTING THE INTPUT PART  
make push_swap
#test for 2
printf "\n\n\e[1;94m------TESTING FOR 2 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 2000 1000\033[0m\n"
./push_swap 2000 1000
printf "\033[1;31mThis is the test  with : \033[0;32m 1000 2000\033[0m\n"
./push_swap 1000 2000

# TEST FOR 3
printf "\n\n\e[1;94m------TESTING FOR 3 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 3 1 2\033[0m\n"
./push_swap 3 1 2 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 3 2 1\033[0m\n"
./push_swap 3 2 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 3 1\033[0m\n"
./push_swap 2 3 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 1 3\033[0m\n"
./push_swap 2 1 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 1 2 3\033[0m\n"
./push_swap 1 2 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 1 3 2\033[0m\n"
./push_swap 1 3 2 | wc -l

# # TEST FOR 4
printf "\n\n\e[1;94m------TESTING FOR 4 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 1 2 3 4\033[0m\n"
./push_swap 1 2 3 4 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 1 2 4 3\033[0m\n"
./push_swap 1 2 4 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 1 3 2 4\033[0m\n"
./push_swap 1 3 2 4 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 1 3 4 2\033[0m\n"
./push_swap 1 3 4 2 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 1 4 2 3\033[0m\n"
./push_swap 1 4 2 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 1 4 3 2\033[0m\n"
./push_swap 1 4 3 2 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 1 3 4\033[0m\n"
./push_swap 2 1 3 4 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 1 4 3\033[0m\n"
./push_swap 2 1 4 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 3 1 4\033[0m\n"
./push_swap 2 3 1 4 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 3 4 1\033[0m\n"
./push_swap 2 3 4 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 4 1 3\033[0m\n"
./push_swap 2 4 1 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 2 4 3 1\033[0m\n"
./push_swap 2 4 3 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 3 1 2 4\033[0m\n"
./push_swap 3 1 2 4 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 3 1 4 2\033[0m\n"
./push_swap 3 1 4 2 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 3 2 1 4\033[0m\n"
./push_swap 3 2 1 4 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 3 2 4 1\033[0m\n"
./push_swap 3 2 4 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 3 4 1 2\033[0m\n"
./push_swap 3 4 1 2 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 3 4 2 1\033[0m\n"
./push_swap 3 4 2 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 4 1 2 3\033[0m\n"
./push_swap 4 1 2 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 4 1 3 2\033[0m\n"
./push_swap 4 1 3 2 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 4 2 1 3\033[0m\n"
./push_swap 4 2 1 3 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 4 2 3 1\033[0m\n"
./push_swap 4 2 3 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 4 3 1 2\033[0m\n"
./push_swap 4 3 1 2 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 4 3 2 1\033[0m\n"
./push_swap 4 3 2 1 | wc -l


# TEST FOR 5
printf "\n\n\e[1;94m------TESTING FOR 5 DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 4 3 2 1 5\033[0m\n"
./push_swap 1 2 3 5 4 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 5 4 2 3 1\033[0m\n"
./push_swap 5 4 2 3 1 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m \"5 4 2 3 1\"\033[0m\n"
./push_swap "5 4 2 3 1" | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER \033[0m\n"
ARG=`ruby -e "puts (10..14).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l




# # TEST FOR 12 digits and more
printf "\n\n\e[1;94m------TESTING FOR 12 and + DIGITS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m 2 3 5 12 10 6 9 7 4 1 8 11\033[0m\n"
./push_swap 2 3 5 12 10 6 9 7 4 1 8 11 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 11 1 2 12 3 7 4 6 10 9 8 5\033[0m\n"
./push_swap 11 1 2 12 3 7 4 6 10 9 8 5 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m 9 5 4 10 8 6 2 7 1 3 11 12\033[0m\n"
./push_swap 9 5 4 10 8 6 2 7 1 3 11 12 | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 12 numbers \033[0m\n"
ARG=`ruby -e "puts (10..21).to_a.shuffle.join(' ')"`; ./push_swap $ARG  | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 25 numbers \033[0m\n"
ARG=`ruby -e "puts (10..34).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 50 numbers \033[0m\n"
ARG=`ruby -e "puts (10..59).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
printf "\033[1;31mThis is the test  with : \033[0;32m RANDOMIZER with 100 numbers \033[0m\n"
ARG=`ruby -e "puts (10..109).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l


#TEST FOR PROBLEMS
printf "\n\n\e[1;94m------TESTING FOR PROBLEMS------\e[0m\n\n"
printf "\033[1;31mThis is the test  with : \033[0;32m1\033[0m\n"
./push_swap 1
printf "\033[1;31mThis is the test with : \033[0;32mnothing\033[0m\n"
./push_swap 
printf "\033[1;31mThis is the test with : \033[0;32m1 2 3 4 5\033[0m\n"
./push_swap 1 2 3 4 5
printf "\033[1;31mThis is the test with : \033[0;32m\"5 4 3 2 1 0 TOTO\" in a sentence \033[0m\n"
./push_swap "5 4 3 2 1 0 TOTO"
printf "\033[1;31mThis is the test with : \033[0;32m5 4 3 2 1 0 TOTO not int a sentence\033[0m\n"
./push_swap 5 4 3 2 1 0 TOTO
printf "\033[1;31mThis is the test with : \033[0;32m TOTO \033[0m\n"
./push_swap TOTO
printf "\033[1;31mThis is the test with : \033[0;32m-22222222222222222222 5 4 3 2 1 0 \033[0m\n"
./push_swap -22222222222222222222 5 4 3 2 1 0
printf "\033[1;31mThis is the test with : \033[0;32m5 4 3 2 1 0 -22222222222222222222\033[0m\n"
./push_swap  5 4 3 2 1 0 -22222222222222222222
printf "\033[1;31mThis is the test with : \033[0;32m5 4 3 -22222222222222222222 2 1 0 \033[0m\n"
./push_swap  5 4 3 -22222222222222222222 2 1 0 


printf "\n\n\e[1;94m------END OF TESTS------\e[0m\n\n"




make fclean
# printf "\033[1;31mThis is the test  with : \033[0;32m2 1 3 6 5 8\033[0m\n"
# ./push_swap 2 1 3 6 5 8
# printf "\033[1;31mThis is the test  with : \033[0;32m 158 289 11756 5 4987 421456 12 57 3\033[0m\n"
# ./push_swap 158 289 11756 5 4987 421456 12 57 3
# printf "\033[1;31mThis is the test  with : \033[0;32m \"158 289 11756 5 4987 421456 12 57 3\" in a sentence \033[0m\n"
# ./push_swap "158 289 11756 5 4987 421456 12 57 3"