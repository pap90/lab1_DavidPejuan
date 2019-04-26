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
			       int bandera=0;
			       string 
			       for(i=1;i<=numper;i++){
				       //cout<<i<<endl;
				       if(i==numper){
					       if(valor==numper){
						       cout << "el numero es perfecto"<<endl;
					       }else{
						       cout<<"El numero no es perfecto"<<endl;
						       cout<<endl;
						       int j;
						       for(j=numper;j=0;j--){
							       int numimp=j;
							       while(){
							       }
						       }
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
