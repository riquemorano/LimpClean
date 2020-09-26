/* PROJETO CIÊNCIA DA PROGRAMAÇÃO
	3ºSEMESTRE
	BY: KAIO FELIPE
*/	 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Dados dos clientes
struct cadastro_cliente{
	
	char nome_cliente[50];
	char CPF[50];
	int cod;
	char rua[50];
	char bairro[50];
	int num_casa;	
	char complemento[50];
	char estado[3];
	char cidade[20];
	
}cad_cliente[1000];

//Dados dos produtos
struct produto_c{
	float preco;
	int cod;
	char descricao[100];
	char nome_p[50];
	int qtd;
	float lucro;
	
}produto[1000];

//Contadores Globais
int contador = 1, contador_p = 1, contador_cliente = 1, contador_produto = 1;

int main(void){

setlocale(LC_ALL, "Portuguese");	
int opcao, opcao2, opcao3;
int cadastro_sistema, produto_sistema;
int i;
	//Menu ultilizando as funções
	while(1){
		system("cls");
		printf("\t\t\tBEM VINDO(a) AO SISTEMA DA LIMPCLEAR\n\n");
	
		void menu_principal(void);
		menu_principal();
		
		printf("\nDigite a opção desejada: ");
		scanf("%d", &opcao);
		printf("\n\n");
		
		switch(opcao){
			
			case 1:
				
				cadastro_sistema = 1;
				
				while(cadastro_sistema == 1){
				
					system("cls");
					printf("\t\t\tSISTEMA DE CADASTRO DE CLIENTES\n\n");
					void menu_cadastro(void);
					menu_cadastro();
					
					printf("\nDigite a opção desejada: ");
					scanf("%d", &opcao2);
					printf("\n\n");
					
					switch(opcao2){
						
						case 1:
							
							system("cls");
							printf("\t\t\tCADASTRO DE CLIENTES\n\n");
							void cadastro_cliente(void);
							cadastro_cliente();
							
						continue;
						
						case 2:
							
							system("cls");
							printf("\t\t\tLISTAR CLIENTES\n\n");
							void cadastro_listar(void);
							cadastro_listar();
							system("pause");
						
						continue;
						
						case 3:
							
							system("cls");
							printf("\t\t\tEXCLUIR CLIENTE\n\n");
							void cadastro_excluir(void);
							cadastro_excluir();
						
						continue;
						
						case 4:
							
							system("cls");
							printf("\t\t\tALTERAR DADOS\n\n");
							void cadastro_alterar(void);
							cadastro_alterar();
							
						continue;
						
						case 5:
							
							system("cls");
							printf("\t\t\tPROCURAR CADASTRO\n\n");
							void cadastro_procurar(void);
							cadastro_procurar();
														
						continue;
						
						case 6:
							
							cadastro_sistema = 2;
							
						continue;
						
						default:
							
							printf("Insira uma opção válida!!!\n\n");
							system("pause");
							
						continue;		
									
					}
							
				}
				
			continue;
			
			case 2:
			produto_sistema = 1;	
					
				while(produto_sistema == 1){
					
					system("cls");	
					printf("\t\t\tSISTEMA DE PRODUTOS\n\n");	
					void menu_produto(void);
					menu_produto();
					
					printf("Digite a opção desejada: ");
					scanf("%d", &opcao3);
					printf("\n\n");
					
					switch(opcao3){
						
						case 1:
							
							system("cls");	
							printf("\t\t\tCADASTRO DE PRODUTOS\n\n");
							void cadastro_produto(void);
							cadastro_produto();
						
						continue;
						
						case 2:
							
							system("cls");	
							printf("\t\t\tLISTAR PRODUTOS\n\n");
							void produto_listar(void);
							produto_listar();
							system("pause");
						
						continue;
						
						case 3:
							
							system("cls");	
							printf("\t\t\tVENDA DE PRODUTOS\n\n");
							void produto_vender(void);
							produto_vender();
													
						continue;						
						
						case 4:
							
							system("cls");	
							printf("\t\t\tREESTOQUE\n\n");
							void produto_reestoque(void);
							produto_reestoque();
							
						continue;
						
						case 5:
							
							printf("\t");
							void produto_lucro (void);
							produto_lucro ();
						
						continue;
						
						case 6:
							
						produto_sistema = 2;

						continue;	
						
						default:
							
							printf("Insira opção válida!!!\n\n");
							system("pause");
						
						continue;		
					}
				}
				
			continue;
			
			case 3:
			
				return 0;			
			
			continue;
			
			default:
			
				printf("Insira opção válida!!!\n\n");
				system("pause");
			
			continue;		
		}
	}
}
//Função para menu principal
void menu_principal(void){

	printf("\t\t\t[1. Sistema de cadastro.]\n");
	printf("\t\t\t[2. Sistema de estoque e vendas.]\n");
	printf("\t\t\t[3. Encerrar sistema.]\n");

}
//Função para menu do sistema de clientes
void menu_cadastro(void){
int opcao;
	
	printf("\t\t\t[1] Cadastrar novo cliente.\n");
	printf("\t\t\t[2] Listar clientes cadastrados.\n");
	printf("\t\t\t[3] Excluir um cliente.\n");
	printf("\t\t\t[4] Alterar dados do cliente.\n");
	printf("\t\t\t[5] Procurar cliente.\n");
	printf("\t\t\t[6] Voltar pro sistema principal.\n");
	
}
//Função para cadastrar clientes
void cadastro_cliente(void){
	
int i , opcao = 1;

	while(opcao == 1){
		
		i = contador;
		cad_cliente[i].cod = contador;
		
		printf("Insira nome: ");
		fflush(stdin);
		gets(cad_cliente[i].nome_cliente);
		
		printf("Insira CPF: ");
		fflush(stdin);
		gets(cad_cliente[i].CPF);
		
		printf("Insira rua: ");
		fflush(stdin);
		gets(cad_cliente[i].rua);
		
		printf("Insira número da residência: ");
		scanf("%d", &cad_cliente[i].num_casa);
		
		printf("Insira complemento (opcional): ");
		fflush(stdin);
		gets(cad_cliente[i].complemento);
		
		printf("Insira bairro: ");
		fflush(stdin);
		gets(cad_cliente[i].bairro);
		
		printf("Insira cidade: ");
		fflush(stdin);
		gets(cad_cliente[i].cidade);
		
		printf("Insira Estado: ");
		fflush(stdin);
		gets(cad_cliente[i].estado);
		
		i++;
		contador++;
		contador_cliente++;
		
		printf("\n\nDeseja inserir mais clientes?\n");
		printf("1 - Sim    2 - Nao\n");
		scanf("%d", &opcao);
		printf("\n");
	}
}

