// package main

// import (
// 	"fmt"
// 	"math"
// )

// //f(x) = ctg(x) - x/2 = 0
// func fx(x float64) float64 {

// 	return 1 - math.Cos(x)/2

// }

// func fy(y float64) float64 {

// 	return math.Sin(y+1)-1.2

// }

// // //f'(x) = -1/(sin(x)*sin(x)) - 1/2
// // func fp1(x float64) float64 {

// // 	return (-1/(math.Sin(x)*math.Sin(x)) - 1/2)

// // }

// // //f''(x) = (2*cos(x)*cos(x))/sin(x)*sin(x)*sin(x)
// // func fp2(x float64) float64 {

// // 	return (2 * math.Cos(x) * math.Cos(x)) / math.Sin(x) * math.Sin(x) * math.Sin(x)

// // }

// func main() {
	
// 	var ay,ax,acc float64 = -0.3, 0.3, 0.001
	
// 	var flag = true
// 	var xn float64 = ax
// 	var yn float64 = ay
// 	for ;flag;{

// 		x0 := xn
// 		y0 := yn
// 		xn = fx(x0)
// 		yn = fy(y0)

// 		fmt.Println(xn,yn)
		
// 		if math.Abs(math.Abs(x0)-math.Abs(xn)) < acc && math.Abs(math.Abs(y0)-math.Abs(yn)) < acc{
// 			flag = false
// 		}
		

// 	}
// 	fmt.Println(acc)

// }
