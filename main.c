#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
    FILE *file;
    char line[50];
    if(file = fopen(argv[1], "r"))
    {
        fgets(line,50,file);
        //puts(line);
        if(line[0] == '#' and line[1] == '!')
        {
            int skip = 2;
            /*for(int i=0;i+2<50;i++)
            {
                if(line[i+skip] == '\n')
                {
                    skip++;
                    continue;
                }
                line[i] = line[i+skip];
                if(line[i+skip] == '\0')
                    break;
            }*/
            sscanf(line,"#!%s",line);
            sprintf(line,"%s %s",line,argv[1]);
            //puts(line);
            system(line);
        }
        fclose(file);
        return 1;
    }
    }
    return 0;
}