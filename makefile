all: increment spawn consecutive

increment: increment.c
	clang -o increment increment.c -I.
spawn: spawn.c
	clang -o spawn spawn.c -I.
consecutive: consecutive.c
	clang -o consecutive consecutive.c -I.
