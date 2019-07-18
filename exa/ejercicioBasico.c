#include <stdio.h>

int main()
{
    int horasDelEmpleado = 0;
    int antiguedadAnio = 0;
    int horasTrabajadas = 0;
    float descuento = 0.13;
    float valorArestar = 0;
    float importeQueCobra = 0;
    char nombre[20], apellido[20];
    
    printf("Ingrese el nombre: ");
    scanf("%s", &nombre);
    printf("Ingrese el apellido: ");
    scanf("%s", &apellido);
    
    printf("Ingrese la cantidad de horas que trabaja el empleado: ");
    scanf("%d", &horasDelEmpleado);
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horasTrabajadas);
    printf("Ingrese la antiguedad del empleado en anios: ");
    scanf("%d", &antiguedadAnio);

    
    importeQueCobra = (horasDelEmpleado * horasTrabajadas) + (antiguedadAnio * 30);
    valorArestar = importeQueCobra * descuento;
	importeQueCobra -= valorArestar;
    
    printf("Nombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Antiguedad: %d anios\n", antiguedadAnio);
    printf("Horas trabajadas: %d horas\n", horasTrabajadas);
    printf("Total a cobrar: %.2f\n", importeQueCobra);
    printf("Descuento: %.2f porciento\n", descuento*100);
    
    return 0;
}
