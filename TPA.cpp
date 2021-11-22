#include <iostream>

using namespace std;

int main() {
	
	int aluno, nota, notas;
	
	int x = 0;
	
	int maior = 0;
 
 	int menor = 10;
 
	
	cout << "Irei cacular a media da sua turma e mostrar a menor e maior nota (obs: so vale notas de 0 a 10) " << endl ;
	
	cout << "Insira o numero de alunos: ";
	cin >> aluno;
	
	while (aluno > x) {
	
		x = x + 1;
		
		cout << "Insira a nota do aluno: ";
		cin >> nota;
	
		notas = notas + nota;
		
		while (nota < 0 or nota > 10){
			
			cout << "Insira uma nota entre 0 e 10: ";
			cin >> nota;
	
		}
		
		if (nota > maior) {
	    maior = 0;
	    maior = maior + nota;
	    
	    }
	  
		if (menor > nota) {
	    menor = 0;
	    menor = menor + nota;
 
		}
	
	}
	
	float media = notas/aluno;
	
	cout << "Media da turma: " << media << endl;
	
	cout << "Menor nota: " << menor << endl;
	
	cout << "Maior nota: " << maior << endl;
	
	return 0;
  
}
