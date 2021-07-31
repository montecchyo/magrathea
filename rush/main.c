#include<stdio.h>

int    main(int argc, char* argv[])
{
    if(argc == 1)
    {
        printf("Sem parâmetros\n");
    }else{
        int i;
        printf("Parâmetros informados, %s\n", argv[0]);
        for(i=1; i<argc; i++){
            printf("parametro %d: %s\n",i,argv[i]);
            
        }
        //pritnf("tamanho %d\n",strlen(argv[]));
    }
    return (0);
}