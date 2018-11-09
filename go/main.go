package main

import (
	"fmt"
	"math"
)

//f(x) = ctg(x) - x/2 = 0
func f(x float64) float64 {

	return (-1/(math.Sin(x)*math.Sin(x)) - 1/2)

}

//f'(x) = -1/(sin(x)*sin(x)) - 1/2
func fp1(x float64) float64 {

	return (1/math.Tan(x) - x/2)

}

//f''(x) = (2*cos(x)*cos(x))/sin(x)*sin(x)*sin(x)
func fp2(x float64) float64 {

	return (2 * math.Cos(x) * math.Cos(x)) / math.Sin(x) * math.Sin(x) * math.Sin(x)

}

func main() {
	// var a,b,acc float64 = 1,1.5,0.001
	var a, b, acc float64 = 1, 1.3, 0.001
	//var s []float64 //s = append(s,dasdasd)
	fmt.Println(f(a) * fp2(a)) // f(a) * f''(a) > 0 тоді початкове наближення = 1
	fmt.Println(f(b) * fp2(b)) // f(a) * f''(a) > 0 тоді початкове наближення = 1
	var j = 0
	var xn float64 = a
	var dx float64
	var d float64
	for i := xn; j < 10; i = xn {

		dx := f(i) / fp1(i)
		fmt.Printf(" %v  x= %f  f(x)= %f  f'(x)= %f  dx= %f \n", j, xn, (1/math.Tan(i) - i/2), -1/(math.Sin(i)*math.Sin(i))-1/2, dx)
		xn = xn + dx
		d = math.Abs((xn - dx) - xn)
		j++
		fmt.Println(d)

	}
	fmt.Println(dx, acc, b)

}
