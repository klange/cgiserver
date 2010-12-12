EXE = cgiserver
all: $(EXE)

CC = gcc
CFLAGS = -g -W -Wall
LIBS = -lpthread

OBJS = webserver.o vector.o

-include $(OBJS:.o=.d)

cgiserver: $(OBJS)
	$(CC) -o $@ $(CFLAGS) $(OBJS) $(LIBS)

%.d: %.c
	set -e; $(CC) -MM $(CFLAGS) $< \
		| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
		[ -s $@ ] || rm -f $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) *.o *~ core.* *.d

