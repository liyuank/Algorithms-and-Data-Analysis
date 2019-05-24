# Ask user to input a number and then this program will start to guess the number!

low = 1
high = 100
#number = random.randint(low, high)

print("******************************")
print("* Welcome to Guess a Number! *")
print("******************************")
print("\nPlease input a number between 1 and 100.\n")

guess = int((low + high)/2)

if guess > 100:
	print("Please input number smaller than 101.")
	pass
if guess < 1:
	print("Please input number bigger than 0")
	pass

number = int(input("Please input a number: "))

print("I'll start to guess!")
print("First guess: ", guess)

while guess != number:
	if guess > number:
		print(guess, " is larger than the number.")
		high = guess
		guess = int((high + low)/2)
		print("Is it ", guess, " ?")
	if guess < number:
		print(guess, " is smaller than the number.")
		low = guess
		guess = int((high + low)/2)
		print("Is it ", guess, " ?")



print("It is " + str(guess) + " !")
