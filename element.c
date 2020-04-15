#include "element.h"

Element new_Element(float mass, float p0,float p1, float v0, float v1){
    Element element;

    element.mass = mass;
    element.position[0] = p0;
    element.position[1] = p1;
    element.velocity[0] = v0;
    element.velocity[1] = v1;
    return element;
}


int print_Element(Element element){
    printf("Mass=%lf\tposition=[%lf,%lf]\tvelocity=[%lf,%lf]\n",element.mass,element.position[0],element.position[1],element.velocity[0],element.velocity[1]);
    return 1;
}