all: compilar
compilar: propietario propiedad main
	g++ -o Salida Propietario.o Propiedad.o Main.o
propietario: Propietario.cpp Propietario.h Propiedad.h
	g++ -c Propietario.cpp
propiedad: Propiedad.cpp Propiedad.h
	g++ -c Propiedad.cpp
main: Main.cpp Propietario.h
	g++ -c Main.cpp
clean: #para borrar los .o
	@echo "Cleaning compilation..."
	del *.o

