#ifndef ELEMENT_H
#define ELEMENT_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct{
  float mass; //kg
  float position[2]; //[x,y] m
  float velocity[2]; // [x,y] m/s
}Element;

Element new_Element(float mass, float p0,float p1, float v0, float v1);
int print_Element(Element element);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* ELEMENT_H */