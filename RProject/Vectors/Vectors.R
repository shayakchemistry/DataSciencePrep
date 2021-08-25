# Vectors example

# Creating a vector
vec1 <- c(1,3,6,7)
print(vec1)

# Accessing the elements
print(vec1[2]) # Here index is from 1

# Sequences
vec1 <- c(1:6) # Using : operator
print(vec1) 

vec1 <- seq(from=15,to=35,by=2) # using seq function
print(vec1)

print(vec1[1:3]) # Accessing using sequences

# Repetition
vec1 <- rep("POM",4)
print(vec1)

vec1 <- rep(313,4)
print(vec1)

# Random Numbers and sampling
data1 <- c(1:20)
print(sample(x=data1,size=15,replace=TRUE)) # Random number from a selected sample itemset
print(sample(x=data1,size=15,replace=FALSE)) 

var1 <-runif(5,4,9) # Random number based on uniform distribution between 4 and 9
print(var1)

# Rounding off numbers
print(round(var1, digits=3))
print(signif(var1, digits=3))

# Formatting numbers
print(format(var1,trim = TRUE, digits = 3)) # Similar to signif

# Filtering of data
data1 <- c(1:40)
print(data1[data1 %in% c(35,1,21)]) # using %in%

print(data1[data1%%5 == 0]) # Using index condition

print(all(data1 > 3)) # Some conditions
print(any(data1 > 3))
print(which(data1 > 20))
print(subset(data1, data1 > 25))

# Binning
library("bda")
res1 <- binning(data1)
print(res1)

# Operations

vec_a <- c(1:5)
vec_b <- c(4:8)

vec_c <- c(11:13)

# Arithmetic Operations
print(vec_a + vec_b)

print(vec_a - vec_b)

print(vec_a * vec_b)

print(vec_a / vec_b)

print(crossprod(vec_a, vec_b))

# Element Recycling

print(c(1,2,4) + c(6,0,9,10,13)) # R will try to replace the missing values
# IS SAME AS
print(c(1,2,4,1,2) + c(6,0,9,10,13))

# Sort

data2 <- c(12, 4, 11, 5, 2)
print(sort(data2))

# Modify

data2[2] <- 99
print(data2)

# Delete 
data2 <- NULL
print(data2)

