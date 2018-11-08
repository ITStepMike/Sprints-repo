package main

import (
	"fmt"
	"math"
)


func main() {
  
  //var xa float64 = 1/math.Tan(x) - x/2
  var a, acc, b  float64 = 3.5, 0.001, 3.7 // функції будуть перетинатися на графіку (в додатніх випадках) на проміжку від [0;нескінченності)
  var arr[4] float64
  j := 0
  for i := a + acc; j < 4; i+=acc {

    ans := (a - acc) - (1/math.Tan(i) - i/2)/((1/math.Tan(b) - b/2) - (1/math.Tan(i) - i/2)) * (b - (1/math.Tan(i) - i/2))
    ans = 1/math.Tan(ans) - ans/2
    fmt.Println(ans)
    if ans > 0{
      arr[j] = i
      arr[j+1] = ans
      j = 4;
    }

  }

  fmt.Println(arr)
  

}