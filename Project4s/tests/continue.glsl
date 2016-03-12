int test(){
  int i;
  int x;
  x = 0;
  for(i = 0; i<10; i = i+1){
    if(i == 9) continue;
    x = x+1;
  }

  return x;
}