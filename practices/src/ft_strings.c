#include "c00.h"
#include "ft_zurich.h"

void ft_strcpy_runner();
void ft_strncpy_runner();
int ft_str_is_alpha(char *str);

void ft_menu() {
  printf("------------ String Functions -----------\n");
  printf("1. ft_strcpy\n");
  printf("2. ft_strncpy\n");
  printf("3. ft_str_is_alpha\n");

  
}


void ft_strcpy_runner() {

  char source[] = "Custom ft string!";
    char destination[20];

    printf("%s\n", ft_strcpy(destination, source));
    printf("Dest... %s\n", destination);

}

void ft_strncpy_runner() {
     printf("\n\n---------- FT STRNCPY -------\n");

    char source[] = "Custom FT_STRNCPY!";
    char destination[6];

   printf("%s\n", ft_strncpy(destination, source, 4));
}


int ft_str_is_alpha(char *str) {
   while (*str!='\0')
   {
      if((*str>'a' && *str<'z') || (*str>'A' || *str<'A'))
        return (1);

      str++;
   }
   
  return (0);
}


void ft_strings() {
  int opt=-1;
  ft_menu();
  
  do
  {
    printf("\nChoose an option (0 to exit): ");
    
    if(scanf("%d", &opt)!=1)
    {
      printf("Invalid input. \n");
       while (getchar()!='\n')
        ;
      continue;
    }

    switch (opt)
    {
    case 0:
      printf("Exiting...\n");
      break;
    
      case 1:
        ft_strcpy_runner();
        break;

      case 2:
        ft_strncpy_runner();
        break;
        
      case 3:
        printf("Is Alpha: %s\n",
        ft_str_is_alpha("a1444bc11") ? "true" : "false");
        break;  
    
    default:
      printf("Invalid option. it does not exist in menu \n");
      break;
    }
     
  } while (opt!=0);

  printf("This runs after the menu ends.\n"); 
}



