 #include<stdio.h>
  2 int main(int argc,char *argv[])
  3 {
  4         if(argc < 3) {
  5         printf("Usage : ./a.out src_file dest_files\n");
  6         return 0;
  7         }
  8 
  9         FILE *fs = fopen(argv[1],"r");  //opens src_file in read mode
 10         if(fs == NULL) {
 11         printf("source file doesn't exist\n");
 12         return 0;
 13         }
 14 
 15         FILE *fd;   char ch,op;    int i;
 16         for(i=2;i<argc;i++)   //loop to open all destination files
 17         {
 18                 fd = fopen(argv[i],"r");  //opens dest_file in read mode
 19                 if(fd != NULL)
 20                 {
 21                    printf("%s file is already exist, do you want to overwrite\n",argv[i]);
 22                    scanf(" %c",&op);
 23 
 24                    if(op == 'y') {
 25                    fclose(fd); //closes dest_file from read mode.
 26                    goto label;
 27                   }
 28                   else
 29                   continue;  //loop goes for next iteration.     
 30                 }
 31 
 32         label:  fd = fopen(argv[i],"w");  //opens destination file in write mode
 33                   while( (ch = fgetc(fs)) != -1 )
 34                   fputc(ch,fd);
 35 
 36                   fclose(fd);  //closes the opened destion file.
 37                   rewind(fs);  //resets the file position indicator to start position.
 38         }

