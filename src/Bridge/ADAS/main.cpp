#include <iostream>

#include "AdasWarningv1.h"
#include "AdasWarningv2.h"

#include "ADASv1.h"
#include "ADASv2.h"

int main(int argc, char* argv[]){
    printf("=== Brideg_ADAS ===\n");

    AdasWarningv1 adasWarningv1;
    AdasWarningv2 adasWarningv2;

    ADASv1 adasv1_a(&adasWarningv1);
    adasv1_a.run();

    ADASv1 adasv1_b(&adasWarningv2);
    adasv1_b.run();

    ADASv2 adasv2_a(&adasWarningv1);
    adasv2_a.run();

    ADASv2 adasv2_b(&adasWarningv2);
    adasv2_b.run();

    return 0;
}