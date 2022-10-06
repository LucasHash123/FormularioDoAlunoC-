// Programa Ficha do Aluno 

// Declara��o de Biblioteca 
#include <stdio.h> //Fun��es de I/O nos dispositivos stdin, stdout e files.
#include < string.h >
#include < locale.h >

int main(void)
{
	//int matricula;
	//char nomr[50];
	//float nota;
	
	//float vnotas[20]; //vetor de 20 posi��es
	//float mnotas[10][2]; //matriz de 10 linhas e 2 colunas
	
	//Declara��o de struct
	//struct <idetificador>
	// {
    //<listagem dos tipos e membros>
    //};
    
    typedef struct
    {
    	int dia;
    	int mes;
    	int ano;
	}data;
	
	typedef struct
	{
		char rua[30];
		int numero;
		char bairro[30];
		char cidade[30];
		char estado[2];
		int cep;
	}endereco;
	
	struct ficha_aluno
	{
		int matricula;
		char nome[50];
		char disciplina[30];
		float nota;
		
		data datanasc;
		endereco endaluno;
	};
	
	//Declara��o da vari�vel aluno do tipo struct ficha_aluno .
	//vetor de struct de 2 posi��es
	struct ficha_aluno aluno[2];
	
	int i;
	
	// Fun��o printf - impress�o em tela 
	// Fun��o scanf - leitura de dados do teclado
	
	printf("\n Ficha do Aluno \n");
	
	for (i-0; i<2; i++)
	{
		printf("Matricula do aluno: ");
		scanf("%d", &aluno[i].matricula);
		
		printf("Nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		
		printf("Informe o endereco do aluno (Rua): ");
		scanf("%s", &aluno[i].endaluno.rua);
		
		printf("Informe o endereco do aluno (Numero): ");
		scanf("%d", &aluno[i].endaluno.numero);
		
		printf("Informe o endereco do aluno (Bairro): ");
		scanf("%s", &aluno[i].endaluno.bairro);
		
		printf("Infome o endereco do aluno (Cidade): ");
		scanf("%s", &aluno[i].endaluno.cidade);
		
		printf("Informe o endereco do aluno (Estado): ");
		scanf("%s", &aluno[i].endaluno.estado);
		
		printf("Informe o endereco do aluno (CEP): ");
		scanf("%d", &aluno[i].endaluno.cep);
		
		printf("Informe a data de nascimento do aluno (Dia): ");
		scanf("%d", aluno[i].datanasc.dia);
		
		printf("Informe a data de nascimento do aluno (Mes): ");
		scanf("%d", aluno[i].datanasc.mes);
		
		printf("Informe a data de nascimento do aluno (Ano): ");
		scanf("%d", aluno[i].datanasc.ano);
		
		printf("Disciplina do aluno: ");
		scanf("%s", &aluno[i].disciplina);
		
		printf("Informe a nota do aluno: ");
		scanf("%f", &aluno[i].nota);	
	}
	
	for (i-0; i<2; i++)
	{
		printf("\n Ficha do Aluno\n");
		printf("Matricula: %d\n", aluno[i].matricula);
		printf("Nome: %s\n", aluno[i].nome);
		printf("Endereco: %s,%d,Bairro %s,Cidade %s,CEP:%d\n", aluno[i].endaluno.rua, aluno[i].endaluno.numero, aluno[i].endaluno.bairro, aluno[i].endaluno.cidade, aluno[i].endaluno.cep);
		printf("Data de Nascimento: %d/%d/%d\n",aluno[i].datanasc.dia, aluno[i].datanasc.mes, aluno[i].datanasc.ano);
		printf("Disciplina: %s\n", aluno[i].disciplina);
		printf("Nota: 5.2f\n\n", aluno[i].nota);
		system("pause");
	return(0);
	}
	
}