//Função para listar todos os clientes na tela
void cadastro_listar(void){	

int i;

	for(i = 0; i < contador; i++){
		if(cad_cliente[i].cod > 0){		
		
		printf("\nNome: %s\n", cad_cliente[i].nome_cliente);
		printf("CPF: %s\n", cad_cliente[i].CPF);
		printf("Código: %d\n", cad_cliente[i].cod);
		printf("Endereço: %s - %d - %s\n", cad_cliente[i].rua, cad_cliente[i].num_casa, cad_cliente[i].complemento);
		printf("Bairro: %s\n", cad_cliente[i].bairro);
		printf("Estado: %s\n", cad_cliente[i].estado);
		printf("Cidade: %s\n", cad_cliente[i].cidade);
	
		}
	}
}

//Função para remover um cliente
void cadastro_excluir(void){

char e_cod;
int i, contadorfor = 0;	
	printf("Digite Código do cliente que deseja excluir: ");
	scanf("%d", &e_cod);
	
	for(i = 1; i <= contador; i++){
		contadorfor++;
		if(cad_cliente[i].cod == e_cod){
		
			cad_cliente[i].cod = cad_cliente[i].cod - 99999;
			printf("Código excluído!!\n\n");
			system("pause");
			break;
		
		}else if(contadorfor == contador_cliente){
			printf("Código não cadastrado!!\n\n");
			system("pause");
		}
	}
}

