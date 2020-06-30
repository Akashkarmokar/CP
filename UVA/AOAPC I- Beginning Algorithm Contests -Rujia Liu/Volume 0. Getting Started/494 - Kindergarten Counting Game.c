#include<stdio.h>
int main()
{
  int i;
  char sentence[1000];
  while (fgets(sentence)) {
        for(i=0;sentence[i]!='\0';i++){
          int counter=0;
          if(
                ( (sentence[i]>='a' && sentence[i]<='z')
                  ||
                  (sentence[i]>='A' && sentence[i]<='Z')    )
            &&
            ((sentence[i+1]<'a' || sentence[i+1]>'z') &&
            (sentence[i+1]<'A' || sentence[i+1]>'Z'))



            ){
            counter++;
          }
        }
        printf("%d\n",counter);
  }
  return 0;
}
