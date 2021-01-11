func  A1( m: int) return int
{
     var n: int;
     n = 10;
     if (m == 11)
            n = 12;
     else
            n = 13;
     return  m + n;
}

proc  Main( )
{
      var  x, y: int;
      x = 0;
      while(x < 14)  {
           y = A1(15);
           x = x + y;
      }
}