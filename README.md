*This project has been created as part of the 42 curriculun by tkamil-h*

# Description
In this project, we create a function that will mimic the original printf().

For the realisation, we will use some functions in libft project.
## usefull functions
`print_char` : function that print a single character;

`print_str` : function that print a string;

`print_pointer` : function that take a pointer as an argument and it will be printed in hexadecimal format;

`print_nbr` : funtion that print a decimal number;

`print_unsigned` : function that print unsigned decimal number;

`print_hex` : function that print a decimal in hexadecimal format.

# Instruction
To compile those fonction a main fonction should be created (there is a main.c model in this file) or we also can use testers from web. We also use Makefile to automate the compilation and the repetitives tasks.

## command
`make` = launch Makefile.

`make clean` = remove only all objects files (.o).

`make fclean` = execute `clean` than remove the library libft.a.

`make re` = launch `fclean` than execute `all`

`make all` = launch all instruction for compiling all .c files.

To compile a specifique source file (.c), run the following command :
```bash
make
make clean
cc -Wall -Wextra -Werror file.c libft.a
./a.out
```

## main model
```c
int main()
{
    char *str = "Hello World!!";
    ft_printf("%s", str);
    return (0);
}

```


# Resource
During the implementation, I've got to consult some ducumentation, website and tutorial like W3school (https://www.w3schools.com/), a tutorial of Barry Brown and evolunoob on youtube. I have also used AI to ask him some features I need in the implementation.

# Description of the Libraries

`stdlib.h` : a C langage library  grouping functions to manage mamory, number conversion, and controle processus.

`stdint.h` : a library that defines types of integers whose size is exact.

`unistd.h` : this library is the door of emtry for systms call.

`stdarg.h` : a C langage library containing the following features ; `va_start, va_arg, va_copy, va_end`; those features are usefull in the implentation of the ft_printf() function.
