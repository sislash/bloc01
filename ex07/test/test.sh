#!/bin/bash

#compiler
gcc -Wall -Wextra -Werror -Iinclude src/*.c test/main.c -o ex07_test

# Executer et rediriger la sortie
./../ex07_test > test/output.txt

# Comparer
diff test/output.txt test/expected.txt > /dev/null

# Resultat
if [ $? -eq 0 ]; then
	echo "ex07: Test réussi"
else
	echo "ex07: Text échoué"
fi

# Nettoyage
rm -f ex07_test test/output.txt
