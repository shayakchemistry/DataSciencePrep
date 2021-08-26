# Loops demo in R

# Repeat loop example

counter1 <- 1

repeat {
  print(counter1)
  counter1 <- counter1 + 1
  if (counter1 > 5) {
    break
  }
}

# While loop example

counter2 <- 1

while(counter2 < 5) {
  print(counter2)
  counter2 <- counter2 + 1
}

# For loop example
# Works same as Python. For i in vector do ....

range1 <- LETTERS[1:6]
for (i in range1) {
  print(i)
}


# Loop control statement
# Break statement example

for (i in range1) {
  print (i)
  if (i == "D") {
    break
  }
}

# Next statement example

for (i in range1) {
  if (i == "D") {
    next
  }
  print (i)
}
