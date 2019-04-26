#include <iostream>
#include <string>
using namespace std;

int main(){
	int seleccion=0;
	string captcha; 
	while (seleccion!=4){
		cout << "1)captcha."<<endl
			<< "2)numero perfecto."<<endl
			<<"3)permutaciones."<<endl
			<< "Ingrese su seleccion:";
	       cin>> seleccion;
       cout<<endl;
       switch (seleccion){
	       case 1:
		       cout<<"Ingrese el captcha: ";
		       cin >> captcha;
		       cout <<endl;
		       int numero=0;
		       int i;
		       for(i=0;i<=captcha.length();i++){
			       if (i==captcha.length()){
				       int num1=captcha[i]-'0';
				       int num2=captcha[0]-'0';
				       if(num1==num2){
					       numero=numero+num1;
				       }
			       }else{
				      int num1=captcha[i]-'0';
				      int num2=captcha[i+1]-'0';
				      if(num1==num2){
					      numero=numero+num1;
				      }
			       }
		       }
		break;
       }
	}
}//fin main
