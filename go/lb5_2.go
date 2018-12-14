package main

import (
	"fmt"
	"math"
)


func yf(x float64, y float64) float64{

	return 0.6*x*x+2*y*y-1

}

func dyx(x float64,) float64{

	return 2*0.6*x

}

func dyy(y float64) float64{

	return 2*2*y

}

func xf(x float64, y float64) float64{

	return math.Tan(x*y+0.2)-x*x

}

func dxx(x float64, y float64) float64{

	return y*math.Tan(x*y+0.2)-2*x

}

func dxy(x float64, y float64) float64{

	return x*math.Tan(x*y+0.2)

}

func method(x float64,y float64,acc float64){

	var xprev,yprev,xcurr,ycurr,delta1,delta2,J float64 = 0,0,x,y,0,0,0

	for k:=1;math.Abs(math.Abs(yprev)-math.Abs(ycurr))>acc || math.Abs(math.Abs(xprev)-math.Abs(xcurr))>acc;k++{

		xprev=xcurr
		yprev=ycurr
		J=dxx(xprev,yprev)*dyy(yprev)-dxy(xprev,yprev)*dyx(xprev)
		delta1=xf(xprev,yprev)*dyy(yprev)-yf(xprev,yprev)*dxy(xprev,yprev)
		delta2=dxx(xprev,yprev)*yf(xprev,yprev)-xf(xprev,yprev)*dyx(xprev)
		xcurr = xprev-delta1/J
		ycurr = ycurr - delta2/J
		fmt.Printf("x[%v]=%f\ty[%v]=%f\n",k,xcurr,k,ycurr)

	}

}

func main() {

	var x0,y0,acc float64 = 0.5,0.5,0.001
	method(x0,y0,acc)

}
