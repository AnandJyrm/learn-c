// shift
int main(void) {
  unsigned int j = 1 << 31;
  // runtime error: left shift of 1 by 31 places cannot be represented in type 'int'
  return 0;
}
