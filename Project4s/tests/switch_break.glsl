int test (){
  int x;
  x = -1;
  switch(1) {
    case 1: {break; x = 2; }
    case 2: x = 3;
    default: x = 10;
  }

  return x;
}