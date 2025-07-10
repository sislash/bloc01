#!/bin/bash

# Compiler
gcc -Wall -Wextra -Werror -Iinclude src/ft_print_comb.c test/main.c -o ex05_test

# Executer et rediriger la sortie
./../ex05_test > test/output.txt

# Suprimer le retour a la ligne à la fin du fichier de sortie
#sur ce test ça ne fonctionne pas sa suprime le dernier caractere qui doit etre un "9" dans la
#derniere séquance
#truncate -s -1 test/output.txt


# Comparer
diff test/output.txt test/expected.txt > /dev/null

# Resultat
if [ $? -eq 0 ]; then
	echo "ex05: Test réussi"
else
	echo "ex05: Test échoué"
fi

# Nettoyage
rm -f ex05_test test/output.txt
