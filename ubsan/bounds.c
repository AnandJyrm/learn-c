// Index out of bounds
void foo(int i) {
  int x[2];
  x[i] = 48;
  // runtime error: index 2 out of bounds for type 'int[2]'
}

int main(void) {
  foo(2);
  return 0;
}
