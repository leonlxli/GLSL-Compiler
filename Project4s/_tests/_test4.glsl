int test4(int y){
  int x;
  x = 5;
  switch(x){
          case 4:
            y = 2;
            break;
          case 5:
            x += 15;
            return x;
          default:
            y = 1;
            break;
  }
  return y;
}