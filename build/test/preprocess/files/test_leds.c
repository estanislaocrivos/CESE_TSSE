#include "inc/leds.h"
#include "/Library/Ruby/Gems/2.6.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


static uint16_t leds_virtuales;

static const int LED = 3;









void setUp(void)

{

    leds_init(&leds_virtuales);

}



void test_todos_los_leds_deben_estar_apagados_al_iniciar_el_driver(void)

{







    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_virtuales)), (((void*)0)), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_UINT16);

}







void test_prender_un_led(void)

{







    leds_turn_on(LED);

    UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (LED-1))), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((leds_virtuales)), (((void*)0)), (UNITY_UINT)(42));

    UnityAssertBits((UNITY_INT)((~(1<<(LED-1)))), (UNITY_INT)((UNITY_UINT)(0)), (UNITY_INT)((leds_virtuales)), (((void*)0)), (UNITY_UINT)(43));

}





void test_apagar_un_led(void)

{







    leds_turn_on(5);

    leds_turn_off(4);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_virtuales)), (((void*)0)), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_UINT16);

}
