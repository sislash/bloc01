#!/bin/bash

# Compiler
gcc -Wall -Wextra -Werror -Iinclude src/*.c test/main.c -o ex08_test

# Executer et rediriger la sortie
./../ex08_test > test/output.txt

# Comparer
diff test/output.txt test/expected.txt > /dev/null

# Resultat
if [ $? -eq 0 ]; then
	echo "ex08: Test réussi"
else
	echo "ex08: Test échoué"
fi

# Nettoyage
rm -f ex08_test test/output.txt