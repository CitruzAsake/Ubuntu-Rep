CC = gcc
CFLAGS = -Wall -O1 -std=gnu11
CFLAGS += $(shell gsl-config --cflags)
LDLIBS += $(shell gsl-config --libs)

all: output.txt
	cat $<

output.txt: main
	./$< > $@

main: main.o utilities.o Jacobi.o

clean:
	$(RM) main *.o *.txt *.ppl *.pdf *.png

test: 
	@echo $(CFLAGS)
	@echo $(LDLIBS)

