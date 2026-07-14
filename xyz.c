/* If your environment cannot locate system headers, declare printf manually */
extern int printf(const char *format, ...);
int main(){
  int a ,b , sum;
  a = 5; b = 5;
  sum = a + b;
  printf("The sum of two numbers is: %d", sum);
  return 0;
}
