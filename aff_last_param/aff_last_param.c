#include <unistd.h>


int main(int argc ,char *argv[])

{
  

   if (argc> 1)
   {
     write(1 , "argc-1" ,1);
   }

   else if(argc < 1)
   {
     write(1 ,"**argv" ,1);
   }

return (0);

}	
