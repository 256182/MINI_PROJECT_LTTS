# Name of the project
PROJECT_NAME = SNOOKER

# Output directory
BUILD = build

# All source code files
SRC = src/blackcolour.c\
src/bluecolour.c\
src/browncolour.c\
src/greencolour.c\
src/pinkcolour.c\
src/yellowcolour.c\
src/redcolour.c


# All test source files
TEST_SRC = test/test_snooker_operations.c\
unity/unity.c\

TEST_OUTPUT = Test_$(PROJECT_NAME)

# All include folders with header files
INC_H = inc
INC_T = unity

#Library Inlcudes
#INCLUDE_LIBS = 


# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

COV_SRC = test_snooker_operations.c

DOCUMENTATION_OUTPUT = documentation/html

# Document files
#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

$(PROJECT_NAME):all


# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all: $(BUILD)
	gcc -I $(INC_H) $(SRC) project_main.c -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

run:$(PROJECT_NAME)
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC) 
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_OUTPUT).$(EXEC))
	./$(call FixPath,$(TEST_OUTPUT).$(EXEC))
	

doc:
	make -C ./$(DOCUMENTATION_OUTPUT)
$(BUILD):
	mkdir $(BUILD)

coverage:
	cp test/test_snooker_operations.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test_snooker_operations.c $(SRC) -o $(call FixPath, $(TEST_OUTPUT).$(EXEC))
	$(call FixPath, ./$(TEST_OUTPUT).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test_snooker_operations.c


cppcheck:
	cppcheck --enable=all $(SRC) project_main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJECT_NAME).$(EXEC)
	gdb $(PROJECT_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_OUTPUT).exe


clean:
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov

