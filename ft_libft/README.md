# Libft

Libft is a **custom C library** that reimplements essential functions from the standard C library.  
The goal of this project is to help students understand how these low-level functions work and build strong programming foundations. 

Libft will be reused in many future 42 projects.

---

## 📌 Objectives

- Recreate standard libc functions.
- Learn memory management and pointer manipulation.
- Write clean, reusable, and robust code.
- Build your **first personal library**: `libft.a`

---

## 📁 Project Structure

├── `libft.h` Header file with all function prototypes <br>
├── `ft_*.c` Function implementations<br>
├── `Makefile` Build system<br>
└── `libft.a` Compiled static library (generated)

---

## ⚙️ Compilation

Compile the library with:
```bash
make
```
Clean object files with:
```bash
make clean
```
Remove objects files + library with:
```bash
make fclean
```
Recompile everything with:
```bash
make re
```
## ✅ How to Use the Library

In your main.c file (*for example*):
```c
#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac == 4)
	{
		printf("official strncmp: %d\n", strncmp(av[1], av[2], ft_atoi(av[3])));
		printf("ft_strncmp: %d", ft_strncmp(av[1], av[2], ft_atoi(av[3])));
		printf("official memcmp: %d\n", memcmp(av[1], av[2], ft_atoi(av[3])));
		printf("ft_memcmp: %d\n", ft_memcmp(av[1], av[2] ft_atoi(av[3])));
		printf("official strnstr: %s\n", strnstr(av[1],av[2], ft_atoi(av[3])));
		printf("ft_strnstr: %s", ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	}
	return (0);
}
```
Compile with:
```bash
make
cc main.c libft.a
```
## 🧩 Mandatory Functions
🟦 Part 1 – Libc Functions

You must reimplement the following standard functions (prefixed with `ft_`):

`isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`
`strlen`, `memset`, `bzero`, `memcpy`, `memmove`
`strlcpy`, `strlcat`, `toupper`, `tolower`
`strchr`, `strrchr`, `strncmp`, `memchr`, `memcmp`
`strnstr`, `atoi` <br>
→ Plus: `calloc`, `strdup` (*using `malloc`*)

🟦 Part 2 – Additional Functions

| Function Name | Description                                 |
|:--:|:--|
| `ft_substr`     | Allocates memory (using malloc) and returns a substring from the string `s`. The substring starts at index `start` and has a maximum length of `len`. |
| `ft_strjoin`    | Allocates memory (using malloc) and returns a new string, which is the result of concatenating `s1` and `s2`. |
| `ft_strtrim`    | Allocates memory (using malloc) and returns a copy of `s1` with characters from `set` removed from the beginning and the end. |
| `ft_split`      | Allocates memory (using malloc) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. The array must end with a NULL pointer. |
| `ft_itoa`       | Allocates memory (using malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| `ft_strmapi`    | Applies the function `f`  to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to store the results from the successive applications of `f`. |
| `ft_striteri`   | Applies the function `f` to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to `f` so it can be modified if necessary. |
| `ft_putchar_fd` | Outputs the character `c` to the specified file descriptor.|
| `ft_putstr_fd`  | Outputs the string `s` to the specified file descriptor. |
| `ft_putendl_fd` | Outputs the string `s` to the specified file descriptor followed by a newline. 
| `ft_putnbr_fd`  | Outputs the integer `n` to the specified file descriptor. |
 
## 🧩 Bonus Functions

| Function Name | Description                                 |
|:--:|:--|
| `bla` | blabla |

## 🧪 Testing the Library

You are encouraged to create your own test files:

In test.c file *(for example)*:
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isalpha('A'));
    return (0);
}
```

Compile with:
```bash
make
cc test.c libft.a
```

You can also use external testers (libftTester, etc.).

## 💡 Tips & Good Practices

- Respect the 42 Norm.
- No memory leaks.
- Use static functions for helpers.
- Test each function individually.
- Read the man pages carefully.
- Think before coding —> understand the logic.

## ✅ Conclusion

Libft is not just an assignment —> it’s **the foundation of your C journey**.
By building these functions yourself, you will deeply understand how low-level programming works.

*“Don’t copy code. Understand it. You will reuse this library in many future projects.”*