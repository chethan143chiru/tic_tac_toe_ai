CXX = clang++
CXXFLAGS = -std=c++17 -Isrc

# Find all cpp files except those in ui_qt (since Qt might not be installed)
SRCS = $(shell find src -name "*.cpp" -not -path "src/ui_qt/*")
OBJS = $(SRCS:.cpp=.o)
TARGET = TicTacToeAIConsoleRun

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
