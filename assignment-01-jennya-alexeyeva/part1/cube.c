long cube(long num) {
  long result;
  if (num == 1) {
    return 1;
  }
  result = num * num;
  return result * num;
}
