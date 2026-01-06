CC = gcc
CFLAGS = -Wall -g
TARGET = scanner

$(TARGET): main.c scan.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c scan.c

run1: $(TARGET) in01
	./$(TARGET) in01

run2: $(TARGET) in02
	./$(TARGET) in02

run3: $(TARGET) in03
	./$(TARGET) in03

clean:
	rm -rf *.o $(TARGET)