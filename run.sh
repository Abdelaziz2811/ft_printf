#!/bin/bash
SOURCE_FILE="test.c"
LIBRARY="libftprintf.a"
EXECUTABLE="a.out"
CLEAROBJ="make fclean"

echo -e "\e[1;32mAttempting to compile $SOURCE_FILE with $LIBRARY...\e[0m"
make re && cc $SOURCE_FILE -I . $LIBRARY

if [ $? -ne 0 ]; then
    echo -e "\e[1;31mCompilation failed. Errors are shown above.\e[0m"
    exit 1
fi

$CLEAROBJ && clear
./"$EXECUTABLE" && rm $EXECUTABLE

if [ $? -ne 0 ]; then
    echo -e "\e[1;31mProgram execution failed. Check the output above for runtime errors.\e[0m"
    exit 1
fi

echo -e "\e[1;32m\n\t------[SUCCESS]------\e[0m"