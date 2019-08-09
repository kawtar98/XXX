#include <unistd.h>


int main(int argc ,char *argv[])

{
  char *str = "ABCD"; 

  if(argc < 1)
  {
	  write(1 ,&str,1);
  }

return (0);

}	
