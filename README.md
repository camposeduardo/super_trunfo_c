
============================================================
🃏 SUPER TRUNFO – COMPARAÇÕES AVANÇADAS EM C
============================================================

📘 DESCRIÇÃO
Programa em C que cadastra duas cartas (países) e permite comparar
dois atributos diferentes escolhidos pelo jogador.

As comparações seguem as regras do Super Trunfo:
- Maior valor vence.
- Densidade Demográfica: menor valor vence.
- Após comparar os dois atributos, o programa soma os valores
  e determina a carta vencedora final.

------------------------------------------------------------
⚙️ COMO COMPILAR E EXECUTAR

Compilação:
    gcc super_trunfo.c -o super_trunfo

Execução:
    ./super_trunfo
------------------------------------------------------------
🧩 ATRIBUTOS DISPONÍVEIS

1 - População
2 - Área (km²)
3 - PIB (bilhões de reais)
4 - Pontos Turísticos
5 - Densidade Demográfica (menor vence)

------------------------------------------------------------
🕹️ EXEMPLO DE USO

Entrada:
    === Escolha o PRIMEIRO atributo ===
    1 - Populacao
    2 - Area
    3 - PIB
    4 - Pontos Turisticos
    5 - Densidade Demografica (menor vence)
    Opcao: 3

    === Escolha o SEGUNDO atributo (diferente do primeiro) ===
    1 - Populacao
    2 - Area
    4 - Pontos Turisticos
    5 - Densidade Demografica (menor vence)
    Opcao: 5

Saída:
    === Resultado Final ===
    Pais 1: Brasil
    Pais 2: Argentina
    Soma dos atributos: 10000.00 x 2789.00
    Resultado: Carta 1 venceu!
