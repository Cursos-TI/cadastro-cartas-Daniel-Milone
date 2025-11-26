#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {
    // Definição dos arrays para armazenar os dados das 2 cartas
    // Cada array armazena os dados correspondentes para as 2 cidades
    
    // Estado de cada cidade (siglas reais dos estados brasileiros)
    char estado[2] = {'S', 'R'};  // SP, RJ
    
    // Código único de cada carta (combinação estado + número)
    char codigo[2][4] = {"S01", "R02"};
    
    // Nome de cada cidade cadastrada
    char nome[2][50] = {"São Paulo", "Rio de Janeiro"};
    
    // População de cada cidade em habitantes (usando unsigned long int conforme requisito)
    unsigned long int populacao[2] = {12300000, 6748000};
    
    // Área territorial de cada cidade em km²
    float area[2] = {1521.11, 1200.27};
    
    // PIB de cada cidade em bilhões de reais
    float pib[2] = {699.28, 338.96};
    
    // Número de pontos turísticos de cada cidade
    int pontos_turisticos[2] = {85, 72};
    
    // Variáveis para armazenar os cálculos do nível intermediário
    float densidade_populacional[2];  // Densidade populacional de cada cidade
    float pib_per_capita[2];          // PIB per capita de cada cidade
    
    // Variáveis para o nível mestre - Super Poder
    float super_poder[2];  // Super Poder de cada carta
    
    // Variáveis para armazenar os resultados das comparações
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;
    
    // Cabeçalho do sistema
    printf("=== SUPER TRUNFO - CARTAS DE CIDADES ===\n");
    printf("Nível Mestre - Sistema de Batalha de Cartas\n");
    printf("==========================================\n\n");
    
    // CÁLCULOS DO NÍVEL INTERMEDIÁRIO
    // Cálculo da densidade populacional para cada cidade
    // Fórmula: densidade = população / área
    densidade_populacional[0] = (float)populacao[0] / area[0];  // São Paulo
    densidade_populacional[1] = (float)populacao[1] / area[1];  // Rio de Janeiro
    
    // Cálculo do PIB per capita para cada cidade
    // Fórmula: PIB per capita = (PIB em bilhões * 1.000.000.000) / população
    pib_per_capita[0] = (pib[0] * 1000000000) / populacao[0];  // São Paulo
    pib_per_capita[1] = (pib[1] * 1000000000) / populacao[1];  // Rio de Janeiro
    
    // CÁLCULOS DO NÍVEL MESTRE - SUPER PODER
    // Fórmula: Super Poder = população + área + PIB + pontos turísticos + 
    //          PIB per capita + (1 / densidade_populacional)
    // Conversão explícita de tipos para garantir precisão nos cálculos
    super_poder[0] = (float)populacao[0] + area[0] + pib[0] + 
                     (float)pontos_turisticos[0] + pib_per_capita[0] + 
                     (1.0 / densidade_populacional[0]);
    
    super_poder[1] = (float)populacao[1] + area[1] + pib[1] + 
                     (float)pontos_turisticos[1] + pib_per_capita[1] + 
                     (1.0 / densidade_populacional[1]);
    
    // EXIBIÇÃO DAS CARTAS (funcionalidade dos níveis anteriores)
    printf("=== DETALHES DAS CARTAS ===\n\n");
    
    // Exibição da Carta 1 - São Paulo
    printf("--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigo[0]);
    printf("Nome da Cidade: %s\n", nome[0]);
    printf("População: %lu habitantes\n", populacao[0]);
    printf("Área: %.2f km²\n", area[0]);
    printf("PIB: %.2f bilhões de reais\n", pib[0]);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos[0]);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional[0]);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita[0]);
    printf("Super Poder: %.2f\n", super_poder[0]);
    printf("\n");
    
    // Exibição da Carta 2 - Rio de Janeiro
    printf("--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigo[1]);
    printf("Nome da Cidade: %s\n", nome[1]);
    printf("População: %lu habitantes\n", populacao[1]);
    printf("Área: %.2f km²\n", area[1]);
    printf("PIB: %.2f bilhões de reais\n", pib[1]);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos[1]);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional[1]);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita[1]);
    printf("Super Poder: %.2f\n", super_poder[1]);
    printf("\n");
    
    // SISTEMA DE BATALHA - COMPARAÇÃO DAS CARTAS
    printf("=== BATALHA DE CARTAS - RESULTADOS ===\n\n");
    
    // Comparação de População (maior valor vence)
    resultado_populacao = (populacao[0] > populacao[1]) ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", 
           (resultado_populacao == 1) ? 1 : 2, resultado_populacao);
    
    // Comparação de Área (maior valor vence)
    resultado_area = (area[0] > area[1]) ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", 
           (resultado_area == 1) ? 1 : 2, resultado_area);
    
    // Comparação de PIB (maior valor vence)
    resultado_pib = (pib[0] > pib[1]) ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", 
           (resultado_pib == 1) ? 1 : 2, resultado_pib);
    
    // Comparação de Pontos Turísticos (maior valor vence)
    resultado_pontos_turisticos = (pontos_turisticos[0] > pontos_turisticos[1]) ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (resultado_pontos_turisticos == 1) ? 1 : 2, resultado_pontos_turisticos);
    
    // Comparação de Densidade Populacional (MENOR valor vence - regra especial)
    resultado_densidade = (densidade_populacional[0] < densidade_populacional[1]) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (resultado_densidade == 1) ? 1 : 2, resultado_densidade);
    
    // Comparação de PIB per Capita (maior valor vence)
    resultado_pib_per_capita = (pib_per_capita[0] > pib_per_capita[1]) ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (resultado_pib_per_capita == 1) ? 1 : 2, resultado_pib_per_capita);
    
    // Comparação de Super Poder (maior valor vence)
    resultado_super_poder = (super_poder[0] > super_poder[1]) ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (resultado_super_poder == 1) ? 1 : 2, resultado_super_poder);
    
    printf("\n");
    
    // RESUMO FINAL DA BATALHA
    printf("=== RESUMO FINAL ===\n");
    int vitorias_carta1 = resultado_populacao + resultado_area + resultado_pib + 
                         resultado_pontos_turisticos + resultado_densidade + 
                         resultado_pib_per_capita + resultado_super_poder;
    int vitorias_carta2 = 7 - vitorias_carta1;  // Total de 7 comparações
    
    printf("Vitórias Carta 1 (%s): %d\n", nome[0], vitorias_carta1);
    printf("Vitórias Carta 2 (%s): %d\n", nome[1], vitorias_carta2);
    
    if (vitorias_carta1 > vitorias_carta2) {
        printf("🎉 CARTA 1 (%s) É A VENCEDORA! 🎉\n", nome[0]);
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("🎉 CARTA 2 (%s) É A VENCEDORA! 🎉\n", nome[1]);
    } else {
        printf("⚖️ EMPATE! As cartas são igualmente poderosas! ⚖️\n");
    }
    
    return 0;  // Finaliza o programa
}