/*
Guido Insua
Divisi�n C
Ejercicio 3-2:
    Crear una funci�n que permita determinar si un n�mero es par o no. La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
*/

#include <stdio.h>
#include <stdlib.h>

int paridad(int numero);

int main(void)
{
	setbuf(stdout,NULL);

    int numeroIngresado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroIngresado);

    if(paridad(numeroIngresado) == 1)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero no es par");
    }

	return EXIT_SUCCESS;
}

int paridad(int numero)
{
	int respuesta;

	respuesta = 0;

    if (numero % 2 == 0)
    {
        respuesta = 1;
    }

    return respuesta;
}
