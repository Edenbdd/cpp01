# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tests.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/02 15:29:44 by aubertra          #+#    #+#              #
#    Updated: 2025/03/11 15:17:57 by aubertra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

make

PROGRAM="valgrind --leak-check=full --error-exitcode=1 ./ft_sed"

FOLDER="./tests"
BASIC="./tests/basic.txt"
EMPTY="./tests/empty.txt"
LONG="./tests/long.txt"

RED='\033[31m'
RESET='\033[0m'

echo "Simple test"
$PROGRAM $BASIC "Sed" "C++98"
cat $BASIC.replace
echo "--------------------------------"

echo "${RED}Testing Not enough arguments${RESET}"
$PROGRAM $BASIC "Sed"
echo "--------------------------------"

echo "${RED}Testing With empty to_replace${RESET}"
$PROGRAM $BASIC "" "C++98"
echo "--------------------------------"

echo "${RED}Testing With empty replacement${RESET}"
$PROGRAM $BASIC "Sed" ""
echo "--------------------------------"

echo "${RED}Testing With both to_replace and replacement empty${RESET}"
$PROGRAM $BASIC "" ""
echo "--------------------------------"

echo "${RED}Testing With whitespace as to_replace${RESET}"
$PROGRAM $BASIC " " "*"
cat $BASIC.replace
echo "--------------------------------"

echo "${RED}Testing With whitespace as to_replace and replacement${RESET}"
$PROGRAM $BASIC " " "\n"
cat $BASIC.replace
echo "--------------------------------"

echo "${RED}Testing No permission for infile${RESET}"
chmod 000 $BASIC
$PROGRAM $BASIC "Sed" "C++98"
chmod 644 $BASIC
echo "--------------------------------"

echo "${RED}Testing Wrong permission for infile${RESET}"
chmod 111 $BASIC
$PROGRAM $BASIC "Sed" "C++98"
chmod 644 $BASIC
echo "--------------------------------"

echo "${RED}Testing with a folder instead of a file${RESET}"
$PROGRAM $FOLDER "Sed" "C++98"
cat $FOLDER.replace
echo "--------------------------------"

echo "${RED}Testing Empty infile${RESET}"
$PROGRAM $EMPTY "Sed" "C++98"
cat $EMPTY.replace
echo "--------------------------------"

echo "${RED}Testing with to_replace not in the file${RESET}"
$PROGRAM $LONG "Sed" "C++98"
cat $LONG.replace
echo "--------------------------------"

echo "${RED}Testing with =*+#$%^&* as to replace and 'characters' as replacement${RESET}"
$PROGRAM $LONG "=*+#$%^&*" "characters"
cat $LONG.replace
echo "--------------------------------"

echo "${RED}Testing  with 'let's include' as to_replace but ${RESET}"
echo "${RED}'lets's' is present elsewhere in the file (replacement is 'REPLACED') ${RESET}"
$PROGRAM $LONG "let's include" "REPLACED"
cat $LONG.replace
echo "--------------------------------"

echo "${RED}Testing for case sensitivity${RESET}"
$PROGRAM $LONG "Case" "REPLACED"
cat $LONG.replace
echo "--------------------------------"

echo "${RED}Testing when to_replace has multiple instances in the file${RESET}"
$PROGRAM $LONG "e" "!"
cat $LONG.replace
echo "--------------------------------"

echo "${RED}Testing with replacement containing to replace${RESET}"
$PROGRAM $LONG "a" "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
cat $LONG.replace
echo "--------------------------------"

echo "${RED}Testing replacing with end of the file${RESET}"
$PROGRAM $LONG "!@#$%^&*()" "!"
cat $LONG.replace
echo "--------------------------------"

rm $BASIC.replace
rm $LONG.replace

make fclean