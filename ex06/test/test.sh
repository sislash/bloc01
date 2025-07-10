#!/bin/bash

# Compiler
gcc -Wall -Wextra -Werror -Iinclude src/ft_print_comb2.c test/main.c -o ex06_test

# Executer
./../ex06_test > test/output.txt

# Comparaison
diff test/output.txt test/expected.txt > /dev/null

# Resultat
if [ $? -eq 0 ]; then
	echo "ex06: Test réussi"
else
	echo "ex06: Test échoué"
fi

# Nettoyage
rm -f ex06_test test/output.txt
