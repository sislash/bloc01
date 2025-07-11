# Makefile
CC = gcc

NAME = piscine

# Liste de tous les repertoires d'exercice a compiler et tester
# Cette liste sera étendue au fur et à mesure que tu progresses

EXERCICES = ex00 ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 ex09

# Liste de tout les exercice a compiler et tester
# Cette liste sera étendue au fur et à mesure que tu progresses

SRC_ex00 = ft_putchar
SRC_ex01 = ft_print_alphabet
SRC_ex02 = ft_print_reverse_alphabet
SRC_ex03 = ft_print_numbers
SRC_ex04 = ft_is_negative
SRC_ex05 = ft_print_comb
SRC_ex06 = ft_print_comb2
SRC_ex07 = ft_putnbr ft_putchar
SRC_ex08 = ft_print_combn
SRC_ex09 = ft_ultimate_ft ft_putnbr ft_putstr

# Option de compilation standard

CFLAGS = -Wall -Wextra -Werror

# Option de debuguage
DEBUG = -g

# Règle par défaut : compile tout les exercices
# Fonction d'appel pour compiler un exercice donné
# $1 Utilisé dans une fonction definie avec "define+call", represente le premier argument que tu passe dans $(call ...,..)
define compile_exercise
	@echo "Compiling $1..."
	$(CC) $(CFLAGS\) -I$1/include $(addprefix $1/src/, $(SRC_$1:=.c)) $1/test/main.c -o $1_test
endef

all: $(EXERCICES)

# Régle générique pour compiler chaque exercice de test
$(EXERCICES):
	$(call compile_exercise,$@)

# Règle spécifique si un exercice a des dépendances particulieres ou un nom de fonction différent
#ex00:
#	$(CC) $(CFLAGS) -Iex00/include ex00/src/ft_putchar.c ex00/test/main.c -o ex00_test

# Régle pour tout netoyer tout les exécutables de test et fichiers temporaires
clean:
	@echo "cleaning up..."
	rm -f $(EXERCICES:%=%_test) # suprime tout les executable de test (ex: ex00_test, ex01_test, ...)
	@find . -name "*.out" -delete # Supprime les éventuels .out
	@rm -f */test/output.txt # Suprime les fichiers output.txt des tests
	@rm -f *.o # Suprime les fichiers objets

# Régle pour executer tout les tests
test: clean all
	@echo "Running all test..."
	@for dir in $(EXERCICES); do \
		if [ -f $$dir/test/test.sh ]; then \
			cd $$dir && ./test/test.sh && cd - > /dev/null; \
		else \
			echo "Skipping test for $$dir: test/test.sh not found."; \
		fi; \
	done

.PHONY: all clean test $(EXERCICES)
