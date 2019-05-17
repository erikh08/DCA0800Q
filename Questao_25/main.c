#include <stdio.h>
#include <string.h>

int main()
{
    char txt[100];
    int contadorA=0, contadorB=0, contadorC=0, contadorD=0,
        contadorE=0, contadorF=0, contadorG=0, contadorH=0,
        contadorI=0, contadorJ=0, contadorK=0, contadorL=0,
        contadorM=0, contadorN=0, contadorO=0, contadorP=0,
        contadorQ=0, contadorR=0, contadorS=0, contadorT=0,
        contadorU=0, contadorV=0, contadorW=0, contadorX=0,
        contadorY=0, contadorZ=0;
    int tamlit, i;
    fgets(txt,100,stdin);

    tamlit=strlen(txt);
    for (i=0;i<=tamlit;i++) {
        if(txt[i]==65 || txt[i]==97){
            contadorA=contadorA+1;
        }
        if(txt[i]==66 || txt[i]==98){
            contadorB=contadorB+1;
        }
        if(txt[i]==67 || txt[i]==99){
            contadorC=contadorC+1;
        }
        if(txt[i]==68 || txt[i]==100){
            contadorD=contadorD+1;
        }
        if(txt[i]==69 || txt[i]==101){
            contadorE=contadorE+1;
        }
        if(txt[i]==70 || txt[i]==102){
            contadorF=contadorF+1;
        }
        if(txt[i]==71 || txt[i]==103){
            contadorG=contadorG+1;
        }
        if(txt[i]==72 || txt[i]==104){
            contadorH=contadorH+1;
        }
        if(txt[i]==73 || txt[i]==105){
            contadorI=contadorI+1;
        }
        if(txt[i]==74 || txt[i]==106){
            contadorJ=contadorJ+1;
        }
        if(txt[i]==75 || txt[i]==107){
            contadorK=contadorK+1;
        }
        if(txt[i]==76 || txt[i]==108){
            contadorL=contadorL+1;
        }
        if(txt[i]==77 || txt[i]==109){
            contadorM=contadorM+1;
        }
        if(txt[i]==78 || txt[i]==110){
            contadorN=contadorN+1;
        }
        if(txt[i]==79 || txt[i]==111){
            contadorO=contadorO+1;
        }
        if(txt[i]==80 || txt[i]==112){
            contadorP=contadorP+1;
        }
        if(txt[i]==81 || txt[i]==113){
            contadorQ=contadorQ+1;
        }
        if(txt[i]==82 || txt[i]==114){
            contadorR=contadorR+1;
        }
        if(txt[i]==83 || txt[i]==115){
            contadorS=contadorS+1;
        }
        if(txt[i]==84 || txt[i]==116){
            contadorT=contadorT+1;
        }
        if(txt[i]==85 || txt[i]==117){
            contadorU=contadorU+1;
        }
        if(txt[i]==86 || txt[i]==118){
            contadorV=contadorV+1;
        }
        if(txt[i]==87 || txt[i]==119){
            contadorW=contadorW+1;
        }
        if(txt[i]==88 || txt[i]==120){
            contadorX=contadorX+1;
        }
        if(txt[i]==89 || txt[i]==121){
            contadorY=contadorY+1;
        }
        if(txt[i]==90 || txt[i]==122){
            contadorZ=contadorZ+1;
        }
    }
    printf("Ocorrencia de: \n");
    printf("A=%d\n", contadorA);
    printf("B=%d\n", contadorB);
    printf("C=%d\n", contadorC);
    printf("D=%d\n", contadorD);
    printf("E=%d\n", contadorE);
    printf("F=%d\n", contadorF);
    printf("G=%d\n", contadorG);
    printf("H=%d\n", contadorH);
    printf("I=%d\n", contadorI);
    printf("J=%d\n", contadorJ);
    printf("K=%d\n", contadorK);
    printf("L=%d\n", contadorL);
    printf("M=%d\n", contadorM);
    printf("N=%d\n", contadorN);
    printf("O=%d\n", contadorO);
    printf("P=%d\n", contadorP);
    printf("Q=%d\n", contadorQ);
    printf("R=%d\n", contadorR);
    printf("S=%d\n", contadorS);
    printf("T=%d\n", contadorT);
    printf("U=%d\n", contadorU);
    printf("V=%d\n", contadorV);
    printf("W=%d\n", contadorW);
    printf("X=%d\n", contadorX);
    printf("Y=%d\n", contadorY);
    printf("Z=%d\n", contadorZ);

    return 0;
}
