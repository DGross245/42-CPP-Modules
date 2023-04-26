#!/bin/sh

# ---------------------------------------------------------------------------- #
#                                    COLORS                                    #
# ---------------------------------------------------------------------------- #

RED="\033[0;31m"
GREEN="\033[0;32m"
BLUE="\033[0;34m"
HIGHIWHITE="\033[0;39m"
RESET="\033[0m"

# ---------------------------------------------------------------------------- #
#                                     VARS                                     #
# ---------------------------------------------------------------------------- #

nb_tests=0;

# ---------------------------------------------------------------------------- #
#                                   FUNCTIONS                                  #
# ---------------------------------------------------------------------------- #

test_case()
{
	return_code=0;
	echo -n "${BLUE}$nb_tests. Testcase ${HIGHIWHITE}$1: ${RESET}\t\t\t"
	./convert "$1" > /dev/null 2>&1;
	return_code=$(($return_code + $?))
	if [ $2 -eq $return_code ]
		then
		echo "${GREEN}SUCCESS ✔${RESET}"
		else
		echo "${RED}FAIL ✘${RESET}"
	fi
	nb_tests=$((nb_tests+1));
}

echo "${HIGHIWHITE}converter Tester v1.0${RESET}\n";

# make ex00
make re > /dev/null 2>&1;

# testcases
test_case "test1" 1;
test_case "0.0" 0;
test_case "1.0" 0;
test_case "-1.0" 0;
test_case "--1.0" 1;
test_case "1.0--" 1;
test_case "1.0-+" 1;
test_case "-+1.0" 1;
test_case "1.0-0" 1;
test_case "1-0" 1;
test_case "1--" 1;
test_case "1-+" 1;
test_case "0.0f" 0;
test_case "1.0f" 0;
test_case "-1.0f" 0;
test_case "--1.0f" 1;
test_case "1.0f--" 1;
test_case "1.0f-+" 1;
test_case "-+1.0f" 1;
test_case "1.0f-0" 1;
test_case "-1.0-" 1;
test_case "1.f" 1;
test_case "1.-f" 1;
test_case "  1.0f" 1;
test_case "	1.0f" 1;
test_case "1.0f    " 1;
test_case "1.0f	" 1;
test_case "-.0f" 1;
test_case "1.0ff" 1;
test_case "00" 1;
test_case "nan" 0;
test_case "nanf" 0;
test_case "inf" 0;
test_case "-inf" 0;
test_case "inff" 0;
test_case "-inff" 0;
test_case "+nan" 1;
test_case "-nan" 1;
test_case "1..0" 1;
test_case "1.0.0" 1;
test_case "1f" 1;
test_case "-1f" 1;
test_case "+1f" 1;
test_case "+42" 0;
test_case "2147483647" 0;
test_case "2147483648" 1;
test_case "-2147483648" 0;
test_case "-2147483649" 1;