#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarManual()
{
    printf("\n========================================\n");
    printf("             📘 MANUAL DO JOGO\n");
    printf("========================================\n\n");

    printf("🎯 Objetivo:\n");
    printf("Ser o partido com mais pontos ao final das rodadas.\n\n");

    printf("🎮 Como funciona:\n");
    printf("- 4 jogadores escolhem partidos\n");
    printf("- O jogo tem 5 rodadas\n");
    printf("- Cada jogador faz uma ação por turno\n");
    printf("- As ações podem falhar ou ter sucesso\n\n");

    printf("⚙️ Ações:\n");
    printf("1 - Debate (70%%) +10 pontos\n");
    printf("2 - Comício (50%%) +15 pontos\n");
    printf("3 - Promessa ousada (30%%) +25 pontos\n\n");

    printf("🏆 Vitória:\n");
    printf("- Maior pontuação vence\n");
    printf("- Empate é decidido por sorte\n\n");

    printf("========================================\n\n");
}

void jogar()
{
    srand(time(NULL));

    int pontos[4] = {0};
    int partido;
    int partescolhidos[4] = {0};
    int eleitores = 4;
    int partidoplayer[4];

    char *partidos[4] = {
        "SNP",
        "Labour",
        "Conservatives",
        "Liberal Democrats"
    };
    printf("\n========================================\n");
    printf("      🏴 ESCOLHA SEUS PARTIDOS\n");
    printf("========================================\n");

    for(int c = 1; c <= eleitores; c++)
    {
        do
        {
            printf("\n👤 Jogador %d escolha:\n", c);
            printf("1 - SNP\n");
            printf("2 - Labour\n");
            printf("3 - Conservatives\n");
            printf("4 - Liberal Democrats\n");
            printf("-> ");

            scanf("%d", &partido);

            if(partido < 1 || partido > 4)
                printf("❌ Opcao invalida!\n");
            else if(partescolhidos[partido - 1] == 1)
                printf("⚠️ Esse partido ja foi escolhido!\n");

        } while(partido < 1 || partido > 4 ||
                partescolhidos[partido - 1] == 1);

        partescolhidos[partido - 1] = 1;
        partidoplayer[c - 1] = partido;

        printf("✅ Jogador %d escolheu %s\n", c, partidos[partido - 1]);
    }
    for(int round = 1; round <= 5; round++)
    {
        printf("\n========================================\n");
        printf("            🏛️ ROUND %d\n", round);
        printf("========================================\n");

        for(int eleitor = 1; eleitor <= eleitores; eleitor++)
        {
            int acao;
            int sorte = rand() % 100 + 1;

            printf("\n----------------------------------------\n");
            printf("👤 Turno do: %s\n",
                partidos[partidoplayer[eleitor - 1] - 1]);

            printf("📌 Escolha sua ação:\n");
            printf("1 - Debate (70%%)\n");
            printf("2 - Comício (50%%)\n");
            printf("3 - Promessa ousada (30%%)\n");
            printf("-> ");

            scanf("%d", &acao);

            switch(acao)
            {
                case 1:
                    if(sorte <= 70)
                    {
                        printf("🎉 Sucesso no debate! +10 pontos\n");
                        pontos[eleitor - 1] += 10;
                    }
                    else printf("💥 Debate falhou!\n");
                    break;

                case 2:
                    if(sorte <= 50)
                    {
                        printf("🎉 Comício foi forte! +15 pontos\n");
                        pontos[eleitor - 1] += 15;
                    }
                    else printf("💥 Comício fraco!\n");
                    break;

                case 3:
                    if(sorte <= 30)
                    {
                        printf("🎉 Promessa deu certo! +25 pontos\n");
                        pontos[eleitor - 1] += 25;
                    }
                    else printf("💥 Promessa falhou!\n");
                    break;

                default:
                    printf("❌ Ação inválida!\n");
            }
        }
        printf("\n========================================\n");
        printf("          📊 PLACAR DA RODADA %d\n", round);
        printf("========================================\n");

        for(int i = 0; i < eleitores; i++)
        {
            printf("🏳️ %s: %d pontos\n",
                partidos[partidoplayer[i] - 1],
                pontos[i]);
        }
    }
    printf("\n========================================\n");
    printf("           🏆 RESULTADO FINAL\n");
    printf("========================================\n");

    int maior = pontos[0];

    for(int i = 1; i < eleitores; i++)
        if(pontos[i] > maior)
            maior = pontos[i];

    int empatados[4];
    int qtdEmpate = 0;

    for(int i = 0; i < eleitores; i++)
    {
        if(pontos[i] == maior)
        {
            empatados[qtdEmpate] = i;
            qtdEmpate++;
        }
    }

    if(qtdEmpate == 1)
    {
        printf("🏆 Vencedor: %s com %d pontos!\n",
            partidos[partidoplayer[empatados[0]] - 1],
            pontos[empatados[0]]);
    }
    else
    {
        printf("\n⚖️ EMPATE DETECTADO!\n");

        for(int i = 0; i < qtdEmpate; i++)
        {
            printf("🤝 Empatado: %s com %d pontos\n",
                partidos[partidoplayer[empatados[i]] - 1],
                pontos[empatados[i]]);
        }

        printf("\n🎲 DESEMPATE POR SORTE!\n");

        int escolhido = empatados[rand() % qtdEmpate];

        printf("🏆 Vencedor final: %s com %d pontos!\n",
            partidos[partidoplayer[escolhido] - 1],
            pontos[escolhido]);
    }
}

int main()
{
    int opcao;

    do
    {
        printf("\033[34m====================================\033[0m\n");
        printf("\033[33m   SIMULADOR DE ELEIÇÕES - ESCÓCIA\033[0m\n");
        printf("\033[34m====================================\033[0m\n");
        printf("1 - 🎮 Iniciar jogo\n");
        printf("2 - 📘 Ver manual\n");
        printf("3 - ❌ Sair\n");
        printf("========================================\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                jogar();
                break;

            case 2:
                mostrarManual();
                break;

            case 3:
                printf("👋 Saindo do jogo...\n");
                break;

            default:
                printf("❌ Opcao invalida!\n");
        }

    } while(opcao != 3);

    return 0;
}