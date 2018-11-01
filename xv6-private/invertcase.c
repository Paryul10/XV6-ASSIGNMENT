#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
  int i;
  int j;
  // char *ans[100];

  /*for(i = 1; i < argc; i++)
  {
    for(j=0;j<strlen(argv[i]);i++)
    {
        if(argv[i][j]>=65 && argv[i][j]<=90)
        {
          argv[i][j]=argv[i][j]+32;
        }
        else if(argv[i][j]>=97 && argv[i][j]<=122)
        {
          argv[i][j]=argv[i][j]-32;
        }
    }
  }*/

  for(i=1;i<argc;i++)
  {
    j=0;
    while(argv[i][j]!='\0')
    {
      if(argv[i][j]>=65 && argv[i][j]<=90)
        {
          argv[i][j]=argv[i][j]+32;
        }
        else if(argv[i][j]>=97 && argv[i][j]<=122)
        {
          argv[i][j]=argv[i][j]-32;
        }
        j++;
    }

  }

  for(i = 1; i < argc; i++)
  {
    printf(1,"%s ",argv[i]);
  }
  printf(1,"\n");
  exit();
}
