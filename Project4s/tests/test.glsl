int g;
int test(int x) { // 5
  int j;

  while( x < 10 ){
    for( j = 0; j < 5; j++){
      g*=2;
    }
    x++;
  }
  return g;
}