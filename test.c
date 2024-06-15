 enum {false,true};
 main()
 {
 int i=1;
 do
 {
 printf("%d",i);
 i++;
 if (i < 15)
 continue;
 }
 while(false);
 }
