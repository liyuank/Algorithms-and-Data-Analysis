a <- as.numeric(readline("a =  "))
b <- as.numeric(readline("b =  "))
c <- as.numeric(readline("c =  "))

if (b^2 > 4*a*c) {
	pos_root <- ((-b) + sqrt((b^2) - 4*a*c)) / (2*a)
	neg_root <- ((-b) - sqrt((b^2) - 4*a*c)) / (2*a)
	print(pos_root)
	print(neg_root)

} else if (b^2 == 4*a*c)
{
	x <- -(b)/(2*a)
	print(x)
} else print("No real number solution!")
