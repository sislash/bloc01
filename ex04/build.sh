#!/usr/bin/env bash

set -e

gcc src/*.c test/*.c -Wall -Wextra -Werror -o ft_is_negative
