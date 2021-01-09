clang -Wall -Wextra -Werror ./Sully.c -o Sully ; ./Sully;  ls -al | grep Sully | wc -l ;
diff ./Sully.c Sully_0.c