#ifndef NL_CONFIG_H
#define NL_CONFIG_H

// ============================================================================
//   SHADER DE TERROR LEVE (CONCEITO SILENT HILL / BREU TOTAL) - DO ZERO
// ============================================================================

// --- 1. CONFIGURAÇÕES DE DESEMPENHO (LEVE) ---
#define NL_WAVING_WATER 0       // Desativa balanço da água
#define NL_WAVING_LEAVES 0      // Desativa balanço das folhas
#define NL_WAVING_PLANTS 0      // Desativa balanço de plantas
#define NL_SMOOTH_SHADOWS 0     // Desativa sombras complexas (ganho de FPS)

// --- 2. CONFIGURAÇÕES DE CLIMA E NÉVOA (DIA CINZENTO) ---
#define NL_FOG_TYPE 1           // Ativa a névoa linear
#define NL_FOG_MIST 0.85        // Puxa a névoa para extremamente perto do jogador (Claustrofobia)
#define NL_FOG_DAY_COLOR vec3(0.18, 0.19, 0.22) // Cinza industrial/tempestade frio

// --- 3. CONFIGURAÇÕES DE ILUMINAÇÃO (NOITE ESCURA) ---
#define NL_DAY_BRIGHTNESS 0.55  // Reduz a iluminação do sol para um dia nublado/mórbido
#define NL_NIGHT_BRIGHTNESS 0.005 // ESCURIDÃO TOTAL: Sem tochas, a tela fica preta
#define NL_TORCH_BRIGHTNESS 0.40 // Tochas iluminam 60% menos (apenas um pequeno raio de luz)
#define NL_TORCH_COLOR vec3(0.9, 0.55, 0.3) // Luz da tocha mais fraca e avermelhada/sombria

// --- 4. AJUSTE DE CORES (CINE TERROR) ---
#define NL_SATURATION 0.25      // Remove 75% das cores do jogo. Tudo fica lavado e sem vida
#define NL_CONTRAST 1.2         // Aumenta o contraste para sombras parecerem mais profundas

#endif
