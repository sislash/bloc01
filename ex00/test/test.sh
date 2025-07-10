#!/bin/bash

#Compiler le programme de test
gcc -Wall -Wextra -Werror -Iinclude src/ft_putchar.c test/main.c -o ex00_test

#Executer le programme et rediriger sa sortie vers un fichier temporaire
./../ex00_test > test/output.txt

#Comparer la sortie avec le fichier attendu
diff test/output.txt test/expected.txt > /dev/null

#Verifier le code de retour de diff
if [ $? -eq 0 ]; then
	echo "ex00: Test réussi"
else
	echo "ex00: Erreur - La sortie ne correspond pas à l'attendu"
fi

#Nettoyer les fichiers temporaires
rm -f ex00_test test/output.txt
