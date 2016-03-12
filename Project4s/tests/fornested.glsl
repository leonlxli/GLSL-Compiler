int test() {
  int val;
  int i;
  int j;
  int k;
  val = 0;
  for(i=0; i<10; i++){
    for(j=0; j< 10; j++){
      for(k=0; k<j; k++){
        if(j == 5) break;
        val++;   
      }
    }
  }
  return val;
}

// returns 400