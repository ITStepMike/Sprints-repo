package main

import (
	"fmt"
	"math"
)


func yf(x float64) float64{

	return 1-math.Cos(x)/2

}

func xf(x float64, y float64) float64{

	return math.Sin(y+1)-x-1.2

}

func main() {

	var x0,y0 float64 = -0.4,0.4
	var acc float64 = 0.001
	var xprev,yprev,xcurr,ycurr float64 = 0,0,x0,y0

	for k:=1;math.Abs(yprev-ycurr)>acc || math.Abs(xprev-xcurr)>acc;k++{

		xprev=xcurr
		yprev=ycurr
		xcurr = xf(xprev,yprev)
		ycurr=yf(xprev)
		fmt.Printf("x[%v]=%f\ty[%v]=%f\n",k,xcurr,k,ycurr)

	}
	fmt.Printf("yacc: %f\txacc: %f\n",math.Abs(yprev-ycurr),math.Abs(xprev-xcurr))

}
