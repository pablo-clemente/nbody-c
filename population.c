#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "population.h"

Population new_Population(char *name, int size){
  Population population;
  sprintf(population.name, "%s" , name);
  population.n_elements=0;
  population.size = size;
  population.element = malloc(size * sizeof(Element));
  return population;

}

int add_element_to_population(Population *population, Element element){
  return 1;
}

int print_Population(Population population){
  return 1;
}

