void reverse(t) char t[]; {
 
 int i, leng = 0;
  
  for (i = 0; t[i] != '\0'; i++) {
    leng++;
  }
  
  for (i = leng - 1; i >= 0; i--) {
    printf("%c", t[i]);
  }
  printf("\n");
    return;
} 
