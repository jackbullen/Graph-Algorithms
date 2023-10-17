CXX = g++
CXXFLAGS = -std=c++17 -I include
SOURCES = $(wildcard src/**/*.cpp)
TARGET = graph_program

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)
