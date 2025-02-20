# Nombre del compilador
CXX = g++

# Opciones del compilador
CXXFLAGS = -Wall -std=c++11

# Archivos fuente
SRCS = Main.cpp src/Circle.cpp src/Color.cpp src/Point.cpp src/Rectangle.cpp src/Shapes.cpp

# Archivos objeto
OBJS = $(SRCS:.cpp=.o)

# Nombre del ejecutable
TARGET = miPrograma

# Regla por defecto
all: $(TARGET)

# Regla para enlazar el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar archivos .cpp a .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -f $(OBJS) $(TARGET)

# Regla para limpiar archivos generados y de respaldo
cleanall: clean
	rm -f *~ *.bak

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)