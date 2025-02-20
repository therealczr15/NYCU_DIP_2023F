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
TARGET = FLIP QR SCALE

all: $(TARGET) $(OUTDIR)

$(OBJDIR):
	@mkdir $(OBJDIR)

$(OUTDIR):
	@mkdir $(OUTDIR)

FLIP: flip.cpp $(OBJS)
	$(CXX) $(WARNINGS) $(CXXFLAGS) $^ -o $@

QR: qr.cpp $(OBJS)
	$(CXX) $(WARNINGS) $(CXXFLAGS) $^ -o $@

SCALE: scale.cpp $(OBJS)
	$(CXX) $(WARNINGS) $(CXXFLAGS) $^ -o $@

exe_flip:
	./FLIP

exe_qr:
	./QR

exe_scale:
	./SCALE

clean:
	rm -rf $(OBJDIR) $(TARGET) $(OUTDIR)

# Compilation rule for object files with automatic dependency generation
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR) Makefile
	$(CXX) $(WARNINGS) $(CXXFLAGS) -c $< -o $@