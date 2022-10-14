/* construct a single dimension array of sring to find 
   
   *find all strring start with vowels.*/

   #include<stdio.h>
   #include<conio.h>
   #include<string.h>

   int main()   
   {
      char str[100];
      int i,j,c=0,len;

      printf("enter string : ");
      gets(str);

      char temp[100];
      temp[0]=' ';
      
       for (c=0; c<strlen(str); c++)
    {
        temp[c+1]=str[c];
    }
      len=strlen(temp);

      for(i=0;i<len;i++)
      {
        if(temp[i]==' ')
       {
         i++;
         if(temp[i]=='a' || temp[i]=='e' || temp[i]=='i' || temp[i]=='o' || temp[i]=='u' ||
         temp[i]=='A' || temp[i]=='E' || temp[i]=='I' || temp[i]=='O' || temp[i]=='U')
         {
             for(j=i; j<len; j++)
            {
                if(temp[j]!=' ')
                {
                    printf("%c",temp[j]);

                }
                else
                {
                    i=j-1;
                    break;

                }
            }
         }
       }
          printf(" ");
     } 
  }