#!/usr/bin/env bash

set -e

gcc -I include src/*.c test/*.c -Wall -Wextra -Werror -o ft_div_mod
