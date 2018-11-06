package main

import (
  "math"
  "fmt"
)

func main() {
  
  var s, e, acc float64 = -10, 10, 0.001
  //xa := math.Sin((2-math.Cos(x)/2)+1) - 1.2
  var max float64 = 100
  var maxd, temp float64
  for i:= s; i < e; i = i + acc {

    xa := math.Sin((2-math.Cos(i)/2)+1) - 1.2
    switch{

    case xa < 0 && i < 0:
      //    fmt.Printf("%f  ",i)
      if xa < i{
        temp = -xa + i
      }else if i < xa{
        temp = -i + xa
      }
      fmt.Printf("%f  ",temp)
      break;

    case xa < 0 && i > 0:
      //    fmt.Printf("%f  ",i)
      if -xa > i{
        temp = (-xa) - i
      }else if -xa < i{
        temp = i + xa
      }
      fmt.Printf("%f  ",temp)
      break;

    case xa > 0 && i < 0:
      //fmt.Printf("%f  ",i)
      if xa < -i{
        temp = xa - (-i)
      }else if xa > -i{
        temp = xa + i
      } 
      break;

    case xa > 0 && i > 0:
      ////fmt.Printf("%f  ",i)
        if xa > i{
          temp = xa - i
        }else if xa < i{
          temp = i - xa
        }
      break;

    case i == xa:
      ////fmt.Printf("%f  ",i)
      fmt.Println("5")
      temp = 0
      break; 

    }
    if max > temp{
      max = temp
      maxd = i
    }
    
    
  }



  fmt.Println(maxd)
  fmt.Println(max)
  fmt.Println(temp)

}
