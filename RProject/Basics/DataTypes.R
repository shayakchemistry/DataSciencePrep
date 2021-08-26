# R program for Data Types basics in R

# Atomic Vectors Example
# In Atomic vector we have 6 date types and are demonstrated below

# Logical Data Type example

logical_var1 <- TRUE
print(class(logical_var1))

# Numeric Data Type example
num_var1 <- 123.44
print(class(num_var1))

# Integer Data Type example
int_var1 <- 141L
print(class(int_var1))

# Complex Data Type example
cmplx_var1 <- 2+3i
print(class(cmplx_var1))

# Character Data Type example
char_var1 <- "HELLO R"
print(class(char_var1))

# Raw Data Type example
raw_var1 <- charToRaw(char_var1)
print(class(raw_var1))

# 1-D vector
vec_var1 <- c(1,31,1)
print(class(vec_var1)) # Will print the datatype of the values

# Lists Example

# Creating a list
list1 <- list("HELLO", 3+2i, "WORLD", c(31.2, 55.1))
print(class(list1))
print(list1) # Here we can see that it is a 2D data structure

# Naming rows in a list
list2 <- list(c("Red", "Blue", "Green"), c(1, 2, 3), c(1+2i, 2+3i, 3+4i))
names(list2) <- c("colors", "numbers", "imaginary")
print(list2)

# Accessing a list
print(list2[1])
print(list2$imaginary) #another way
print(list2[[1]][1]) # Access independent elements

# Updating values
list2[3] <- "WELCOME"
list2[4] <- "TEST123" # Way to add values
print(list2)

# List to vector
list3 <- list(1:5)
print(list3)
vec2 <- unlist(list3)
print(list3)


# Matrices Example

# Creating a matrix
matrix1 <- matrix(c(3:14), nrow = 4, byrow = TRUE) # We use range operator (":") to generate a range of numbers
print(matrix1)

#Putting names to the rows and columns and accessing them
row_names = c("row1", "row2", "row3", "row4")
col_names = c("col1", "col2", "col3")
matrix2 <- matrix(c(3:14), nrow = 4, byrow = TRUE, dimnames = list(row_names, col_names))
print(matrix2)

print(matrix2[1,1]) # Access 1st row 1st col
print(matrix2[,3]) # Access all of 3rd col

matrix3 <- matrix(c(3, 9, -1, 4, 2, 6), nrow = 2)
print(matrix3)

matrix4 <- matrix(c(5, 2, 0, 9, 3, 4), nrow = 2)
print(matrix4)

# Matrix arithmetic
res1 <- matrix3 + matrix4
print(res1) # Result of addition

res1 <- matrix3 - matrix4
print(res1) # Result of subtraction

res1 <- matrix3 * matrix4
print(res1) # Result of multiplication

res1 <- matrix3 / matrix4
print(res1) # Result of division


# Arrays Example

# Creating an array
arr1 <- array(c(1:8),dim = c(2,2,2))
print(arr1)

# Accessing the elements
col_names <- c("COL1","COL2")
row_names <- c("ROW1","ROW2")
matrix_names <- c("Matrix1","Matrix2")

# Take these vectors as input to the array.
arr2 <- array(c(1:8),dim = c(2,2,2),dimnames = list(row_names, col_names, 
                                                    matrix_names))
print(arr2)

# Accessing the elements
print(arr2[1,1,1]) # Selecting single element
print(arr2[2,,1]) # Selecting all cols for row 2 and matrix 1


# Factors Example

# Creating an Factors
data1 <- c("Blue", "Blue", "Red", "Red", "Red", "Black")
print(data1)
print(is.factor(data1))

factor1 <- factor(data1)
print(factor1)
print(is.factor(factor1))


# Data Frames Example

df1 <- data.frame(
  id = c (1:4), 
  name = c("A","B","C","D"),
  salary = c(112, 441, 66, 89),
  stringsAsFactors = FALSE
)

print(df1) 