//Função para modificar os dados de um cliente
void cadastro_alterar(void){
	
char a_cpf[50];
int i, opcao, contadorfor = 0;



	printf("Digite CPF do cliente para alteração de dados: ");
	fflush(stdin);
	gets(a_cpf);
	
	
	for(i=0 ; i < contador; i++){
	contadorfor++;
		if(strcmp (a_cpf, cad_cliente[i].CPF) == 0){
			
			printf("O que deseja alterar?\n\n");
			printf("\t\t\t[1] Nome\n");
			printf("\t\t\t[2] CPF\n");
			printf("\t\t\t[3] Rua\n");
			printf("\t\t\t[4] Número da residência\n");
			printf("\t\t\t[5] Complemento\n");
			printf("\t\t\t[6] Bairro\n");
			printf("\t\t\t[7] Estado\n");
			printf("\t\t\t[8] Cidade\n");
			printf("\t\t\t[9] Cancelar\n");
			scanf("%d", &opcao);
			
			if(opcao == 1){
				
				printf("\nInsira nome: ");
				fflush(stdin);
				gets(cad_cliente[i].nome_cliente);
				
			}else if(opcao == 2){
				
				printf("Insira CPF: ");
				fflush(stdin);
				gets(cad_cliente[i].CPF);
				
			}else if(opcao == 3){
				
				printf("Insira rua: ");
				fflush(stdin);
				gets(cad_cliente[i].rua);
				
			}else if(opcao == 4){
				
				printf("Insira número da residência: ");
				scanf("%d", &cad_cliente[i].num_casa);
				
			}else if(opcao == 5){
			
				printf("Insira complemento: ");
				fflush(stdin);
				gets(cad_cliente[i].complemento);	
				
			}else if(opcao == 6){
				
				printf("Insira bairro: ");
				fflush(stdin);
				gets(cad_cliente[i].bairro);
				
			}else if(opcao == 7){
				
				printf("Insira cidade: ");
				fflush(stdin);
				gets(cad_cliente[i].cidade);		
			
			}else if(opcao == 8){
				
				printf("Insira Estado:");
				fflush(stdin);
				gets(cad_cliente[i].estado);
				
			}else if(opcao == 9){
				
				continue;
				
			}else{
				printf("Operação Inválida!!\n\n");
				system("pause");
			}
			
		}else if(contadorfor == contador_cliente){
			printf("CPF não cadastrado!!\n\n");
			system("pause");
		}
	}
}

//Função para procurar um cliente no sistema
void cadastro_procurar(void){

char p_cpf[50];
int i, contadorfor = 0;
	
	printf("Digite o CPF que deseja procurar: ");
	fflush(stdin);
	gets(p_cpf);
	
	for(i = 0; i < contador; i++){
	contadorfor++;
		if(strcmp(p_cpf, cad_cliente[i].CPF) == 0){
			if(cad_cliente[i].cod > 0){
			
			printf("\nNome: %s\n", cad_cliente[i].nome_cliente);
			printf("Código: %d\n", cad_cliente[i].cod);
			printf("Endereço: %s - %d - %s\n", cad_cliente[i].rua, cad_cliente[i].num_casa, cad_cliente[i].complemento);
			printf("Bairro: %s\n", cad_cliente[i].bairro);
			printf("Estado: %s\n", cad_cliente[i].estado);
			printf("Cidade: %s\n", cad_cliente[i].cidade);
			
			system("pause");
			}
		}else if(contadorfor == contador_cliente){
			printf("CPF não cadastrado!!\n\n");
			system("pause");
			
		}

	}
}

//Função para mostrar menu do sistema de produtos
void menu_produto(void){
					
	printf("\t\t\t[1. Adicionar um produto.]\n");
	printf("\t\t\t[2. Listar produtos cadastrados.]\n");
	printf("\t\t\t[3. Vender um produto.]\n");
	printf("\t\t\t[4. Reabastecer estoque.]\n");
	printf("\t\t\t[5. Mostrar Lucro.]\n");
	printf("\t\t\t[6. Voltar para o menu principal.]\n\n");
	
}

