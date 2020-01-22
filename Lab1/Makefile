TARGET = ttt

CCX = g++
CFLAGS = -Wall -g

LINKER = g++
LFLAGS = -I.

SRCDIR = src
OBJDIR = build
BINDIR = bin
INCDIR = include
DOCDIR = doc

SOURCES := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(INCDIR)/*.h)
OBJECTS := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
rm = rm -rf


all: $(BINDIR)/$(TARGET)


$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(LINKER) $(OBJECTS) $(LFLAGS) -o $@
	@echo "Linker done"


$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CCX) $(CFLAGS) -I$(INCDIR) -c $< -o $@
	@echo "Compiling done"


doc:
	@doxygen Doxyfile
	@echo "Documentation done"


clean:
	@$(rm) $(DOCDIR)/*
	@$(rm) $(OBJECTS)
	@$(rm) $(OBJDIR)/*.o
	@$(rm) $(BINDIR)/$(TARGET)
	

.PHONY: all clean doc
