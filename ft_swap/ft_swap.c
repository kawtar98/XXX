

int ft_swap(int *a , int *b)

{   
	int i;
	 
	i = *a;
	*a = *b;
	*b = i;

}	


int main()
 
{
    int a;
    int b;
    
     ft_swap(&a , &b);
     printf("%d,%d\n", a ,b);
     return (0);  
}	

