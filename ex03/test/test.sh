#!/bin/bash

# Compiler
gcc -Wall -Wextra -Werror -Iinclude src/ft_print_numbers.c test/main.c -o ex03_test

# Executer et rediriger la sortie
./../ex03_test > test/output.txt

# Comparer
diff test/output.txt test/expected.txt > /dev/null

# Resultat
if [ $? -eq 0 ]; then
	echo "ex03: Test réussi"
else
	echo "ex03: Test échoué"
fi

# Néttoyage
rm -f ex03_test test/output.txt
