#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>



int main(int argc, char **argv)
{
  int j;//counter of for loop

	int count = atoi(argv[1]); //amount of times to execute spawn

  for(j = 0;j<count;j++){
    int childID = fork();//creating this many children
		system(argv[2]);//executing inc count amount of times

	}

	int parentID = getppid();//getting parent

	printf("%d\n",parentID);//printing parent

  kill(parentID,SIGKILL);





  return 0;
}
