#include "stdio.h"
#include "math.h"
#include "string.h"



struct human{
    int rist;
    int vaga;
    int number;
};

char * toString(struct human h);

int main()
{
    struct human M;
    M.rist=165;
    M.vaga=55;
    M.number=1;

    struct human L;
    L.rist=175;
    L.vaga=60;
    L.number=2;

    struct human O;
    O.rist=167;
    O.vaga=75;
    O.number=3;


    struct human humans[3];
    humans[0]= M;
    humans[1]= L;
    humans[2]= O;

    struct human x;
    for (int (i) = 0; (i) <3 ; ++(i)) {
        for (int j = 2; j >i ; --j) {
            if(humans[j-1].rist>humans[j].rist){
                x = humans[j-1];
                humans[j-1] = humans[j];
                humans[j] = x;
            } else if (humans[j-1].rist==humans[j].rist&&
                    humans[j-1].vaga>humans[j].vaga)
            {
                x = humans[j-1];
                humans[j-1] = humans[j];
                humans[j] = x;
            }

        }

    }
    char* h = toString(humans[0]);
    for(int i=0; i<sizeof(h)/sizeof(char);i++)
    printf("%s",h[i]);

    return 0;
}

char* toString(struct human h){
    char* rez[512]={" "};
    char*f = "{\n";
    sprintf(rez,"%s",f);
    sprintf(rez,"%s %s %d",rez,"\"rist\":",h.rist);
    //strcat(rez,tmp);
 //char*t = ",\n\"vaga\":%d, \n",h.vaga;
 //char*fo = "\"number\":%d, \n", h.number;
 //char*fi = ("}\n");
  //  strcat(rez,s);
//f=strcat(f,t);
//f=strcat(f,fo);
//f=strcat(f,fi);
return rez;


}
