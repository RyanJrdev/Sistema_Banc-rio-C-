#include <iostream>
#include <locale.h>

using namespace std;


int main (){
setlocale(LC_ALL,"Portuguese");

int opcao;

double saldo,saque,deposito,saldo_atual,novo_saldo;

cout << "---------Bem vindo ao Banco C++------------" << "\n\n";

cout << "Digite o saldo da conta: R$\n";
cin >> saldo_atual;

cout << "Selecione qual opera��o deseja Realizar em sua Conta Banc�ria:\n\n";

while(opcao!=4){

cout << "1-Saque:\n"; 
cout << "2-Dep�sito:\n";    
cout << "3-Visualizar Saldo Banc�rio:\n";    
cout << "4-Sair:\n";  
cin >> opcao;   
		
 switch (opcao){

 case 1:
 	
 	cout << "Digite o valor do saque: \n";
 	cin >> saque;
 		
 	if (saque>saldo_atual){
 		cout << "Saldo para saque indispon�vel!\n";
 	}else{
		saldo_atual-=saque;
		cout << "Seu saque foi realizado com sucesso, o valor que tem em sua conta � de: R$" << saldo_atual << "\n\n";
		break;
};               	

case 2:
    cout << "Seu saldo atual � de: R$" << saldo_atual << ", " << "Qual valor deseja dep�sitar?";
	cin >>deposito;
	saldo_atual+=deposito;
	system("cls");
    cout << "Seu dep�sito foi realizado com sucesso, o valor que tem em sua conta � de: R$" << saldo_atual << "\n";
    break;
case 3:
	
	cout << "Seu Saldo atual � de : R$" << saldo_atual << "\n\n";
	break;
case 4:
	cout << "--------------Obrigado por Ultilizar Nosso Sistema Banc�rio!!----------------\n\n";
	system("pause");
	break;
default:
	system("cls");
	cout <<"Op��o Inv�lida. Tente Novamente.\n\n";
	break;
		
						
 }; 
};

system ("pause");
return 0; 
};
