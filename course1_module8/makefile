all: Module8

Module8: Account.o Transaction.o main.o
	clang++ Account.o Transaction.o main.o -o Module8


main.o: main.cpp Account.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic -Werror main.cpp

Account.o: Account.cpp Account.h Transaction.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic -Werror Account.cpp

Transaction.o: Transaction.cpp Transaction.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic -Werror Transaction.cpp
