// Valeria Jaramillo Ramírez 
//MA 3-2 

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int MenuOpciones();
void Burbuja(int a[], int n);
void ord_BurbujaMejorado(int a[], int n);
void ord_Intercambio(int a[],int n);
void ord_Seleccion(int a[], int n);
void intercambiar(int& x, int&y);
void mostrar(int a[], int n);

int main()
{
	int opcion, i=0, a[50], n=0;
	do
	{
		opcion = MenuOpciones();
		switch (opcion)
		{
			case 1: system("cls");

					do
					{
						system("cls");
						printf("\n\tIngrese la cantidad de elementos del arreglo:\n\t");
						scanf("%d",&n);
						if(n>50)
						{
							printf("\n*Cantidad no permitida*\n");
							system("pause");
						}
					}
					while(n>50);
					
						printf("\n\t*Ingrese los elementos: *\n");
						for(i=0; i<n; i++)
						{
							fflush(stdin);

							printf("\t   elemento [ %d ] :",i);	
							scanf("%d",&a[i]);
						}
						system("pause");
						break;
			case 2: system("cls");
					printf("\nLa longitud del vector es: %d",n);
					printf("\n\n");
					system("pause");

				break;
					
			case 3: system("cls");
					int op;
					printf("\n ------------------------- ELIJA UN ALGORITMO DE ORDENAMIENTO -----------------------------------\n");
					printf("1.- Algoritmo de Ordenamiento por Burbuja Estandar\n");
					printf("2.- Algoritmo de Ordenamiento por Burbuja Mejorado\n");
					printf("3.- Algoritmo de Ordenamiento por Intercambio\n");
					printf("4.- Algoritmo de Ordenamiento por Seleccion\n");
					printf("\n\tOpcion: ");scanf("%d",&op);
					switch(op)
					{
						case 1:system("cls");
								if(n>0)
								{
									ord_BurbujaMejorado(a,n);
									printf("\n*El Algoritmo de Ordenamiento por Burbuja Estandar*\n");
									printf("\n\n");
									system("pause");
								break;
								}
								else
								{
									printf("\n*No existen elementos*");
								}
								printf("\n\n");
								system("pause");
							
							break;
						case 2:system("cls");
								if(n>0)
								{
									ord_BurbujaMejorado(a,n);
									printf("\n*El Algoritmo de Ordenamiento por Burbuja Estandar*\n");
									printf("\n\n");
									system("pause");
								break;
								}
								else
								{
									printf("\n*No existen elementos*");
								}
								printf("\n\n");
								system("pause");
							break;
						case 3: 
								system("cls");
								if(n>0)
								{
									ord_Intercambio(a,n);
									printf("\n*El Algoritmo de Ordenamiento por Intercambio ha sido aplicado*\n");
									printf("\n\n");
									system("pause");
							break;
								}
								else
								{
									printf("\n*No existen elementos*");
								}
								printf("\n\n");
								system("pause");
							
							break;
						case 4:system("cls");
							if(n>0)
							{
								ord_Seleccion(a,n);
								printf("\n*El Algoritmo de Ordenamiento por Seleccion ha sido aplicado*\n");
								printf("\n\n");
								system("pause");
								break;
							}
							else
							{
								printf("\n*No existen elementos*");
							}
								printf("\n\n");
								system("pause");
							break;
					}
				break;

					
			case 4: system("cls");
					if(n>0)
					{
						mostrar(a,n);
					}
					else
					{
						printf("\n*No existen elementos*");
					}
					printf("\n\n\t");
					system("pause");
					break;
		}
	}
				while (opcion!= 5);
}

int MenuOpciones()
{
	int opcion;
	do
	{
		system("cls");
		printf("\t\t-----------------MENU DE OPCIONES----------------------\n");
		printf("\t\t1.Ingresar los elementos\n");
		printf("\t\t2.Longitud del Vector\n");
		printf("\t\t3.Aplicar Algoritmo de Ordenamiento\n");
		printf("\t\t4.Mostrar los elementos\n");
		printf("\t\t5.Salir\n");
		printf("\t\tEscoja una opcion: ");
		scanf("%d",&opcion);
	}while(opcion <1 || opcion >5);
	return opcion;
}		

void mostrar(int a[], int n)
{
	int i=0;
	int mayor;
	int menor;
	menor=a[0];
	mayor=a[n-1];
	printf("\n\t*Mostrar elementos*\n\t");
	for(i=0; i<n; i++)
	{
		printf("\n\t%d", a[i]);
	}
	printf("\nElemento menor: %d",menor);
	printf("\nElemento mayor: %d",mayor);
}
void intercambiar(int& x, int&y){
	int aux=x;
	x=y;
	y=aux;
}

void Burbuja(int a[], int n){
	int i,j;
 	float aux;
 	for(i=1; i<n; i++)
     for(j=n-1; j>=i; j--)
         if(a[j-1]>a[j])
         {aux = a[j-1];
          a[j-1]=a[j];
          a[j]=aux;  
         }
}

void ord_BurbujaMejorado(int a[], int n){
	
	bool interruptor=true;
	int pasada, j;
	for(pasada = 0; pasada<n-1 && interruptor; pasada++){
		interruptor=false;
		for(j=0; j<n-pasada-1; j++)
			if(a[j] > a[j+1])
			{
				interruptor = true;
				intercambiar(a[j], a[j+1]);
			}
	}	
}

void ord_Intercambio(int a[],int n){
	int i, j;
	for (i=0; i<n-1;i++)
		for (j=i+1;j<n;j++)
		
		if(a[i]>a[j])
			{
				intercambiar(a[i],a[j]);
			}
}

void ord_Seleccion(int a[], int n){
	int i, j;	 
	int indiceMenor;
	 for (i = 0; i < n - 1; i++)
	 {
	 
	 indiceMenor = i;
	 
	 	for (j = i + 1; j < n; j++)
			 if (a[j] < a[indiceMenor])
	 			indiceMenor = j;
	
	 			if (i != indiceMenor)
	 				(intercambiar(a[i], a[indiceMenor]));
	 }
	 
}



