#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void insomia(int num) {
  int count[26];
  memset(count, 0, 26 * sizeof(int)); //copies 0 to count 26 times
  char buffer[100];
  long n;
  scanf(" %d ", &n);
  long cur = 0;
  d("Input: %d\n", n);
  if (!n) {
    printf("Case #%d: INSOMNIA\n", num);
    return;
  }
  int remain = 10;
  while (remain) {
    cur += n;
    sprintf(buffer, "%d", cur);
    for (const char *k = buffer; *k; ++k) {
      int a = *k - '0';
      if (!count[a]) {
        count[a] = 1;
        --remain;
      }
    }
  }
  printf("Case #%d: %d\n", num, cur);
}

int main() {
  int t;
  scanf("%d", &t);
  for  (int i = 1; i <= t; ++i) { //constaint in T
    insomia(i);
  }
  return 0;
}
