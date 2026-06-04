#include <stdio.h>

int main()
{
    char partido[50];
    int popularidade = 50;
    int economia = 50;
    int escolha;

    printf("====================================\n");
    printf("  PRIMEIRO-MINISTRO DA ESCOCIA\n");
    printf("====================================\n\n");

    printf("Digite o partido vencedor das eleicoes: ");
    scanf("%s", partido);

    printf("\nO partido %s assumiu o governo!\n", partido);
    printf("Popularidade inicial: %d\n", popularidade);

    for(int i = 1; i <= 5; i++)
    {
        printf("\n====================================\n");

        switch(i)
        {
            case 1:
                printf("🏥 EVENTO 1: SAUDE\n");
                printf("Hospitais estao lotados.\n");
                printf("1 - Investir na saude\n");
                printf("2 - Manter orçamento\n");
                scanf("%d", &escolha);

                if(escolha == 1)
                {
                    popularidade += 10;
                    economia -= 5;
                }
                else
                {
                    popularidade -= 8;
                }
                break;

            case 2:
                printf("📚 EVENTO 2: EDUCACAO\n");
                printf("Professores pedem melhorias.\n");
                printf("1 - Investir na educacao\n");
                printf("2 - Ignorar pedidos\n");
                scanf("%d", &escolha);

                if(escolha == 1)
                {
                    popularidade += 8;
                    economia -= 5;
                }
                else
                {
                    popularidade -= 10;
                }
                break;

            case 3:
                printf("💰 EVENTO 3: IMPOSTOS\n");
                printf("Populacao reclama de impostos altos.\n");
                printf("1 - Reduzir impostos\n");
                printf("2 - Manter impostos\n");
                scanf("%d", &escolha);

                if(escolha == 1)
                {
                    popularidade += 10;
                    economia -= 10;
                }
                else
                {
                    economia += 8;
                    popularidade -= 5;
                }
                break;

            case 4:
                printf("🛣️ EVENTO 4: INFRAESTRUTURA\n");
                printf("Estradas precisam de melhorias.\n");
                printf("1 - Investir em infraestrutura\n");
                printf("2 - Adiar projetos\n");
                scanf("%d", &escolha);

                if(escolha == 1)
                {
                    popularidade += 7;
                    economia -= 7;
                }
                else
                {
                    popularidade -= 6;
                }
                break;

            case 5:
                printf("🏴 EVENTO 5: INDEPENDENCIA\n");
                printf("Debate sobre independencia da Escocia.\n");
                printf("1 - Apoiar referendo\n");
                printf("2 - Recusar referendo\n");
                scanf("%d", &escolha);

                if(escolha == 1)
                {
                    popularidade += 12;
                    economia -= 10;
                }
                else
                {
                    popularidade -= 10;
                    economia += 5;
                }
                break;
        }

        printf("\n📊 STATUS ATUAL:\n");
        printf("Popularidade: %d\n", popularidade);
        printf("Economia: %d\n", economia);
    }

    printf("\n====================================\n");
    printf("           RESULTADO FINAL\n");
    printf("====================================\n");

    printf("Partido: %s\n", partido);
    printf("Popularidade final: %d\n", popularidade);
    printf("Economia final: %d\n", economia);

    if(popularidade >= 70)
    {
        printf("\n🏆 Governo excelente!\n");
    }
    else if(popularidade >= 40)
    {
        printf("\n⚖️ Governo equilibrado.\n");
    }
    else
    {
        printf("\n❌ Governo mal avaliado.\n");
    }

    return 0;
}