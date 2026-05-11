CHAPTER = Chapter3
FILE ?= fix_set_diag_opt.c
FILEPATH = $(CHAPTER)/$(FILE)
TARGET := $(CHAPTER)/$(basename $(FILE)).out

compile:
	gcc $(FILEPATH) -o $(TARGET)

exec:
	./$(TARGET)

clean:
	rm -f $(TARGET)

run: compile exec

debug:
	gcc $(FILEPATH) -o $(TARGET) -g