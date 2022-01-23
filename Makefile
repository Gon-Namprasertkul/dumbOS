OBJS	= main.o apps/clock/main.o apps/calculator/main.o apps/random/main.o
SOURCE	= main.c apps/clock/main.c apps/calculator/main.c apps/random/main.c
OUT	= stupidOS apps/clock/clock apps/calculator/calculator apps/random/random
CC	 = cc
FLAGS	 = -g -w -c

all: $(OBJS)
	chmod +x menu.py
	chmod +x apps/guesser/guesser
	sh apps/shellsay/compile.sh
	$(CC) main.o -o dumbOS
	$(CC) apps/clock/main.o -o apps/clock/clock
	$(CC) apps/calculator/main.o -o apps/calculator/calculator
	$(CC) apps/random/main.o -o apps/random/random

main.o: main.c
	$(CC) $(FLAGS) main.c -std=c99

apps/clock/main.o: apps/clock/main.c
	$(CC) $(FLAGS) apps/clock/main.c -o apps/clock/main.o -std=c99

apps/calculator/main.o: apps/calculator/main.c
	$(CC) $(FLAGS) apps/calculator/main.c -o apps/calculator/main.o -std=c99

apps/random/main.o: apps/random/main.c
	$(CC) $(FLAGS) apps/random/main.c -o apps/random/main.o -std=c99


install:
	rm -r /usr/local/bin/dumbOS
	mkdir /usr/local/bin/dumbOS
	echo 'export PATH=$$PATH:/usr/local/bin/dumbOS' >> ~/.bashrc
	echo 'export PATH=$$PATH:/usr/local/bin/dumbOS' >> ~/.zshrc
	source ~/.bashrc
	source ~/.zshrc
	cp dumbOS /usr/local/bin/dumbOS
	cp -r apps /usr/local/bin/dumbOS
	cp menu.py /usr/local/bin/dumbO
	echo "Installed dumbOS!"

uninstall:
	rm -r /usr/local/bin/dumbOS
clean:
	rm -f dumbOS
	rm -f $(OBJS) $(OUT)
	rm apps/shellsay/shellsay
