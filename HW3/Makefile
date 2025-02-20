.PHONY: all clean

# Compiler settings
CXX = g++
CXXFLAGS = -I ./inc -std=c++11
WARNINGS = -g -Wall -O3

# Source files and object files
SRCDIR = src
OBJDIR = obj
INCDIR = inc
OUTDIR = output
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

# Name of the executable
TARGET = CA IE

all: $(TARGET) $(OUTDIR)

$(OBJDIR):
	@mkdir $(OBJDIR)

$(OUTDIR):
	@mkdir $(OUTDIR)

CA: CA.cpp $(OBJS)
	$(CXX) $(WARNINGS) $(CXXFLAGS) $^ -o $@

IE: IE.cpp $(OBJS)
	$(CXX) $(WARNINGS) $(CXXFLAGS) $^ -o $@

exe_CA:
	./CA

exe_IE:
	./IE

clean:
	rm -rf $(OBJDIR) $(TARGET) $(OUTDIR)

# Compilation rule for object files with automatic dependency generation
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR) Makefile
	$(CXX) $(WARNINGS) $(CXXFLAGS) -c $< -o $@