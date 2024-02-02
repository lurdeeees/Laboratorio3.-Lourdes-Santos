#include <iostream>

using namespace std;

int operadoresyvariables(){
    float  v1, v2, l1, l2, l3, l4; //Se declaran variables de valor float por que ya sea que los valores que se guarden sean valores enteros
    //o sean decimales que ingresen el usuario, es preferible para los ejercicios a desarrollar usar de tipo float. Pata desarrollar mejor los ejercicios. 
    
    cout<<"Ingresar dos numeros enteros \n";
    cout<<"Valor 1: ";
    cin>>v1; //concatenacion del valor a la variable v1
    cout<<"Valor 2: ";
    cin>>v2; //concatenacion del valor a la variable v2
    l1 = v1 + v2;
    l2 = v1 - v2;
    l3 = v1 * v2;
    l4 = v1 / v2;  //Se realizan las operaciones anteriormente con las variables 

    cout<<"Resultados de las operaciones \n";
    cout<<"1. Suma: "<<v1<<          "+"<<v2<<"="<<l1<<"\n"; //En esta seccion se llega a concatenar las operaciones hechas anteriormente con textos para que sean mejor entendidos. 
    cout<<"2. Resta: "<<v1<<         "-"<<v2<<"="<<l2<<"\n"; //contatenando las variables declaradas anteriormente. 
    cout<<"3. Multiplicasion: "<<v1<<"*"<<v2<<"="<<l3<<"\n";
    cout<<"4. Divicion: "<<v1<<      "/"<<v2<<"="<<l4<<"\n";
    
	system("PAUSE");
	system("cls");
	return 0;
	}
	
int calcularPotencia(){ //En este programa se utiliza para calcular la potencia de un valor ingresado por el usuario
	int n1;
	int e2;
	float resultado = 1; //Variables a utilizar de tipo entero y float
	
	cout<<"Porfavor ingresar un numero entero y luego su exponente \n";
    cout<<"Numero Base: ";
    cin>>n1;
    cout<<"Exponente: ";
    cin>>e2;
    
    if (e2 == 0){ 
	/*Se inicia un ciclo if para evaluar distintas situaciones. En la primera tiene parametros que se evalua si la variable del exponente sea igual a 0. Si es asi su
	resultado sera igual a 1. Concatenando los valores de las variables declaradas.
    */
		resultado = 1;
    	cout<<"el valor "<<n1<<" elevado a "<<e2<<" es igual a "<<resultado<<"\n";
	}else if(e2 < 0){ // Un else if es para saber si en caso el if no se cumple se ejecuta esta parte que es un ciclo for con parametros que evalua la variable del numero base por el resultado
	//este resultado pasa a dividirse en 1. Esto es para ver cuando el exponente sea meno a 0 y si es mayo a cero para a ejecutarse al siguiente else if. 
		for(int i=0;i>e2;i--){
			resultado = n1*resultado;
		}
		resultado = 1/resultado;
		cout<<"el valor "<<n1<<" elevado a "<<e2<<" es igual a "<<resultado<<"\n";
	}else if(e2 > 0){
		for(int i=0;i<e2;i++){
			resultado = n1*resultado;
		}
		cout<<"El numero "<<n1<<" elevado a "<<e2<<" es igual a "<<resultado<<"\n";
	}
	
	system("PAUSE"); //Se toma una pausa para que el usuario tenga un momento para presionar una tecla pase al menu de opciones. 
	system("cls"); //limpieza de consola.
    return 0; //indica que el programa haya terminado y se cumplio con las condiciones declaradas antes.
}

int esPrimo(){ //en este programa se conoce si el numero ingresado es primo o no
	int num; //declarando variables de tipo entero
	cout<<"Ingresar numero entero para saber si es primo o no \n";
    cout<<"Numero entero: ";
    cin>>num; //se concatena el valor en la variable num
    
    if(num == 1 or num == 0  or num < 0){ // en este ciclo if tiene varios parametros declarados utilizando operadores logicos, si num == 1 usando el operador logico or evaluza tambien si numero sea igual 
    // a cero o num menor a 0 pueda entrar al ciclo como primera respuesta es que sea un numero primo. 
    	cout<<"No es un numero primo\n";
		}else if(num==2 or num==3){ //Si no se cumple con la condicion de arriba, para a tener parametros evaluando entre los valores 2 y 3 si cumple son numero primos
			cout<<"Es un numero primo\n";
			return 0;
			}else {for(int i=2;i<num;i++){
			if(num%i == 0){
			cout<<"No es un numero primo\n";
			return 0;
			}}}
			
	if (num%1 == 0 and num%num == 0){
		cout<<"Es un numero primo\n";
	}
	
	system("PAUSE");
	system("cls");
	return 0;
}

int esBisiesto(){ //En este programa se realiza las operaciones para saber si es un año bisiesto 
	int a; //variable de tipo entero para identificar el año 

	cout<<"Coloque un año para verificar si es bisiesto o no\n";
	cin>>a;
	if (a%100 == 0 and a%400==0){//en este ciclo if usando los operadores logicos evaluando la variable a % 100 igualando a 0 y el parametro con la variable a dividiendo los 400 que es 
	// la formula para saber si es un año bisiesto o no.
		cout<<"El año ingresado es bisiesto\n";
	} else if(a%100 == 0){ //evaluando si la condicion pasada no es cierta o no se cumple, el año ingresado 
		cout<<"El año ingresado no es bisiesto\n"; //No seria bisiesto
	}else if(a%4 == 0){
		cout<<"El año es bisiesto\n";
	}else{
		cout<<"El año no es bisiesto\n";
	}
	system("PAUSE");
	system("cls");
	return 0;
}
int main(){ //En este menu principal se va a utilizar un ciclo while donde su parametros sea 1=1
    
    int opcion; // sus variables de tipo entero
    
	while (1==1)
		{
			cout<<"Que deseas realizar: \n 1. Operadores y Variables \n 2. Potencias \n 3. Primos \n 4. año bisiesto \n 5. salir \n"; //Se escribe el menu de opciones de los ejercicios.
			cin>>opcion; //compilando la respuesta en la variables opcion. 
			switch (opcion) //Se agrego un switch que sirve para un control de selección permitiendo que el valor de una variable o expresión sea una búsqueda o mapa en el programa
			{
			case 1:
				operadoresyvariables(); //Se manda a llamar el nombre de las funciones anteriormente programadas.
				break;
			
			case 2:
				calcularPotencia();
				break;
		
			case 3:
				esPrimo();
				break;
		
			case 4:
				esBisiesto();
				break;
		
			case 5:
				exit(EXIT_SUCCESS);	
				break;
			}
		}
	return 0; //indica que el programa haya terminado y se cumplio con las condiciones declaradas antes.
}