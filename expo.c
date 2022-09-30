#include <stdio.h>
//EXAMEN EJERCICIO 2 R. DON JUAN RAMOS MITZI FABIOLA

int exponenteEntero(int entero, int exp);

int main()
{
    int entero, exp, res;
    
    printf("Ingrese el numero  base que desea elevar: ");
    scanf("%d",&entero);
    printf("Ahora ingrese el exponente: ");
    scanf("%d",&exp);
    
    res = exponenteEntero(entero, exp);
    
    printf("El resultado de elevar %d^%d es: %d\n",entero, exp, res);
    return 0;
}

int exponenteEntero(int entero, int exp) {
    
    int res;
    
    if (exp == 0)
        res=1;
    else if (exp > 0) {
        res = entero * exponenteEntero(entero, exp - 1);
    }
    else if (exp < 0)
    {
        res = 1 / entero * exponenteEntero(entero, exp + 1);
    }
        
    return res;
    
}
