//Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int verificar_resposta(char verificacao[5])
{

    int s1, s2;
    int n1, n2, n3, n4, n5;

    s1 = stricmp("s", verificacao);
    s2 = stricmp("sim", verificacao);

    n1 = stricmp("n", verificacao);
    n2 = stricmp("nao", verificacao);
    n3 = stricmp("n�o", verificacao);
    n4 = stricmp("n�o", verificacao);
    n5 = stricmp("n�o", verificacao);

    if (s1 == 0 || s2 == 0)
    {
        return 1;
    }
    else if (n1 == 0 || n2 == 0 || n3 == 0 || n4 == 0 || n5 == 0)
    {
        return 0;
    }
}

int verificar_sintomas(int doenca, int contador)
{
    char verificacao[5];
    int resposta_invalida;

    do
    {
        resposta_invalida = 0;
        scanf(" %s", &verificacao);
        //Comparando e validando resposta
        int resposta = verificar_resposta(verificacao);

        if (resposta == 1)
        {
            //Soma Contador
            contador = contador + doenca;
        }

        else if (resposta == 0)
        {
            //Mant�m Contador
            contador = contador;
        }

        else
        { //Pede resposta v�lida
            dar_mensagem_erro(verificacao);
            resposta_invalida = 1;
        }

    } while (resposta_invalida);
    limpar_tela(); //Limpa tela
    return (contador);
}

int verificar_novo_teste()
{
    char verificacao[5];
    int resposta_invalida;

    do
    {
        resposta_invalida = 0;
        scanf(" %s", &verificacao);
        int resposta = verificar_resposta(verificacao);

        //Comparando e validando resposta
        if (resposta == 1)
        {
            return 1;
            limpar_tela(); //Limpa tela
        }

        else if (resposta == 0)
        {
            return 0;
        }

        else
        { //Pede resposta v�lida
            dar_mensagem_erro(verificacao);
            resposta_invalida = 1;
        }

    } while (resposta_invalida);
}

void dar_mensagem_erro(char verificacao[5])
{
    limpar_tela(); //Limpa tela
    printf("Op��o Inv�lida.");
    printf("\nVoc� digitou %s", verificacao);
    printf("\nDigite 's' ou 'sim' para positivo.");
    printf("\nDigite 'n','nao' ou 'n�o' para negativo.");
    printf("\nDigite sua resposta: ");
}

void mostrar_resultado(int contador)
{
    if (contador > 28)
    {
        printf("O Resultado foi: %d\nProvavelemente tem corona.\n", contador);
    }
    else if (contador >= 14 && contador <= 28)
    {
        printf("O Resultado foi: %d\nSuspeita de corona.\n", contador);
    }
    else if (contador < 14)
    {
        printf("O Resultado foi: %d\nProvavelemente n�o tem corona.\n", contador);
    }
}

void limpar_tela()
{
    system("cls");
}

void pausa()
{
    system("pause");
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252"); //Definindo linguagem

    //Declara��o de vari�veis

    //Gravidade
    int raro = 1;
    int as_vezes = 3;
    int comum = 5;
    int perigoso = 10;
    int nao_recomendado = 7;

    //Doen�as
    int febre = comum;
    int cansaco = as_vezes;
    int tosse = comum;
    int espirro = raro;
    int dor_corpo = as_vezes;
    int mal_estar = as_vezes;
    int coriza = raro;
    int dor_garganta = as_vezes;
    int diarreia = raro;
    int dor_cabeca = as_vezes;
    int falta_ar = as_vezes;
    int falta_paladar = comum;
    int falta_olfato = comum;

    //Situa��es
    int quarentena = nao_recomendado;
    int contato_corona = perigoso;

    int repetir_teste;

    do
    {
        //Contador de pontos
        int contador = 0;

        //Abertura Programa
        limpar_tela(); //Limpa tela
        printf("\nTeste Corona Limpclear.\n");
        printf("\nResponta com sinceridade para resultados mais confi�veis.\n");
        printf("\nDigite 's' ou 'sim' para positivo");
        printf("\nDigite 'n','nao' ou 'n�o' para negativo.\n\n");
        pausa();       //Pausa Programa
        limpar_tela(); //Limpa tela

        //Verificando sintomas

        //Febre
        printf("Voc� est� com Febre?: ");
        contador = verificar_sintomas(febre, contador);

        //Cansa�o
        printf("Voc� est� sentindo Cansa�o?: ");
        contador = verificar_sintomas(cansaco, contador);

        //Tosse
        printf("Voc� est� com Tosse?: ");
        contador = verificar_sintomas(tosse, contador);

        //Espirro
        printf("Voc� est� tendo Espirros?: ");
        contador = verificar_sintomas(espirro, contador);

        //Dores no corpo
        printf("Voc� est� com Dor No Corpo?: ");
        contador = verificar_sintomas(dor_corpo, contador);

        //Mal Estar
        printf("Voc� est� sentindo Mal Estar?: ");
        contador = verificar_sintomas(mal_estar, contador);

        //Coriza
        printf("Voc� est� com Coriza?: ");
        contador = verificar_sintomas(coriza, contador);

        //Dor de Garganta
        printf("Voc� est� com Dor de Garganta?: ");
        contador = verificar_sintomas(dor_garganta, contador);

        //Diarreia
        printf("Voc� est� com Diarreia?: ");
        contador = verificar_sintomas(diarreia, contador);

        //Dor de Cabe�a
        printf("Voc� est� com Dor de Cabe�a?: ");
        contador = verificar_sintomas(dor_cabeca, contador);

        //Falta de Ar
        printf("Voc� est� com Falta de Ar?: ");
        contador = verificar_sintomas(falta_ar, contador);

        //Falta de Paladar
        printf("Voc� est� com Falta de Paladar?: ");
        contador = verificar_sintomas(falta_paladar, contador);

        //Falta de Olfato
        printf("Voc� est� com Falta de Olfato?: ");
        contador = verificar_sintomas(falta_olfato, contador);

        //Verificando situa��es

        //Respeita Quarentena
        printf("Voc� est� furando a quarentena?: ");
        contador = verificar_sintomas(quarentena, contador);

        //Contato Corona
        printf("Voc� teve contato com algu�m que teve ou tem corona?: ");
        contador = verificar_sintomas(contato_corona, contador);

        mostrar_resultado(contador); //Resultado

        printf("\nDeseja realizar novo teste?: ");
        repetir_teste = verificar_novo_teste();

    } while (repetir_teste == 1);
}
