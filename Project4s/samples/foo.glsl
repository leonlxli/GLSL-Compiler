int foo(int x) {

    switch( x+10 ){
       case 1:
          return x;
       case 2:
          return x;
       case 3:
          x=50;
       default:
       	  x = 25;

    }
    return x;
}