int test()
{
  int x;
  x = 2;
  if(false){
    if(false){
      x = 3;
    }else{
      if(false){
        x = 0;
      }else{
        x = -99;
      }
    }
  }else{
    if(true){
      x = x + 100;
      if(true){
        x = x + 100;
      }
      x = x + 200;
      if(true){
        x = x + 5;
      }
    }
  }
  return x;
}