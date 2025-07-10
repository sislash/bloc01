#!/bin/bash

# Compiler
gcc -Wall -Wextra -Werror -Iinclude src/ft_print_reverse_alphabet.c test/main.c -o ex02_test

# Executer et rediriger la sortie
./../ex02_test > test/output.txt

# Comparer
diff test/output.txt test/expected.txt > /dev/null

# Resultat
if [ $? -eq 0 ]; then
	echo "ex02: Test réussi"
else
	echo "ex02: Test échoué"
fi

# Nettoyage
rm -f ex02_test test/output.txt
