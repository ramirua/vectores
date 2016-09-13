#include <stdio.h>
#include <stdlib.h>
#define t 10

int main()
{
	int vect[t],i,par=0,impar=0,v[t],vector,vec[t];
	int mayor=-999999, menor=999999,ve[t],positivo=0,negativo=0,vecto[t],j,aux;
	
	//cargar un vector
	for(i=0;i<t;i++)
	{
		printf(" vector[%d] = ",i);
		scanf("%d",&vector);
	    vect[i]=vector;
		
	}
	//para imprimir el vector
    printf("\n los numeros almacenados son: ");
	for(i=0;i<t;i++)
	{
		printf(" %d ",vect[i]);
	}
	
	//numeros pares e impares
	for(i=0;i<t;i++)
	{
		if(vect[i]%2==0)
		{
			v[par]=vect[i];
			par++;
		}
		else
		{
			vec[impar]=vect[i];
			impar++;
		}	  
	}
	//imprimiendo pares e impares
	printf("\n los numeros pares son: ");
	for(i=0;i<par;i++)
	{
		printf(" %d",v[i]);
	}
	
	printf("\n los numeros impares son: ");
	for(i=0;i<impar;i++)
	{
		printf(" %d ",vec[i]);
	}
	
     //numero mayor y menor
     for(i=0;i<t;i++)
     {
     	if(vect[i]>mayor)
     	mayor=vect[i];
     	
     	else{
     		if(vect[i]<menor)
     		 menor=vect[i];
     	}
     }

	printf("\n\n el numero mayor es: %d",mayor);
		printf("\n el numero menor es: %d",menor);
		
		//numeros positivos y negativos
	for(i=0;i<t;i++)
	{
		if(vect[i]>1)
		{
			ve[positivo]=vect[i];
			positivo++;
		}
		else{
			if(vect[i]<1)
			{
				vecto[negativo]=vect[i];
				negativo++;
			}
		}
	}
    printf("\n\n los numeros positivos son: ");
    for(i=0;i<positivo;i++)
    {
    	printf(" %d",ve[i]);
    }
   
     printf("\n los numeros negativos son: ");
    for(i=0;i<negativo;i++)
    {
    	printf(" %d",vecto[i]);
    }
    
    //metodo de ordenacion
	  for(i=0;i<t;i++)
    {
    	for(j=0;j<t-1;j++)
    	{
    		if(vect[j]>vect[j+1])
    		{
    			aux=vect[j];
    			vect[j]=vect[j+1];
    			vect[j+1]=aux;
    		}
    	}
    }
    printf("\n los numeros de menor a mayor son: ");
    for(i=0;i<t;i++)
    {
    	printf("\n %d",vect[i]);
    }
      for(i=0;i<t;i++)
    {
    	for(j=0;j<t-1;j++)
    	{
    		if(vect[j]<vect[j+1])
    		{
    			aux=vect[j];
    			vect[j]=vect[j+1];
    			vect[j+1]=aux;
    		}
    	}
    }
    printf("\n los numeros de mayor a menor son: ");
    for(i=0;i<t;i++)
    {
    	printf("\n %d",vect[i]);
    }

	return 0;
}
