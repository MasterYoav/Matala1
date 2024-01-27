CC=gcc
CFLAGS=-Wall -g
LDFLAGS=

OBJECTS_MAIN=main.o
OBJECTS_LIB=basicClassification.o advancedClassificationLoop.o
LIBRARY=libclassloops.a

TARGET=main_loop

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS_MAIN) $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS_MAIN) -L. -lclassloops $(LDFLAGS)

$(LIBRARY): $(OBJECTS_LIB)
	$(AR) -rcs $@ $(OBJECTS_LIB)

%.o: %.c NumClass.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(LIBRARY) $(OBJECTS_MAIN) $(OBJECTS_LIB)

