#!/bin/bash

# Compiler
gcc -Wall -Wextra -Werror -Iinclude src/ft_is_negative.c test/main.c -o ex04_test

# Executer et rediriger la sortie
./../ex04_test > test/output.txt

# Comparer
diff test/output.txt test/expected.txt > /dev/null

# Resultat
if [ $? -eq 0 ]; then
	echo "ex04: Test réussi"
else
	echo "ex04: Test échoué"
fi

# Nettoyage
rm -f ex04_test test/output.txt