//Função para cadastrar um produto
void cadastro_produto(void){
int i = contador_p, opcao = 1;

	while(opcao == 1){
										
		produto[i].cod = contador_p;
											
		printf("Nome do produto: ");
		fflush(stdin);
		gets(produto[i].nome_p);
											
		printf("Quantidade em estoque: ");
		scanf("%d", &produto[i].qtd);
											
		printf("Preço do produto: ");
		scanf("%f", &produto[i].preco);
																			
		printf("Descrição do produto: ");
		fflush(stdin);
		gets(produto[i].descricao);
																		
		i++;
		contador_p++;
		contador_produto++;
											
		printf("\nDeseja cadastrar mais produtos?\n");
		printf("1 - Sim     2 - Não\n");
		scanf("%d", &opcao);
		printf("\n");
										
	}
}

//Função para listar todos os produtos cadastrados
void produto_listar(void){
int i;
		
	for(i = 0; i < contador_p; i++){
		if(produto[i].cod > 0 && produto[i].cod <= contador_p){
																	
		printf("Produto: %s\nQtd: %d\n" , produto[i].nome_p, produto[i].qtd);
		printf("Código: %d\nPreço: %.2f\n", produto[i].cod, produto[i].preco);
		printf("Descrição: %s\n\n", produto[i].descricao);
		
		}
	}	
}

//Função para venda dos produtos
void produto_vender(void){
int i, venda, vendido, contadorfor = 1;
									
	for(i = 0; i < contador_p ; i++){
		if(produto[i].cod > 0 && produto[i].cod < contador_p ){
												
			printf("\t\t\t[%d. %s - %d]\n", produto[i].cod, produto[i].nome_p, produto[i].qtd);
		}
	}
	printf("\t\t\t[0. Cancelar]\n\n");
	printf("Qual produto deseja vender?\n");
	scanf("%d", &venda);
	
	for(i = 0; i < contador_p; i++){
		if(venda == produto[i].cod && venda != 0){
			
			printf("\nQuantas unidades deseja?\n");
			scanf("%d", &vendido);
			
			if(produto[i].qtd >= vendido){
				
				produto[i].qtd = produto[i].qtd - vendido;
				produto[i].lucro = produto[i].lucro + produto[i].preco * vendido;
				printf("\nProduto vendido.\n");
				system("pause");
				break;
				
			}else{
				
				printf("Produto em falta!!");
				system("pause");
				break;
				
			}	
		}else if (venda == 0){
			
			break;
			
		}else if(contadorfor >= contador_produto){
			
			printf("Opção inválida!!\n");
			system("pause");
			break;
		}
		contadorfor++;
	}																
}

//Função para adicionar produtos ja existentes 
void produto_reestoque(void){
int i, opcao_p, reabastecer, contadorfor = 1;
	
	for(i = 0; i < contador_p; i++){
		if(produto[i].cod > 0 && produto[i].cod < contador_p ){
										
			printf("\t\t\t[%d. %s. Qtd: %d]\n", produto[i].cod, produto[i].nome_p, produto[i].qtd);	
		}
	}
	printf("\t\t\t[0. Cancelar]\n\n");
	printf("Qual produto deseja reabastecer?\n");								
	scanf("%d", &opcao_p);

	for(i = 0; i < contador_p; i++){
		if(opcao_p == produto[i].cod && opcao_p != 0){
										
			printf("Quantas unidades será reabastecida?\n");
			scanf("%d", &reabastecer);
										
			produto[i].qtd = produto[i].qtd + reabastecer;
			printf("\nProduto reabastecido.\n");
			system("pause");
			break;

		}else if (contadorfor >= contador_p){
											
			printf("\nOpção inválida!!\n");
			system("pause");
			break;
			
		}else if(opcao_p == 0){
			
			break;
		}
	contadorfor++;	
	}
}

//Função para mostrar as vendas gerada por vendas
void produto_lucro (void){
system("cls");
int i;
float total;
	printf("\t\tTABELA DE LUCROS\n\n");
	for(i = 1; i < contador_p; i++){

		printf("Produto: %s\tVendas: %.2f\n",produto[i].nome_p, produto[i].lucro);
	}
	
	for(i = 1; i < contador_p; i++){
		
		total = total + produto[i].lucro;
	}
	printf("\nVendas totais: %.2f\n\n", total);
	system("pause");
}

