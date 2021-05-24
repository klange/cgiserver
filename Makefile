LDLIBS := -lpthread
CFLAGS := -g -pedantic -std=c99

all: cgiserver

clean:
	rm -f *.o cgiserver

install:
	install cgiserver /usr/bin