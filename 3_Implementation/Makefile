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
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 


# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

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
	gcc project_main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

run:$(PROJECT_NAME)
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC) 
	gcc $^ $(INC) -o $(call FixPath,$(BUILD)/$(TEST_OUTPUT).$(EXEC))
	$(call FixPath,$(BUILD)/$(TEST_OUTPUT).$(EXEC))
	

coverageCheck:$(BUILD)
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) project_main.c -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))
	gcov -a project_main.C

doc:
	make -C ./$(DOCUMENTATION_OUTPUT)
$(BUILD):
	mkdir $(BUILD)

clean:
	$(RM) $(call FixPath,$(BUILD)/*)
	
	rmdir $(BUILD) $(DOCUMENTATION_OUTPUT) $(*.gcno) $(*.gcda)

