#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int seleccion=0;
	string captcha; 
	while (seleccion!=4){
		cout << "1)Captcha."<<endl
			<< "2)Numero perfecto."<<endl
			<<"3)Permutaciones."<<endl
			<<"4)Salir"<<endl
			<< "Ingrese su seleccion:";
	       cin>> seleccion;
       cout<<endl;
       switch (seleccion){
	       case 1:{
		       cout<<"Ingrese el captcha: ";
		       cin >> captcha;
		       cout <<endl;
		       int numero=0;
		       int i;
		       for(i=0;i<captcha.length();i++){
			       if (i==captcha.length()-1){
				       cout<<"entro"<<endl;
				       int num1=captcha[i]-'0';
				       cout << captcha[i] << endl;
				       cout<<num1<<endl;
				       int num2=captcha[0]-'0';
				       cout<<num2<<endl;
				       if(num1==num2){
					       cout<<"entro 2"<<endl;
					       numero=numero+num1;
				       }//fin if
			       }else{
				      int num1=captcha[i]-'0';
				      int num2=captcha[i+1]-'0';
				      if(num1==num2){
					      numero=numero+num1;
				      }//fin if
			       }//fin else
		       }//fin for
		       cout<<"El numero es: "<<numero<<endl;
		      }
		       break;
		case 2:{
			       cout <<"Ingrese el numero: ";
			       int numper=0;
			       cin >> numper;
			       cout<<endl;
			       int i;
			       int valor=0;
			       for(i=1;i<=numper;i++){
				       //cout<<i<<endl;
				       if(i==numper){
					       if(valor==numper){
						       cout << "el numero es perfecto"<<endl;
					       }else{
						       cout<<"El numero no es perfecto"<<endl;
						       cout<<endl;
						       int j;
						       int contador=0;
						       
						       for(j=1;j<=numper;j++){
							       int valor2=0;
							       int j2;
							       for(j2=1;j2<=j;j2++){
								       if(j2==j){
								       if(valor2==j2){
									       contador++;
								       }}else{
									       if((j%j2)==0){
										       valor2=valor2+j2;
										       //cout<<"Valor2: "<<valor2<<endl;
									       }
								       }
							       }//fin for
						       }//
						       //cout<<"el contador quedo en: "<<contador<<endl;
						       contador=contador-1;
						       int numerosper[contador];
						       int k;
						       int bandera=0;
						       for(k=1;k<=numper;k++){
                                                               int valor3=0;
                                                               int j3;
                                                               for(j3=1;j3<=k;j3++){
                                                                       if(j3==k){
                                                                       if(valor3==j3){
                                                                               numerosper[bandera]=k;
									       bandera++;
                                                                       }}else{
                                                                               if((k%j3)==0){
                                                                                       valor3=valor3+j3;
                                                                                       //cout<<"Valor2: "<<valor2<<endl;
                                                                               }
                                                                       }
                                                               }//fin for
                                                       }//
						       cout<<" el numero perfecto mas cercano es: "<<numerosper[contador]<<endl;
						       cout<< "Sus factores son: ";
						       int t;
						       int numerocer=numerosper[contador];
						       cout<<"el numero es: "<<numerosper[contador]<<endl;
						       for(t=1;t<numerocer;t++){
							       if(numerocer%t==0){
								       cout<<t<<" ";
							       }
						       }
						       cout<<endl;


					       }
				       }else{
					       if((numper%i)==0){
						       valor=valor+i;
						       
					       }
				       }
			       }
		       }
		       break;
		default:{

			}
       }
	}
}//fin main
