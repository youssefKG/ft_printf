// #include <stdio.h>

int ft_get_sign(const char *str, int *idx) {
  int   i;
  int sign;

  i = 0;
  sign = 1;
  while (str[i] && (str[i] == '-' || str[i] == '+')) {
    if (str[i] == '-') {
      sign *= -1;
    }
    i++;
  }
  *idx = i;
  return sign;
}

int ft_atoi(const char *str) {
  int sign;
  int i; 
  int result;

  sign = ft_get_sign(str, &i);
  result = 0;

  while (str[i]) {
    if (!(str[i] >= '0' && str[i] <= '9'))
      break;
    result = (result * 10) + (str[i] - '0');
    i++;
  }
  return result * sign;
}
