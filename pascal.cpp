#include<iostream>
#include<iomanip>
using std::cout; 
using std::cin; 
using std::endl; 
using std::setw; 
 

int factoriall(int); 
int combinatorio(int,int);
void imprimir(int);
int printbinomio(int); 

int main(int argc, char*argv[]){
	int numero,nomio; 
	int op; 
	cout<<"Ingrese el Numero del ejercicio que desea:\n"
		<<"1. Triangulo de pascal. \n2. Binomio de newton."
		<<endl; 
		cin>>op;
	if(op==1){
		 
		cout<<"Ingrese el Numero limite: ";
		cin>>numero; 
		imprimir(numero);
		cout<<endl; 
	}
	if (op==2){

		cout<<"Ingrese el Numero limite para el Binomio: "; 
		cin>>nomio; 
		cout<<endl; 
		printbinomio(nomio); 

	}

	return 0; 
}

int factorial(int n){

	if(n==0 ||n==1){
		return 1; 
	}
	else{

		return n*factorial(n-1); 
	}
}

void imprimir(int m){
	int setcontroler=40;
	cout<<setw(setcontroler); 
	for (int i = 0; i < m; i++){
		for (int j = 0; j<=i; j++){
				cout<<combinatorio(i,j)<<"    "; 
						
		}
		cout<<endl;
		setcontroler-=3;  
		cout<<setw(setcontroler);
		
	}

}

int combinatorio(int i, int j){

	if (i==j)
	{
		return 1; 
	}
	else{

		return (factorial(i))/((factorial(j))*(factorial(i-j)));
	}

}

int printbinomio(int n){
	for (int i = 0; i <= n; i++){
		
		if (i!=n){
			cout<<combinatorio(n,i)<<"a^"<<n-i<<"b^"<<i
			<<" + "; 			
		}
		else{
			cout<<combinatorio(n,i)<<"a^"<<n-i<<"b^"<<i;
		}
		
			
	}
	cout<<endl; 

}