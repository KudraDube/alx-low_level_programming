#ifndef MAIN_H                                                                                                                                                                        
                                                                                                                                                                                      
#define MAIN_H                                                                                                                                                                        
                                                                                                                                                                                      
void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));                                                                                                                                                      
                                                                                                                                                                                      
#include <stdio.h>                                                                                                                                                                    
                                                                                                                                                                                      
#include <stdlib.h>                                                                                                                                                                   
                                                                                                                                                                                      
int int_index(int *array, int size, int (*cmp)(int));                                                                                                     
                                                                                                                                                                                      
int (*get_op_func(char *s))(int, int);                                                                                                                                                                                      
                                                                                                                                                                                      
                                                                                                                                                                                      
                                                                                                                                                                                      
#endif/*MAIN_H*/  
