all: compilar
compilar: propietario propiedad administracion main
	g++ -o Salida Propietario.o Propiedad.o Administracion.o Main.o
propietario: Propietario.cpp Propietario.h Propiedad.h
	g++ -c Propietario.cpp
propiedad: Propiedad.cpp Propiedad.h
	g++ -c Propiedad.cpp
administracion: Administracion.cpp Administracion.h Propietario.h
	g++ -c Administracion.cpp
main: Main.cpp Administracion.h
	g++ -c Main.cpp
clean: #para borrar los .o
	@echo "Cleaning compilation..."
	del *.o

