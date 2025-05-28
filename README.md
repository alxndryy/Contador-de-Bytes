# Contador de Bytes:
## Materias usados:
1. Arduino Uno
2. Protoboard de 400 pontos.
3. 2x Leds vermelhos.
4. 2x Leds verdes.
5. Display de 7 segmentos.
6. 5x Resistores de 330ohms.
7. 18x Jumpers (Macho).
## Como funciona?
- Leds vermelhos: Contam *nibbles* em binário ('00' significa que chegou em 4Bits).
- Display de 7 segmentos: Conta os bytes em hexadecimal de 0 até 16.
- Leds verdes: acendem quando o display de 7 segmentos chega em 16Bytes e 32Bytes.
## Código:
[codigo.ino](./codigo.ino)
## Funcionamento do Circuito no YouTube:
[Contador de bytes (0 a 32)](https://www.youtube.com/watch?v=OxpCxAsSlW0)
