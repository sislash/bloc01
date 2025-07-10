#!/bin/bash

#Compiler le programme de test
gcc -Wall -Wextra -Werror -Iinclude src/ft_print_alphabet.c test/main.c -o ex01_test

#Executer le programme et rediriger sa sortie vers un fichier temporaire
./../ex01_test > test/output.txt

#comparer la sortie avec le fichier attendu
diff test/output.txt test/expected.txt > /dev/null

#Verifier le code de retoure de diff
if [ $? -eq 0 ]; then
	echo "ex01: Test réussi"
else
	echo "ex01: Erreur - La sortie ne correspond pas à l'attendu"
fi

#Nettoyer les fichiers temporaires
rm -f ex01_test test/output.txt
