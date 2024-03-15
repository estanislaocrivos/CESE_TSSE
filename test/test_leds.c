/*
Con todos los leds apagados prender el led 3 y verificar que efectivamente el bit 2 se pone en 1 y el resto de bit permanece en 0.
Con todos los leds apagados prender un led y verificar que al consultar el estado del mismo me informa que esta prendido.
Prender todos los leds que estan apagados antes de la operación
Apagar todos los leds que ya estan prendidos
Prender leds que ya esten prendidos de antes
Apagar leds que ya esten apagados
Comprobar valores prohibidos
Comprobar los valores de limite
*/

#include "unity.h"
#include "leds.h"

static uint16_t leds_virtuales;
static const int LED = 3;


// Al iniciar el controlador los leds deben quedar todos los bits en 0 sin importar el estado anterior.

void setUp(void)
{
    leds_init(&leds_virtuales);
}

void test_todos_los_leds_deben_estar_apagados_al_iniciar_el_driver(void)
{
    // TEST_FAIL_MESSAGE("Arrancamos");
    // uint16_t leds_virtuales = 0xFF;
    // leds_init(&leds_virtuales);
    TEST_ASSERT_EQUAL_UINT16(0x00, leds_virtuales);
}

// Con todos los leds apagados prender el led 3 y verificar que efectivamente el bit 2 se pone en 1 y el resto de bit permanece en 0.

void test_prender_un_led(void)
{
    // static const int LED = 3;
    // uint16_t leds_virtuales;
    // leds_init(&leds_virtuales);
    leds_turn_on(LED);
    TEST_ASSERT_BIT_HIGH(LED-1, leds_virtuales);
    TEST_ASSERT_BITS_LOW(~(1<<(LED-1)), leds_virtuales);
}

// Apagar un led prendido y ver que efectivamente se apaga y que el resto no cambia.
void test_apagar_un_led(void)
{
    // static const int LED = 3;
    // uint16_t leds_virtuales;
    // leds_init(&leds_virtuales);
    leds_turn_on(5);
    leds_turn_off(4);
    TEST_ASSERT_EQUAL_UINT16(0x00, leds_virtuales);
}