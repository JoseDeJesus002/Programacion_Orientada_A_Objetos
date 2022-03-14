#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class persona{
      public:
             persona(char*n){strcpy(nombre,n);}
             char *Vernombre(char *n){strcpy(n,nombre);
             return n;}
             protected:
                       cahr nombre[30];
};

class empleado:public persona{
      public:
             empleado(char *n):persona(n){}
             char *vernombre(char *n) {strcpy(n,"Empe ");strcat(n,nombre);return n;}
};

class estudiante:public persona{
public:
       estudiante(cahr *n):persona(n){}
       char *vernombre(char *n){strcpy("Est "); strcat(n,nombre); return n;}
       
};

