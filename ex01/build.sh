#!/usr/bin/env bash

set -e

gcc src/*.c test/*.c -Wall -Wextra -Werror -o prog.out
