c++ -Wall -Wextra -Werror -std=c++98 main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp -o binary
./binary | cat -e; rm binary; echo "Done!"