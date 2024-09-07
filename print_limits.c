#include "libraries/libraries.h"

void work_with_flags(char *flag);

void import_file(char *file_name, char *color)
{
    FILE *file;
    char buffer[256];
    file = fopen(file_name, "r");
    while (fgets(buffer, sizeof(buffer), file) != NULL) 
    {
        int index_buffer = 0;
        printf("%s",color); //rah 5as dema tgol lih bli rak string 7it string! hadik mayhmch l'color
        printf("%s", buffer);
        printf("\033[0;37m");
    }
    fclose(file);
}
int max_and_min_number_print(int select)
{
    printf("\033[0;37m");
    switch (select) 
    {
    case 0: printf("Maximum value of CHAR_BIT is \033[0;31m%d\n", CHAR_BIT); break;
    case 1: printf("Minimum value of SCHAR is \033[0;31m%d\n", SCHAR_MIN); break;
    case 2: printf("Maximum value of SCHAR is \033[0;31m%d\n", SCHAR_MAX); break;
    case 3: printf("Maximum value of UCHAR is \033[0;31m%u\n", UCHAR_MAX); break;
    case 4: printf("Minimum value of SHRT is \033[0;31m\033[0;31m%d\n", SHRT_MIN); break;
    case 5: printf("Maximum value of SHRT is %d\n", SHRT_MAX); break;
    case 6: printf("Maximum value of MB_LEN_MAX is \033[0;31m%d\n", MB_LEN_MAX); break;
    case 7: printf("Minimum value of SHRT is \033[0;31m%d\n", SHRT_MIN); break;
    case 8: printf("Maximum value of SHRT is \033[0;31m%d\n", SHRT_MAX); break;
    case 9: printf("Maximum value of USHRT is \033[0;31m%u\n", USHRT_MAX); break;
    case 10: printf("Maximum value of INT is \033[0;31m%d\n", INT_MAX); break;
    case 11: printf("Maximum value of UINT is \033[0;31m%u\n", UINT_MAX); break;
    case 12: printf("Maximum value of UINT is \033[0;31m%u\n", UINT_MAX); break;
    case 13: printf("Minimum value of LONG is \033[0;31m%ld\n", LONG_MIN); break;
    case 14: printf("Maximum value of LONG is \033[0;31m%ld\n", LONG_MAX); break;
    case 15: printf("Maximum value of ULONG is \033[0;31m%lu\n", ULONG_MAX); break;
    case 16: printf("Minimum value of LLONG is \033[0;31m%lld\n", LLONG_MIN); break;
    case 17: printf("Maximum value of LLONG is \033[0;31m%lld\n", LLONG_MAX); break;
    case 18: printf("Maximum value of ULLONG is \033[0;31m%llu\n", ULLONG_MAX); break;
    default: printf("\033[0;31mInvalid number!\n"); return 1;
    }
    return(0);
}

int main(int argc, char **argv)
{
    int index = 0; // matnsax to set index to 0 every time u use it!
    
    int val = 0;
    int return_val = 1;
    if(argc > 1 && argv != NULL)
    {
        return_val = 0;
        work_with_flags(argv[1]);
    }
    else
    {
        import_file("prli_files/intro.prli","\e[1;32m");
        import_file("prli_files/list_of_text.prli","\e[0;37m");
    }
    

    while (return_val != 0)
        {
            const char *text_choose_number = "\033[0;33mChoose a number\033[0m : \033[0;32m";
            write(1,text_choose_number,36);

            int result = scanf("%d", &val);
            if (result != 1) 
            {
                while (getchar() != '\n');
                printf("Invalid input! Please enter a valid number btween 0 and 18.\n");
                continue;
            }
            return_val = max_and_min_number_print(val);
        }
    return(0);
}


void work_with_flags(char *flag)
{
    int index_flag = 0;

    if (ft_strcmp(flag, "CHAR_BIT") == 0)
    printf("CHAR_BIT = %d\n", CHAR_BIT);
else if (ft_strcmp(flag, "SCHAR_MIN") == 0)
    printf("SCHAR_MIN = %d\n", SCHAR_MIN);
else if (ft_strcmp(flag, "SCHAR_MAX") == 0)
    printf("SCHAR_MAX = %d\n", SCHAR_MAX);
else if (ft_strcmp(flag, "UCHAR_MAX") == 0)
    printf("UCHAR_MAX = %u\n", UCHAR_MAX);
else if (ft_strcmp(flag, "SHRT_MIN") == 0)
    printf("SHRT_MIN = %d\n", SHRT_MIN);
else if (ft_strcmp(flag, "SHRT_MAX") == 0)
    printf("SHRT_MAX = %d\n", SHRT_MAX);
else if (ft_strcmp(flag, "MB_LEN_MAX") == 0)
    printf("MB_LEN_MAX = %d\n", MB_LEN_MAX);
else if (ft_strcmp(flag, "USHRT_MAX") == 0)
    printf("USHRT_MAX = %u\n", USHRT_MAX);
else if (ft_strcmp(flag, "INT_MAX") == 0)
    printf("INT_MAX = %d\n", INT_MAX);
else if (ft_strcmp(flag, "INT_MIN") == 0)
    printf("INT_MIN = %d\n", INT_MIN);
else if (ft_strcmp(flag, "UINT_MAX") == 0)
    printf("UINT_MAX = %u\n", UINT_MAX);
else if (ft_strcmp(flag, "LONG_MIN") == 0)
    printf("LONG_MIN = %ld\n", LONG_MIN);
else if (ft_strcmp(flag, "LONG_MAX") == 0)
    printf("LONG_MAX = %ld\n", LONG_MAX);
else if (ft_strcmp(flag, "ULONG_MAX") == 0)
    printf("ULONG_MAX = %lu\n", ULONG_MAX);
else if (ft_strcmp(flag, "LLONG_MIN") == 0)
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
else if (ft_strcmp(flag, "LLONG_MAX") == 0)
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
else if (ft_strcmp(flag, "ULLONG_MAX") == 0)
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX);
else if (ft_strcmp(flag, "-help") == 0)
    import_file("prli_files/help.prli","\e[0;37m");
    
else
    printf("\033[0;31m\nUse -help\n\n");
}