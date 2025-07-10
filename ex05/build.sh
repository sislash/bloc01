#!/usr/bin/env bash

set -e

gcc -I include ../ex00/src/*.c src/*.c test/*.c -Wall -Wextra -Werror -o ft_print_comb
