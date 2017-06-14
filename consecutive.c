#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){


  FILE *filePoint = freopen(argv[1],"r",stdin);// executable < foo.txt
	int val;
	int i;//counter of elements;
	i = 0;
  int *myArr;//dynamic array
  myArr = (int *)malloc(sizeof(int)*10000);//dynamic array, this size can be changed if not allocating memory fast enough


  while(fscanf(filePoint,"%d",&val) > 0){ //adding to the array

    myArr[i] = val;

		i = i+1;
	}

  int j;
  for(j = 0; j<i;j = j+1){

    if(j != i-1){//as long as not last element
      if(myArr[j]+1 != myArr[j+1] )//this means its not consecutive
      {

        printf("%d: ",j);
        printf("%d\n",myArr[j]);

        printf("%d: ",j+1);
        printf("%d\n",myArr[j+1]);


      }  //end of inner if
    }//end of outer if


  }



	fclose(filePoint);



}
