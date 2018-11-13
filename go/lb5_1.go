// package main

// import (
// 	"fmt"
// 	"math"
// )

// type Answer struct{

//   id int
//   x float64
//   res float64

// }

// //f(x) = ctg(x) - x/2 = 0
// func f(x float64) float64 {

// 	return (1/math.Tan(x) - x/2)

// }


// func main() {
  
//   //var xa float64 = 1/math.Tan(x) - x/2
//   var a, acc, b  float64 = 1, 0.001, 1.3
//   obj := Answer{}
// 	flag := true
//   for i := a; flag ; {

//     i = i - ((f(i) / (f(b) - f(i)) ) * (b - i))
//     fmt.Printf("%f   ",i)
//     obj.x = i
    
//     if f(i) <= acc && f(i) >= 0{
      
//       obj.res = f(i)
// 	  flag = false
	  
//     }

//   }

//   fmt.Println(obj)
  

// }