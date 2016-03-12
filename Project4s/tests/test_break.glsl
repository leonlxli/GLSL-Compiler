int test() {
  int i;
  int val;
  i = 0;
  val = 0;

  if(true){
    while(i < 100){
      val++;
      if(val < 50){
        i++;
        continue;
      }
      if(i == 80)break;
      i = i + 1;
    }
  }else{
    while(true){
      i = i+1;
      break;
    }
  }
  
  return i;
}

// Outputs 80