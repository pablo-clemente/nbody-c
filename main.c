#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "population.h"

int main(int argn, char **args){
    Element a1,a2;
    Population population;

    a1 = new_Element(1.0,0.0,0.0,1.0,0.0);
    a2 = new_Element(1.0,10.0,0.0,-1.0,0.0);

    print_Element(a1);
    print_Element(a2);

    population = new_Population("2 body system",2);
    
    add_element_to_population(&population, a1);
    add_element_to_population(&population, a2);

  print_Population(population);

return 1;
}