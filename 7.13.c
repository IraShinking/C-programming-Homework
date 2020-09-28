  #include<stdio.h>
  #include<stdlib.h>
  int main(void)
  {
      char c;
      int i,j;
      float length;
      printf("Enter a sentence:");
      c = getchar();
      for (j=1,i=1;c!='\n';)
      {
          if (c=='.'||c==',')
          {
              c = getchar();
              continue;
          }
          if (c!=' ')
            i++;
        else j++;
          c = getchar();
      }
      length = (float)i/j;
      printf("Average word length:%.1f",length);
      return 0;
  }
