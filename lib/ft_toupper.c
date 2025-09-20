// #include <stdio.h>

int ft_toupper(int c) {
  if (c >= 97 && c <= 122) {
    c = c - 32;
  }
  return c;
}

// int main() {
//   printf("%c\n", ft_toupper('f'));
//   printf("%c\n", ft_toupper('a'));
// }
