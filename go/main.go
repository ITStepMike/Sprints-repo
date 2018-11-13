package main

import (
	"fmt"
	"math"
)

//f(x) = ctg(x) - x/2 = 0
func f(x float64) float64 {

	return (1/math.Tan(x) - x/2)

}

//f'(x) = -1/(sin(x)*sin(x)) - 1/2
func fp1(x float64) float64 {

	return (-1/(math.Sin(x)*math.Sin(x)) - 1/2)

}

//f''(x) = (2*cos(x)*cos(x))/sin(x)*sin(x)*sin(x)
func fp2(x float64) float64 {

	return (2 * math.Cos(x) * math.Cos(x)) / math.Sin(x) * math.Sin(x) * math.Sin(x)

}

func main() {
	
	var a,b,acc float64 = 1, 1.3, 0.001
	
	fmt.Println(b)
	var flag = true
	var xn float64 = (a+b)/2
	for ;flag;{

		x0 := xn
		xn = x0 - f(x0)
		fmt.Println(xn)
		
		if math.Abs(x0 - xn) < acc{
			flag = false
		}
		

	}
	fmt.Println(acc)

}
