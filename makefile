CC=gcc
CFLAGS=-Wall -g
LDFLAGS=

OBJECTS_MAIN=main.o
OBJECTS_LIB_LOOP=basicClassification.o advancedClassificationLoop.o
OBJECTS_LIB_RECURSION=basicClassification.o advancedClassificationRecursion.o

TARGETS=main_loop main_recursion


all: $(TARGETS)

main_loop: $(OBJECTS_MAIN) $(OBJECTS_LIB_LOOP)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS_MAIN) $(OBJECTS_LIB_LOOP) $(LDFLAGS) -lm

main_recursion: $(OBJECTS_MAIN) $(OBJECTS_LIB_RECURSION)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS_MAIN) $(OBJECTS_LIB_RECURSION) $(LDFLAGS) -lm

$(OBJECTS_MAIN): %.o: %.c NumClass.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJECTS_LIB_LOOP): %.o: %.c NumClass.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJECTS_LIB_RECURSION): %.o: %.c NumClass.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGETS) $(OBJECTS_MAIN) $(OBJECTS_LIB_LOOP) $(OBJECTS_LIB_RECURSION)

