CHAPTER = Chapter2
FILE ?= $(CHAPTER)/bit_masking.c
TARGET := $(basename $(FILE)).out

compile:
	gcc $(FILE) -o $(TARGET)

exec:
	./$(TARGET)

clean:
	rm -f $(TARGET)

run: compile exec

debug:
	gcc $(FILE) -o $(TARGET) -g