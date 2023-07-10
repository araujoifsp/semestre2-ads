typedef struct calculadora CALC;

CALC *soma(int num1, int num2);

void calc_libera(CALC *valor);

float calc_soma(CALC *valor);
float calc_sub(CALC *valor);
float calc_mult(CALC *valor);
float calc_div(CALC *valor);


